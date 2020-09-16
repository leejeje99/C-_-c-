#include <iostream>
using namespace std;

class Calculator
{
private:
	int numOfAdd;
	int numOfMin;
	int numOfMul;
	int numOfDiv;
public:
	void Init();
	double Add(double num1, double num2);
	double Min(double num1, double num2);
	double Mul(double num1, double num2);
	double Div(double num1, double num2);
	void ShowOpCount();

};

void Calculator::Init()
{
	numOfAdd = 0;
	numOfMin = 0;
	numOfMul = 0;
	numOfDiv = 0;
}
double Calculator::Add(double num1, double num2)
{
	numOfAdd++;
	return num1 + num2;
}
double Calculator::Min(double num1, double num2)
{
	numOfMin++;
	return num1 - num2;
}
double Calculator::Mul(double num1, double num2)
{
	numOfMul++;
	return num1 * num2;
}
double Calculator::Div(double num1, double num2)
{
	numOfDiv++;
	return num1 / num2;
}

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À : " << numOfAdd << ' ';
	cout << "»¬¼À : " << numOfMin << ' ';
	cout << "°ö¼À : " << numOfMul << ' ';
	cout << "³ª´°¼À : " << numOfDiv << endl;

}

int main(void)
{
	Calculator cal;
	cal.Init();

	cout << "3.2+2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.2/2.4 = " << cal.Div(3.2, 2.4) << endl;
	cout << "3.2-2.4 = " << cal.Min(3.2, 2.4) << endl;
	cout << "3.2*2.4 = " << cal.Mul(3.2, 2.4) << endl;

	cal.ShowOpCount();
	return 0;
}

