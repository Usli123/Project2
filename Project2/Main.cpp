#include<iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "");
	cout << "������� � ���������� ��������������, �� ���� ������� ��������������, � �������� ��� ���� � ��� ������� �����." << endl;
	cout << "�������������� ����������� ������� ��� ����� ��������� ��������� ��������, ��� ����� ���������� ������ ������� ���� ����� ������� ��������, � ����� ��������������� ����� ���������: " << endl;
	cout << "1-�������� ��������" << endl << "2-������� ��������" << endl << "3-����� ��������� ��������" << endl << endl;
	
	int p;
	int s;
	int d;
	
	while (true) {
		int a;
		cout << "������� ������ ����� ��������: " << endl;
		cin >> a;
		bool stop = false;
		if (a <= 0)
		{
			cout << "������������ ��������" << endl;;
			continue;
		}
		if (stop)
		{
			break;
		}


		while (true) {
			int action;
			cin >> action;
			bool stop = false;
			if (action > 3||action<1)
			{
				cout << "������� �� �������" << endl;;
				continue;
			}
			if (stop)
			{
				break;
			}
			switch (action)
			{
			case 1:
				p = 4 * a;
				cout << "�������� ��������: " << p << endl;
				stop = true;
				break;
				if (stop)
				{
					break;
				}
			case 2:
				s = a * a;
				cout << "������� ��������: " << s << endl;
				stop = true;
				break;
				if (stop)
				{
					break;
				}
			case 3:
				d = a * sqrt(2);
				cout << "����� ��������� ��������: " << d << endl;
				stop = true;
				break;
				if (stop)
				{
					break;
				}
			}
		}
	}

	return 0;
}
