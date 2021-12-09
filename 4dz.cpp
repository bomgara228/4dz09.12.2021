#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
void randm(int** mas, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 81 - 40;
		}
	}
}

void darand(int** mas, int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}

void aaa(int** mas, int n, int m) {
	int b = 0;
	int k;
	cout << "enter row number\n";
	cin >> k;
	for (int p = 0; p < n; p++) {
		cout << mas[p][k] << ' ';
	}
	for (int p = 0; p < n; p++) {
		if (mas[p][k] > 0) {
			b += 1;
		}
	}
	cout << endl << b;
}

int main() {
	int n = 5;
	int m = 5;
	int** mas;
	mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	randm(mas, n, m);
	darand(mas, n, m);
	aaa(mas, n, m);
}