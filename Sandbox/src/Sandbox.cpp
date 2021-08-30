#include <PEngine.h>

class Sandbox : public PEngine::Application
{
public:
	Sandbox()
	{

	}

	virtual ~Sandbox()
	{

	}
};

PEngine::Application* PEngine::CreateApplication()
{
	return new Sandbox();
}

