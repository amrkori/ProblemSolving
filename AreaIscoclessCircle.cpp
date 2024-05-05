#include<iostream>
using namespace std;

void ReadTriangleData(float& A,float& B)
{
	
	cout << " Please enter Triangle side A \n ";
	cin >> A;
	cout << " Please enter Triangle side B \n";
	cin >> B;
}
float CircleAreaByITriangle(float A, float B)
{
	const float PI = 3.141592653;
	float area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
	return area;
}
void PrintResult(float area)
{
	cout << "the area equal " << area;
}


int main()
{
	float A, B;
	ReadTriangleData(A,B);
	PrintResult(CircleAreaByITriangle(A,B));






	return 0;
}