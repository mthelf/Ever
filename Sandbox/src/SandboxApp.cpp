#include <Ever.h>


class Sandbox : public Ever::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Ever::Application* Ever::CreateApplication()
{
	return new Sandbox();
}