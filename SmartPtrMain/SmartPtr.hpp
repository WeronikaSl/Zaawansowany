#pragma once

template<typename T>
class SmartPointer
{
private:
	T* _data = 0;
public:
	SmartPointer(T* data)
	{
		_data = data;
	}
	~SmartPointer()
	{
		delete _data;
		_data = nullptr;
	}
	T operator*()
	{
		return *_data;
	}
	T* operator->()
	{
		return _data;
	}
};