#include <iostream>
#include <random>
#include <string>
using namespace std;

string result(string user, int lose, int win);
void clearConsole();

int main() {
	setlocale(LC_ALL, "Ru");
	srand(time(NULL));
	string user;
	char stop;
	int lose = 0;
	int win = 0;
	string det;
	for (;;) {
		clearConsole();
		cout << "Введите: rock, cut, paper: ";
		cin >> user;
		det = result(user, lose, win);
		if (det == "win") {
			++win;
		}
		if (det == "lose") {
			++lose;
		}
		cout << "Побед: " << win << endl;
		cout << "Поражений: " << lose << endl;
		cout << "Закончить игру? Y/y - Да ";
		cin >> stop;
		if (stop == 'Y' || stop == 'y') {
			return 0;
		}
	}
}

string result(string user, int lose, int win) {
	int pc;
	int qwin = 0, qlose = 0, qnobody = 0;
	pc = rand() % 3 + 1;
	string PC_Choise1 = "rock";
	string PC_Choise2 = "cut";
	string PC_Choise3 = "paper";
	string nobody = "nobody";
	string uwin = "win";
	string ulose = "lose";
	if (pc == 1) {
		if (PC_Choise1 == user) {
			cout << "Ничья!" << endl;
			cout << "Вы ввели: " << user << ", ПК ввел: " << PC_Choise1 << endl;
			return nobody;
		}
		if (user == "cut") {
			cout << "Вы проиграли!" << endl;
			cout << "Вы ввели: " << user << ", ПК ввел: " << PC_Choise1 << endl;
			return ulose;
		}
		if (user == "paper") {
			cout << "Вы выиграли!" << endl;
			cout << "Вы ввели: " << user << ", ПК ввел: " << PC_Choise1 << endl;
			return uwin;
		}
	}
	if (pc == 2) {
		if (PC_Choise2 == user) {
			cout << "Ничья!" << endl;
			cout << "Вы ввели: " << user << ", ПК ввел: " << PC_Choise2 << endl;
			return nobody;
		}
		if (user == "paper") {
			cout << "Вы проиграли!" << endl;
			cout << "Вы ввели: " << user << ", ПК ввел: " << PC_Choise2 << endl;
			return ulose;
		}
		if (user == "rock") {
			cout << "Вы выиграли!" << endl;
			cout << "Вы ввели: " << user << ", ПК ввел: " << PC_Choise2 << endl;
			return uwin;
		}
	}
	if (pc == 3) {
		if (PC_Choise3 == user) {
			cout << "Ничья!" << endl;
			cout << "Вы ввели: " << user << ", ПК ввел: " << PC_Choise3 << endl;
			return nobody;
		}
		if (user == "cut") {
			cout << "Вы выиграли!" << endl;
			cout << "Вы ввели: " << user << ", ПК ввел: " << PC_Choise3 << endl;
			return uwin;
		}
		if (user == "rock") {
			cout << "Вы проиграли!" << endl;
			cout << "Вы ввели: " << user << ", ПК ввел: " << PC_Choise3 << endl;
			return ulose;
		}
	}
}

void clearConsole() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}