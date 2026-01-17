#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "Ââåäèòå ÷èñëî îò 1 äî 100: ";
	int number;
	cin >> number;

	if (number >= 0 and number <= 10) {
		cout << "Öèôğà â äèàïàçîíå: 0-10";
	}
	else if (number >= 11 and number <= 20) {
		cout << "Öèôğà â äèàïàçîíå: 11-20";
	}
	else if (number >= 21 and number <= 30) {
		cout << "Öèôğà â äèàïàçîíå: 21-30";
	}
	else if (number >= 31 and number <= 40) {
		cout << "Öèôğà â äèàïàçîíå: 31-40";
	}
	else if (number >= 41 and number <= 50) {
		cout << "Öèôğà â äèàïàçîíå: 41-50";
	}
	else if (number >= 51 and number <= 60) {
		cout << "Öèôğà â äèàïàçîíå: 51-60";
	}
	else if (number >= 61 and number <= 70) {
		cout << "Öèôğà â äèàïàçîíå: 61-79";
	}
	else if (number >= 71 and number <= 80) {
		cout << "Öèôğà â äèàïàçîíå: 71-80";
	}
	else if (number >= 81 and number <= 90) {
		cout << "Öèôğà â äèàïàçîíå: 81-90";
	}
	else if (number >= 91 and number <= 100) {
		cout << "Öèôğà â äèàïàçîíå: 91-100";
	}
	else if (number < 0) {
		cout << "×èñëî ìåíüøå 0";
	}
	else if (number > 100) {
		cout << "×èñëî áîëüøå 100";
	}

	int _;
	cin >> _;
}

