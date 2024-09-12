#include <iostream>

using namespace std;

void solution (int HEIGHT, int LENGHT) {
	for (int i = 1; i <= HEIGHT; i++) {
		for (int j = 1; j < i; j++) {
			cout << '~';
		}
		if (i == 1 || i == HEIGHT) {
			for (int j = 1; j <= LENGHT; j++) {
				cout << '*';
			}
			cout << endl;
		} else {
			cout << '*';
			for (int j = 2; j <= LENGHT - 1; j++) {
				cout << '.';
			}
			cout << '*' << endl;
		}
	}
}

int main () {
	int LENGHT, HEIGHT;
	cin >> HEIGHT >> LENGHT;
	solution (HEIGHT, LENGHT);
	return 0;
}