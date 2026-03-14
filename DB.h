#pragma once
#include <iostream>
#include "DB.h"
#include <clocale>
#include <mysql/jdbc.h>
#include <msclr/marshal_cppstd.h>

using std::cout;
using std::endl;
using std::string;
using std::unique_ptr;
using namespace System;
using namespace System::Windows::Forms;


class DB
{
private:
	const string SERVER = "tcp://localhost:3306";
	const string USER = "root";
	const string PASSWORD = "root";
	const string DATABASE = "winforms";

	unique_ptr<sql::Connection> conn;
	unique_ptr<sql::PreparedStatement> ptmt;
	unique_ptr<sql::ResultSet> res;

	void connect()
	{
		try
		{
			sql::mysql::MySQL_Driver* driver = sql::mysql::get_driver_instance();
			conn = unique_ptr<sql::Connection>(driver->connect(SERVER, USER, PASSWORD));

			if (conn)
				conn->setSchema(DATABASE);
			else
				cout << "Error in MySQL" << endl;
		}

		catch (sql::SQLException& ex)
		{
			cout << "MySQL error: " << ex.what() << endl;
		}
	}

	void disconnect()
	{
		if (conn)
		{
			conn->close();
			cout << "Close the database";
		}
	}

public:
	void add_user(String^ login, String^ password)
	{
		connect();

		string user_login = msclr::interop::marshal_as<string>(login);
		string user_pass = msclr::interop::marshal_as<string>(password);

		try
		{
			ptmt = unique_ptr<sql::PreparedStatement>(
				conn->prepareStatement("INSERT INTO users(login, password) VALUES(?, ?)")
			);
			ptmt->setString(1, user_login);
			ptmt->setString(2, user_pass);
			ptmt->execute();

		}
		catch (sql::SQLException& ex)
		{
			cout << "MySQL error: " << ex.what() << endl;
		}

		disconnect();
	}

	bool auth_user(String^ login, String^ password)
	{
		connect();

		bool user_found = false;

		string user_login = msclr::interop::marshal_as<string>(login);
		string user_pass = msclr::interop::marshal_as<string>(password);

		try
		{
			ptmt = unique_ptr<sql::PreparedStatement>(
				conn->prepareStatement("SELECT id FROM users WHERE login = ? AND password = ?")
			);
			ptmt->setString(1, user_login);
			ptmt->setString(2, user_pass);
			res = unique_ptr<sql::ResultSet>(ptmt->executeQuery());

			user_found = res->next();

		}
		catch (sql::SQLException& ex)
		{
			cout << "MySQL error: " << ex.what() << endl;
		}

		disconnect();
		return user_found;
	}

	void add_task(String^ task)
	{
		connect();

		string user_task = msclr::interop::marshal_as<string>(task);

		try
		{
			ptmt = unique_ptr<sql::PreparedStatement>(
				conn->prepareStatement("INSERT INTO tasks(task) VALUES(?)")
			);
			ptmt->setString(1, user_task);
			ptmt->execute();

		}
		catch (sql::SQLException& ex)
		{
			cout << "MySQL error: " << ex.what() << endl;
		}

		disconnect();
	}

	ListBox::ObjectCollection^ get_tasks()
	{
		connect();

		unique_ptr<sql::Statement> stmt(conn->createStatement());
		unique_ptr<sql::ResultSet> res_data(stmt->executeQuery("SELECT * FROM tasks ORDER BY id DESC"));

		disconnect();

		if (!res_data->next())
			return nullptr;

		ListBox^ task_list = gcnew ListBox;
		while (res_data->next())
		{
			String^ value = gcnew String(res_data->getString("task").c_str());
			task_list->Items->Add(value);
		}
		return task_list->Items;
	}

	void delete_task(String^ delete_task)
	{
		connect();

		string user_task = msclr::interop::marshal_as<string>(delete_task);

		try
		{
			ptmt = unique_ptr<sql::PreparedStatement>(
				conn->prepareStatement("DELETE FROM tasks WHERE task = ?")
			);

			ptmt->setString(1, user_task);
			ptmt->execute();

		}
		catch (sql::SQLException& ex)
		{
			cout << "MySQL error: " << ex.what() << endl;
		}

		disconnect();
	}


	void update_task(String^ old_task, String^ new_task)
	{
		connect();

		bool user_found = false;

		string old = msclr::interop::marshal_as<string>(old_task);
		string new_t = msclr::interop::marshal_as<string>(new_task);

		try
		{
			ptmt = unique_ptr<sql::PreparedStatement>(
				conn->prepareStatement("UPDATE tasks SET task = ? WHERE task = ?")
			);
			ptmt->setString(1, new_t);
			ptmt->setString(2, old);
			res = unique_ptr<sql::ResultSet>(ptmt->executeQuery());

			user_found = res->next();

		}
		catch (sql::SQLException& ex)
		{
			cout << "MySQL error: " << ex.what() << endl;
		}

		disconnect();
	}

	void delete_user(String^ login)
	{
		connect();
		string user_login = msclr::interop::marshal_as<string>(login);

		try
		{
			ptmt = unique_ptr<sql::PreparedStatement>(
				conn->prepareStatement("DELETE FROM users WHERE login = ?")
			);
			ptmt->setString(1, user_login);
			ptmt->executeUpdate();
		}
		catch (sql::SQLException& ex)
		{
			cout << "MySQL error: " << ex.what() << endl;
		}

		disconnect();
	}

};
