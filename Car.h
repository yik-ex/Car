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

	Car(std::string manufacture, std::string model, unsigned int year, unsigned int engine, std::string color) : manufacture(manufacture), model(model), year(year), engine_volume(engine), color(color) {}
	~Car();
	
#pragma region	Geters

	std::string GetManufacture(void);
	std::string GetModel(void);
	unsigned int GetYear(void);
	unsigned int GetEngineVolume(void);
	std::string GetColor(void);

#pragma endregion

#pragma region Setters
	
	void SetManufacture(const std::string);
	void SetModel(const std::string);
	void SetYear(const unsigned int);
	void SetEngineVolume(const unsigned int);
	void SetColor(const std::string);

#pragma endregion

#pragma region functions

	void print(void);

#pragma endregion

};

