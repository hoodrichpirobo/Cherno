#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()
	{
	}

	Entity(float x, float y)
	{
		X = x;
		Y = y;
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

int main()
{
	Log::Write();
	Log 1;

	Entity e(10.0f, 5.0f);
	std::cout << e.X << std::endl;
	e.Print();

	std::cin.get();
}