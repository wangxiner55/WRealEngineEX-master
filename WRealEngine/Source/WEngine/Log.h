#pragma once

#include <memory>
#include <stdio.h>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace WE {
	class WE_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; } 
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	public:
		Log();
		~Log();


	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};


}

// ---------------------------- macros of Loger Print ------------------------------------- //

//  __VA_ARGS__ macros function contatin a variable number of arguments   eg::PR(...){printf(__VA_ARGS__)};
// Link::https://docs.microsoft.com/en-us/cpp/preprocessor/variadic-macros?view=msvc-170
 //core log macros
#define WE_CORE_ERROR(...) ::WE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define WE_CORE_WARN(...)  ::WE::Log::GetCoreLogger()->warn (__VA_ARGS__)
#define WE_CORE_INFO(...)  ::WE::Log::GetCoreLogger()->info (__VA_ARGS__)
#define WE_CORE_TRACE(...) ::WE::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define WE_CORE_FATAL(...) ::WE::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// client log macros
#define WE_ERROR(...) ::WE::Log::GetClientLogger()->error(__VA_ARGS__)
#define WE_WARN(...)  ::WE::Log::GetClientLogger()->warn(__VA_ARGS__)
#define WE_INFO(...)  ::WE::Log::GetClientLogger()->info(__VA_ARGS__)
#define WE_TRACE(...) ::WE::Log::GetClientLogger()->trace(__VA_ARGS__)
#define WE_FATAL(...) ::WE::Log::GetClientLogger()->fatal(__VA_ARGS__)

// ---------------------------- macros of Loger Print ------------------------------------- //