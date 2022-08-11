#pragma once
#include "Core.h"

namespace WE {
	class WE_API Application
	{
	public:
		Application();
		virtual ~Application();


		void Run();
	};

	Application* CreateApplication();

}
