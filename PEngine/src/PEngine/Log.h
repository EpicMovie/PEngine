#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace PEngine
{
	class PENGINE_API Log
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

// Core Log Macros
#define PENGINE_CORE_ERROR(...)			::PEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PENGINE_CORE_WARN(...)			::PEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PENGINE_CORE_INFO(...)			::PEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PENGINE_CORE_TRACE(...)			::PEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PENGINE_CORE_CRITICAL(...)		::PEngine::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client Log Macros
#define PENGINE_CLIENT_ERROR(...)			::PEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define PENGINE_CLIENT_WARN(...)			::PEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PENGINE_CLIENT_INFO(...)			::PEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define PENGINE_CLIENT_TRACE(...)			::PEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PENGINE_CLIENT_CRITICAL(...)		::PEngine::Log::GetClientLogger()->critical(__VA_ARGS__)

