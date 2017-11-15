#pragma once
#include <string>
#include <iostream>

namespace yik
{

	//This class define a car
	class Car
	{
	private:

		static unsigned int s_plateCounter;

		std::string m_manufacture;
		std::string m_model;
		std::string m_color;
		unsigned int m_year;
		unsigned int m_engineVolume;
		unsigned int m_plateNumber;

	public:

		Car();
		Car(Car &);
		Car(std::string, std::string, unsigned int, unsigned int, std::string);
		~Car();
	
	#pragma region	Geters

		std::string  GetManufacture(void) const;
		std::string  GetModel(void) const;
		std::string  GetColor(void) const;
		unsigned int GetYear(void) const;
		unsigned int GetEngineVolume(void) const;
		unsigned int GetPlateNumber(void) const;

	#pragma endregion

	#pragma region Setters
	
		void SetManufacture(const std::string&);
		void SetModel(const std::string&);
		void SetColor(const std::string&);
		void SetYear(const unsigned int);
		void SetEngineVolume(const unsigned int);
		void SetPlateNumber(const unsigned int);

	#pragma endregion

	#pragma region Functions

		static const Car& CompareByYear(const Car&, const Car&);
		static const Car& CompareByEngine(const Car&, const Car&);

	#pragma endregion

	#pragma region Overloaded

		friend std::ostream& operator<<(std::ostream&, Car&);

	#pragma endregion

	};


}
