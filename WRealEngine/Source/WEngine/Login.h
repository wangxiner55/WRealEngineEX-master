#pragma once
#include "Log.h"

#ifdef WE_PLATFORM_WINDOWS
extern WE::Application* WE::CreateApplication();

int main(int argc, char** argv)
{
	WE::Log::Init();
	WE_CORE_WARN("Initialized Core Log");
	WE_WARN("Initialized Client Log");



	auto app = WE::CreateApplication();
	app->Run();
	delete app;
}
#endif