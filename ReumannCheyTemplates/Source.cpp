//Chey Reumann
//CIS 1202.M01
//April 25, 2023

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int half(int num)
{
	double result;
	result = static_cast<double>(num) / 2;
	return round(result);
}

template <class T>
T half(T num)
{
	return (num / 2);
}
int main()
{
	int a = 9;
	float b = 7.0f;
	double c = 5.0;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;


	return 0;
}