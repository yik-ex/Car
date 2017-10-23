#include "Car.h"
#include <iostream>


Car::~Car()
{
}

#pragma region Get/Set

std::string Car::GetManufacture(void)
{
	return manufacture;
}

std::string Car::GetModel(void)
{
	return model;
}

unsigned int Car::GetYear(void)
{
	return year;
}

unsigned int Car::GetEngineVolume(void)
{
	return engine_volume;
}

std::string Car::GetColor(void)
{
	return color;
}

void Car::SetManufacture(const std::string manufacture)
{
	this->manufacture = manufacture;
}

void Car::SetModel(const std::string model)
{
	this->model = model;
}

void Car::SetYear(const unsigned int year)
{
	this->year = year;
}

void Car::SetEngineVolume(const unsigned int engine_volume)
{
	this->engine_volume = engine_volume;
}

void Car::SetColor(const std::string color)
{
	this->color = color;
}


#pragma endregion

#pragma region Functions

void Car::print(void)
{
	std::cout << "Printing the car info:" << std::endl;
	std::cout << "Manufacture: " << GetManufacture() << std::endl;
	std::cout << "Model: " << GetModel() << std::endl;
	std::cout << "Year:" << GetYear() << std::endl;
	std::cout << "Engine Volume: " << GetEngineVolume() << std::endl;
	std::cout << "Color: " << GetColor() << std::endl;
}

#pragma endregion