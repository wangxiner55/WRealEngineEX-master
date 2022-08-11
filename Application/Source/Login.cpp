#pragma once
#include <Farmwork.h>


class Login : public WE::Application
{
public:
	Login(){

	}
	~Login()
	{

	}
};

WE::Application* WE::CreateApplication()
{
	return new Login();
}