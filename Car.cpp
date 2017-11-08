#include "Car.h"
#include <iostream>


Car::Car()
{
	//DoNothing
}

Car::Car(Car & copyCar)
{
	m_manufacture = copyCar.GetManufacture();
	m_model = copyCar.GetModel();
	m_year = copyCar.GetYear();
	m_engineVolume = copyCar.GetEngineVolume();
	m_color = copyCar.GetColor();
}

Car::Car(std::string manufacture, std::string model, unsigned int year, unsigned int engine, std::string color)
	: m_manufacture(manufacture), m_model(model), m_year(year), m_engineVolume(engine), m_color(color) {}

Car::~Car()
{
}

#pragma region Get

std::string Car::GetManufacture(void) const
{
	return m_manufacture;
}

std::string Car::GetModel(void) const
{
	return m_model;
}

unsigned int Car::GetYear(void) const
{
	return m_year;
}

unsigned int Car::GetEngineVolume(void) const
{
	return m_engineVolume;
}

std::string Car::GetColor(void) const
{
	return m_color;
}

#pragma endregion

#pragma region Set

void Car::SetManufacture(const std::string& manufacture)
{
	m_manufacture = manufacture;
}

void Car::SetModel(const std::string &model)
{
	m_model = model;
}

void Car::SetYear(const unsigned int year)
{
	m_year = year;
}

void Car::SetEngineVolume(const unsigned int engine_volume)
{
	m_engineVolume = engine_volume;
}

void Car::SetColor(const std::string &color)
{
	m_color = color;
}

//Compare two cars by year and return the biggest of then, case they are equal, return the first argument
const Car & Car::CompareByYear(const Car & car_1, const Car & car_2)
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


//Compare two cars by year and return the biggest of then, case they are equal, return the first argument
const Car & Car::CompareByEngine(const Car & car_1, const Car & car_2)
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

#pragma endregion

#pragma region operator_overloading

std::ostream& operator<< (std::ostream& out, Car & someCar)
{
	out << "Printing the car info: \n";
	out << "Manufacture: " << someCar.GetManufacture() << "\n";
	out << "Model: " << someCar.GetModel() << "\n";
	out << "Year:" << someCar.GetYear() << "\n";
	out << "Engine Volume: " << someCar.GetEngineVolume() << "\n";
	out << "Color: " << someCar.GetColor() << "\n";
	return out;
}

#pragma endregion

