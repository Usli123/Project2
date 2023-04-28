#include<iostream>
#include<fstream>

using namespace std;



bool summ(int mus[], int len, int b) {
	int s=0;
	for (int i = 0; i < len; i++) {

		s += mus[i];
	}
		if (s == b) {
			return true;
		}
		else {
			return false;
		}
}


int main() {
	setlocale(LC_ALL, "");
	srand(time(0) * time(0));

	int number;
	cin >> number;
	int len = 5;
	int mus[] = { 1,2,3,4,5 };
	if (summ(mus, len, number)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	return 0;
}
