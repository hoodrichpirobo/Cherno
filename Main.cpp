#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

class Log
{
public:
	Log() = delete;

	static void Write()
	{

	}
};

void Function()
{
	Entity e;
	e.Print();
	e.~Entity();
}

int main()
{
	Function();
	std::cin.get();
}