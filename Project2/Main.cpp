#include<iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "");
	cout << "Квадрат — правильный четырёхугольник, то есть плоский четырёхугольник, у которого все углы и все стороны равны." << endl;
	cout << "Представленный калькулятор поможет вам найти следующие параметры квадрата, для этого необходимо ввести сначала чему равна сторона квадрата, а затем соответствующий номер параметра: " << endl;
	cout << "1-Периметр квадрата" << endl << "2-Площадь квадрата" << endl << "3-Длина диагонали квадрата" << endl << endl;
	
	int p;
	int s;
	int d;
	
	while (true) {
		int a;
		cout << "Введите размер длины квадрата: " << endl;
		cin >> a;
		bool stop = false;
		if (a <= 0)
		{
			cout << "Некорректное значение" << endl;;
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
				cout << "Команда не найдена" << endl;;
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
				cout << "Периметр квадрата: " << p << endl;
				stop = true;
				break;
				if (stop)
				{
					break;
				}
			case 2:
				s = a * a;
				cout << "Площадь квадрата: " << s << endl;
				stop = true;
				break;
				if (stop)
				{
					break;
				}
			case 3:
				d = a * sqrt(2);
				cout << "Длина диагонали квадрата: " << d << endl;
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
