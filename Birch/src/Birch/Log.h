#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Birch {

	class BIRCH_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define BR_CORE_ERROR(...)	::Birch::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BR_CORE_WARN(...)	::Birch::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BR_CORE_INFO(...)	::Birch::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BR_CORE_TRACE(...)	::Birch::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BR_CORE_FATAL(...)	::Birch::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define BR_ERROR(...)		::Birch::Log::GetClientLogger()->error(__VA_ARGS__)
#define BR_WARN(...)		::Birch::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BR_INFO(...)		::Birch::Log::GetClientLogger()->info(__VA_ARGS__)
#define BR_TRACE(...)		::Birch::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BR_FATAL(...)		::Birch::Log::GetClientLogger()->critical(__VA_ARGS)