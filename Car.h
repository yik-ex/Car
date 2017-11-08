#pragma once
#include <string>

//This class define a car
class Car
{
private:

	std::string manufacture;
	std::string model;
	unsigned int year;
	unsigned int engine_volume;
	std::string color;

public:

	Car() {};
	Car(std::string, std::string, unsigned int, unsigned int, std::string);
	~Car();
	
#pragma region	Geters

	std::string GetManufacture(void) const;
	std::string GetModel(void) const;
	unsigned int GetYear(void) const;
	unsigned int GetEngineVolume(void) const;
	std::string GetColor(void) const;

#pragma endregion

#pragma region Setters
	
	void SetManufacture(const std::string&);
	void SetModel(const std::string&);
	void SetYear(const unsigned int);
	void SetEngineVolume(const unsigned int);
	void SetColor(const std::string&);

#pragma endregion

#pragma region functions

	void print(void) const;

#pragma endregion

};

