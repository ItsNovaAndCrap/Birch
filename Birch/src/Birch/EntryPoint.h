#pragma once

#ifdef BR_PLATFORM_WINDOWS

extern Birch::Application* Birch::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Birch::CreateApplication();
	app->Run();
	delete app;
}

#endif