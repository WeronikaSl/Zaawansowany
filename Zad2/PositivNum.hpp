#pragma once
class PositivNumber
{
public:
    PositivNumber();
    PositivNumber(double value);
    PositivNumber(float value);
    PositivNumber(int value);
    virtual ~PositivNumber();
    PositivNumber(const PositivNumber&) = default; //pokreślamy, że konstruktor jest defaultowy

    void getValue() const;
    void setValue(int value);
    void setValue(float value);
    void setValue(double value);

    PositivNumber& operator+(const PositivNumber& second);
    PositivNumber& operator-(const PositivNumber& second);
    PositivNumber& operator+(double number);
    PositivNumber& operator-(double number);

private:
    double _value;
};