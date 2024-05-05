#include<iostream>
using namespace std;

float ReadCircumference()
{
	float l;
	cout << " Please enter Circumference ";
	cin >> l;
	return l;
}
float CircleAreaByCircumference(float l)
{
	const float PI = 3.141592653;
	float area = pow(l, 2) / (PI * 4);
	return area;
}
void PrintResult(float area)
{
	cout << "the area equal " << area;
}


int main()
{


	PrintResult(CircleAreaByCircumference(ReadCircumference()));
	





	return 0;
}