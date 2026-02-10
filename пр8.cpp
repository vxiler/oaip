#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int menu;

	cout << "Ïåðåâîä÷èê" << endl;
	cout << "[ 1 ] Ðóññêèå ñëîâà" << endl;
	cout << "[ 2 ] Àíãëèéñêèå ñëîâà" << endl;
	cout << "[ 3 ] Âûéòè" << endl;
	cout << "Âûáåðèòå ïóíêò: ";
	cin >> menu;

	switch (menu) {
	case 1: {
		int word;

		cout << "Ïåðåâîä÷èê \"Ñïèñîê ðóññêèõ ñëîâ\"" << endl;
		cout << "[ 1 ] Äîì" << endl;
		cout << "[ 2 ] Äîðîãà" << endl;
		cout << "[ 3 ] Êíèãà" << endl;
		cout << "[ 4 ] Îêíî" << endl;
		cout << "[ 5 ] Ñòîë" << endl;
		cout << "[ 6 ] Âîäà" << endl;
		cout << "[ 7 ] Ñîëíöå" << endl;
		cout << "[ 8 ] Íî÷ü" << endl;
		cout << "[ 9 ] Ãîðîä" << endl;
		cout << "[ 10 ] Ìàøèíà" << endl;
		cout << "[ 11 ] Òåëåôîí" << endl;
		cout << "[ 12 ] Ðàáîòà" << endl;
		cout << "[ 13 ] Åäà" << endl;
		cout << "[ 14 ] Äðóã" << endl;
		cout << "[ 15 ] Âðåìÿ" << endl;

		cout << "Âûáåðèòå íîìåð ñëîâà: ";
		cin >> word;

		switch (word) {
		case 1:  cout << "Ïåðåâîä: äîì > house" << endl; break;
		case 2:  cout << "Ïåðåâîä: äîðîãà > road" << endl; break;
		case 3:  cout << "Ïåðåâîä: êíèãà > book" << endl; break;
		case 4:  cout << "Ïåðåâîä: îêíî > window" << endl; break;
		case 5:  cout << "Ïåðåâîä: ñòîë > table" << endl; break;
		case 6:  cout << "Ïåðåâîä: âîäà > water" << endl; break;
		case 7:  cout << "Ïåðåâîä: ñîëíöå > sun" << endl; break;
		case 8:  cout << "Ïåðåâîä: íî÷ü > night" << endl; break;
		case 9:  cout << "Ïåðåâîä: ãîðîä > city" << endl; break;
		case 10: cout << "Ïåðåâîä: ìàøèíà > car" << endl; break;
		case 11: cout << "Ïåðåâîä: òåëåôîí > phone" << endl; break;
		case 12: cout << "Ïåðåâîä: ðàáîòà > work" << endl; break;
		case 13: cout << "Ïåðåâîä: åäà > food" << endl; break;
		case 14: cout << "Ïåðåâîä: äðóã > friend" << endl; break;
		case 15: cout << "Ïåðåâîä: âðåìÿ > time" << endl; break;

		default:
			cout << "[ ! ] Íåïðàâèëüíî ââåäåí íîìåð ñëîâà!" << endl;
			break;
		}
		break;
	}

	case 2: {
		int word;

		cout << "Ïåðåâîä÷èê \"Ñïèñîê àíãëèéñêèõ ñëîâ\"" << endl;
		cout << "[ 1 ] House" << endl;
		cout << "[ 2 ] Road" << endl;
		cout << "[ 3 ] Book" << endl;
		cout << "[ 4 ] Window" << endl;
		cout << "[ 5 ] Table" << endl;
		cout << "[ 6 ] Water" << endl;
		cout << "[ 7 ] Sun" << endl;
		cout << "[ 8 ] Night" << endl;
		cout << "[ 9 ] City" << endl;
		cout << "[ 10 ] Car" << endl;
		cout << "[ 11 ] Phone" << endl;
		cout << "[ 12 ] Work" << endl;
		cout << "[ 13 ] Food" << endl;
		cout << "[ 14 ] Friend" << endl;
		cout << "[ 15 ] Time" << endl;

		cout << "Âûáåðèòå íîìåð ñëîâà: ";
		cin >> word;

		switch (word) {
		case 1:  cout << "Ïåðåâîä: house -> äîì" << endl; break;
		case 2:  cout << "Ïåðåâîä: road -> äîðîãà" << endl; break;
		case 3:  cout << "Ïåðåâîä: book -> êíèãà" << endl; break;
		case 4:  cout << "Ïåðåâîä: window -> îêíî" << endl; break;
		case 5:  cout << "Ïåðåâîä: table -> ñòîë" << endl; break;
		case 6:  cout << "Ïåðåâîä: water -> âîäà" << endl; break;
		case 7:  cout << "Ïåðåâîä: sun -> ñîëíöå" << endl; break;
		case 8:  cout << "Ïåðåâîä: night -> íî÷ü" << endl; break;
		case 9:  cout << "Ïåðåâîä: city -> ãîðîä" << endl; break;
		case 10: cout << "Ïåðåâîä: car -> ìàøèíà" << endl; break;
		case 11: cout << "Ïåðåâîä: phone -> òåëåôîí" << endl; break;
		case 12: cout << "Ïåðåâîä: work -> ðàáîòà" << endl; break;
		case 13: cout << "Ïåðåâîä: food -> åäà" << endl; break;
		case 14: cout << "Ïåðåâîä: friend -> äðóã" << endl; break;
		case 15: cout << "Ïåðåâîä: time -> âðåìÿ" << endl; break;

		default:
			cout << "Íåïðàâèëüíî ââåäåí íîìåð ñëîâà!" << endl;
			break;
		}
		break;
	}

	case 3:
		cout << "Âûõîä" << endl;
		break;

	default:
		cout << "Íåïðàâèëüíî âûáðàí ïóíêò ìåíþ!" << endl;
		break;
	}

	return 0;

	int _;
	cin >> _;

}
