#pragma once

#ifdef BR_PLATFORM_WINDOWS

extern Birch::Application* Birch::CreateApplication();

int main(int argc, char** argv)
{
	Birch::Log::Init();
	BR_CORE_TRACE("Initialized Log!");
	int a = 5;
	BR_INFO("Hello! Var={0}", a);

	auto app = Birch::CreateApplication();
	app->Run();
	delete app;
}

#endif