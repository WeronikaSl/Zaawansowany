#pragma once
class PositivNumber
{
public:
    PositivNumber();
    PositivNumber(double value);
    PositivNumber(float value);
    PositivNumber(int value);
    virtual ~PositivNumber() = default;
    PositivNumber(const PositivNumber&) = default; //pokreślamy, że konstruktor jest defaultowy

    double getValue() const;
    void setValue(double value);
    void setValue(float value);
    void setValue(int value);

    void add(double value);
    void add(float value);
    void add(int value);

    void substract(double value);
    void substract(float value);
    void substract(int value);



    PositivNumber& operator+(const PositivNumber& second);
    PositivNumber& operator-(const PositivNumber& second);
    PositivNumber& operator+(double number);
    PositivNumber& operator-(double number);
    PositivNumber& operator+(float number);
    PositivNumber& operator-(float number);
    PositivNumber& operator+(int number);
    PositivNumber& operator-(int number);

    PositivNumber& operator=(const PositivNumber& second);

private:
    double _value = 0.0;
};