// Lab_03_3.cpp
// < ������� ���'��� >
// ����������� ������ � 3.1
// ������������.
// ������ 11

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = 2 * (abs(5) - fabs(x));


	// ����� 1: ������������ � ��������� ����
	if (x <= -1)
		B = exp(abs(2) + fabs(x));
	if (-1 < x && x < 1)
		B = (sin(1.0) / abs(2) + fabs(x)) * (sin(1.0) / abs(2) + fabs(x));
	if (x >= 1)
		B = (cos(x) * cos(x)) / 1 + fabs(sin(x));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x <= -1)
		B = exp(abs(2) + fabs(x));
	else
		if (x >= 1)
			B = (cos(x) * cos(x)) / 1 + fabs(sin(x));
		else
			B = (sin(1.0) / abs(2) + fabs(x)) * (sin(1.0) / abs(2) + fabs(x));
	y = A + B;
	cout << "2) y = " << y << endl;
	return 0;
}