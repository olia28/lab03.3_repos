// Lab_03_3.cpp
// < ���������, ����� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -8 - R)
		y = R;
	else
		if (-8 - R < x && x <= -8 + R)
			y = -sqrt(R * R - (x + 8) * (x + 8)) + R;
		else
			if (-8 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 2)
					y = R + ((-1 - R) * (x + 4) / 6);
				else
					y = -3 + x;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
