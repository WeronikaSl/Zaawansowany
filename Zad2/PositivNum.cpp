#include "PositivNum.hpp"
#include <iostream>

void PositivNumber::setValue(double value)
{
	if (value < 0)
	{
		throw std::string("Nie może to być liczba ujemna!");
	}

	_value = value;
}

void PositivNumber::setValue(float value)
{
	setValue(static_cast<double>(value));
}

void PositivNumber::setValue(int value)
{
	setValue(static_cast<double>(value));
}

void PositivNumber::add(double value)
{
	if ((value < 0) && (abs(value) > getValue()))
	{
		throw std::string ("Liczba jest za duża, wartość po dodaniu będzie ujemna");
	}
	else
	{
		setValue(getValue() + value);
	}
}

void PositivNumber::add(float value)
{
	add(static_cast<double>(value));
}

void PositivNumber::add(int value)
{
	add(static_cast<double>(value));
}

void PositivNumber::substract(double value)
{
	if (abs(value) < getValue())
	{
		throw std::string("Liczba po odjęciu byłaby ujemna");
	}
	else
	{
		setValue(getValue() - value);
	}
}

void PositivNumber::substract(float value)
{
	substract(static_cast<double>(value));
}

void PositivNumber::substract(int value)
{
	substract(static_cast<double>(value));
}

PositivNumber& PositivNumber::operator+(const PositivNumber& second)
{ 
	PositivNumber num;
	num.setValue(this->_value);
	num.add(second.getValue());
	return num;
}

PositivNumber& PositivNumber::operator-(const PositivNumber& second)
{
	this->substract(second.getValue());
}

PositivNumber& PositivNumber::operator+(double number)
{
	add(number);
}

PositivNumber& PositivNumber::operator-(double number)
{
	this->substract(number);
}

PositivNumber& PositivNumber::operator+(float number)
{
	add(static_cast<double>(number));
}

PositivNumber& PositivNumber::operator-(float number)
{
	substract(static_cast<double>(number));
}

PositivNumber& PositivNumber::operator+(int number)
{
	add(static_cast<double>(number));
}

PositivNumber& PositivNumber::operator-(int number)
{
	substract(static_cast<double>(number));
}

PositivNumber& PositivNumber::operator=(const PositivNumber& second)
{
	this->setValue(second.getValue()); //bierzemy value od second i ustawiamy dla tego na którym wywołujemy operator
}


PositivNumber::PositivNumber(double value)
{
	setValue(value); //dlaczego można wywołać funkcję nie na obiekcie?
}

PositivNumber::PositivNumber() : PositivNumber(0.0) //przypisujemy domyślną wartość 0.0
{
}

PositivNumber::PositivNumber(float value) : PositivNumber(static_cast<double>(value))
{
}

PositivNumber::PositivNumber(int value) : PositivNumber(static_cast<double>(value))
{
}


double PositivNumber::getValue() const
{
	return _value;
}

