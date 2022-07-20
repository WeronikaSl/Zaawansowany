#pragma once

template <typename T, unsigned int N>
class StaticTable
{
private:
	T tab [N] = {};
public:
	T& operator[](const unsigned int i)
	{
		return tab[i];
	}
};

