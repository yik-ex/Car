#include <iostream>
#include "Car.h"

//Compare two cars by year and return the biggest of then, case they are equal, return the first argument 
const Car & CompareByYear(const Car & car_1, const Car & car_2)
{
	if (car_1.GetYear() >= car_2.GetYear())
	{
		return car_1;
	}
	else
	{
		return car_2;
	}
}

//Compare two cars by engine and return the biggest of then, case they are equal, return the first argument 
const Car & CompareByEngine(const Car & car_1,const Car & car_2)
{
	if (car_1.GetEngineVolume() >= car_2.GetEngineVolume())
	{
		return car_1;
	}
	else
	{
		return car_2;
	}
}

//Ask user for a car information and return the car generated
Car GetCar()
{
	std::string manufacture;
	std::string model;
	unsigned int year;
	unsigned int engine_volume;
	std::string color;

	std::cout << "Please enter a car Infromation:" << std::endl;
	std::cout << "Enter the manufacture name:";
	std::cin >> manufacture;
	std::cout << "Enter model:";
	std::cin >> model;

	do
	{
		std::cout << "Enter car's year:";
		std::cin >> year;

	} while ((year < 1910 || year > 2050) && std::cout << "Please enter a valid year\n");

	std::cout << "Enter engine volume";
	std::cin >> engine_volume;

	do
	{
		std::cout << "Enter car color";
		std::cin >> color;

	} while (color.size() >= 10 && std::cout << "Please enter a color with maximum 10 char\n");

	return Car(manufacture, model, year, engine_volume, color);

}

int main(void)
{
	Car car_1, car_2;

	std::cout << "CAR_1" << std::endl;

	car_1 = GetCar();
	car_1.print();

	std::cout << "CAR_2" << std::endl;
	car_2 = GetCar();
	car_2.print();

	std::cout << "Comparing 2 cars by year:" << std::endl;
	
	if (&car_1 == &CompareByYear(car_1, car_2))
	{
		std::cout << "The 1st car is bigger" << std::endl;
	}
	else
	{
		std::cout << "The 2nd car is bigger" << std::endl;
	}

	std::cout << "Comparing 2 cars by engine:" << std::endl;

	if (&car_1 == &CompareByEngine(car_1, car_2))
	{
		std::cout << "The 1st car is bigger" << std::endl;
	}
	else
	{
		std::cout << "The 2nd car is bigger" << std::endl;
	}

	return 0;
}