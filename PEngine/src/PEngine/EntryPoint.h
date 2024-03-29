#pragma once

#ifdef PE_PLATFORM_WINDOWS

// 다른 파일에서 선언한 전역 변수, 함수, 템플릿 선언을 불러와 사용할 수 있도록 해준다.
extern PEngine::Application* PEngine::CreateApplication();

int main(int argc, char** argv)
{
	PEngine::Log::Init();
	PE_CORE_WARN("Initialized Log!");
	int a = 5;
	PE_INFO("Hello! Var={0}", a);

	PEngine::Application* app = PEngine::CreateApplication();

	app->Run();

	delete app;
}

#endif 