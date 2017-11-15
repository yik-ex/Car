#include "Car.h"
#include <iostream>

unsigned int yik::Car::s_plateCounter = 10000000;

yik::Car::Car()
{
	//DoNothing
}

yik::Car::Car(yik::Car & copyCar)
{
	m_manufacture = copyCar.GetManufacture();
	m_model = copyCar.GetModel();
	m_year = copyCar.GetYear();
	m_engineVolume = copyCar.GetEngineVolume();
	m_color = copyCar.GetColor();
	m_plateNumber = copyCar.GetPlateNumber();
}

yik::Car::Car(std::string manufacture, std::string model, unsigned int year, unsigned int engine, std::string color)
	: m_manufacture(manufacture), m_model(model), m_year(year), m_engineVolume(engine), m_color(color), m_plateNumber(++s_plateCounter) {}

yik::Car::~Car()
{
}

#pragma region Get

std::string yik::Car::GetManufacture(void) const
{
	return m_manufacture;
}

std::string yik::Car::GetModel(void) const
{
	return m_model;
}

unsigned int yik::Car::GetYear(void) const
{
	return m_year;
}

unsigned int yik::Car::GetEngineVolume(void) const
{
	return m_engineVolume;
}

unsigned int yik::Car::GetPlateNumber(void) const
{
	return m_plateNumber;
}

std::string yik::Car::GetColor(void) const
{
	return m_color;
}

#pragma endregion

#pragma region Set

void yik::Car::SetManufacture(const std::string& manufacture)
{
	m_manufacture = manufacture;
}

void yik::Car::SetModel(const std::string &model)
{
	m_model = model;
}

void yik::Car::SetYear(const unsigned int year)
{
	m_year = year;
}

void yik::Car::SetEngineVolume(const unsigned int engine_volume)
{
	m_engineVolume = engine_volume;
}

void yik::Car::SetPlateNumber(const unsigned int plateNumeber)
{
	m_plateNumber = plateNumeber;
}

void yik::Car::SetColor(const std::string &color)
{
	m_color = color;
}

//Compare two cars by year and return the biggest of then, case they are equal, return the first argument
const yik::Car & yik::Car::CompareByYear(const yik::Car & car_1, const yik::Car & car_2)
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
const yik::Car & yik::Car::CompareByEngine(const yik::Car & car_1, const yik::Car & car_2)
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

std::ostream& yik::operator<< (std::ostream& out, yik::Car & someCar)
{
	out << "Printing the car info: \n";
	out << "Manufacture: " << someCar.GetManufacture() << "\n";
	out << "Model: " << someCar.GetModel() << "\n";
	out << "Year:" << someCar.GetYear() << "\n";
	out << "Engine Volume: " << someCar.GetEngineVolume() << "\n";
	out << "Color: " << someCar.GetColor() << "\n";
	out << "Car Plate:" << someCar.GetPlateNumber() << "\n";
	return out;
}

#pragma endregion
