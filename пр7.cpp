#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int month, day;

	cout << "Ęŕëĺíäŕđü" << endl;
	cout << "[ 1 ] ßíâŕđü" << endl;
	cout << "[ 2 ] Ôĺâđŕëü" << endl;
	cout << "[ 3 ] Ěŕđň" << endl;
	cout << "[ 4 ] Ŕďđĺëü" << endl;
	cout << "[ 5 ] Ěŕé" << endl;
	cout << "[ 6 ] Čţíü" << endl;
	cout << "[ 7 ] Čţëü" << endl;
	cout << "[ 8 ] Ŕâăóńň" << endl;
	cout << "[ 9 ] Ńĺíň˙áđü" << endl;
	cout << "[ 10 ] Îęň˙áđü" << endl;
	cout << "[ 11 ] Íî˙áđü" << endl;
	cout << "[ 12 ] Äĺęŕáđü" << endl;

	cout << "Âűáĺđčňĺ ěĺń˙ö: ";
	cin >> month;

	switch (month) {
	case 1:  cout << "Âűáđŕí ěĺń˙ö - \"ßíâŕđü\"" << endl; break;
	case 2:  cout << "Âűáđŕí ěĺń˙ö - \"Ôĺâđŕëü\"" << endl; break;
	case 3:  cout << "Âűáđŕí ěĺń˙ö - \"Ěŕđň\"" << endl; break;
	case 4:  cout << "Âűáđŕí ěĺń˙ö - \"Ŕďđĺëü\"" << endl; break;
	case 5:  cout << "Âűáđŕí ěĺń˙ö - \"Ěŕé\"" << endl; break;
	case 6:  cout << "Âűáđŕí ěĺń˙ö - \"Čţíü\"" << endl; break;
	case 7:  cout << "Âűáđŕí ěĺń˙ö - \"Čţëü\"" << endl; break;
	case 8:  cout << "Âűáđŕí ěĺń˙ö - \"Ŕâăóńň\"" << endl; break;
	case 9:  cout << "Âűáđŕí ěĺń˙ö - \"Ńĺíň˙áđü\"" << endl; break;
	case 10: cout << "Âűáđŕí ěĺń˙ö - \"Îęň˙áđü\"" << endl; break;
	case 11: cout << "Âűáđŕí ěĺń˙ö - \"Íî˙áđü\"" << endl; break;
	case 12: cout << "Âűáđŕí ěĺń˙ö - \"Äĺęŕáđü\"" << endl; break;

	default:
		cout << "Íĺďđŕâčëüíî ââĺäĺí íîěĺđ ěĺń˙öŕ!" << endl;
		return 0;
	}

	cout << "Âűáĺđčňĺ äĺíü ěĺń˙öŕ: ";
	cin >> day;

	switch (day) {
	case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
	case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
	case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30:
	case 31:
		cout << "Ęŕëĺíäŕđü: " << day << " ";

		switch (month) {
		case 1:  cout << "˙íâŕđ˙."; break;
		case 2:  cout << "ôĺâđŕë˙."; break;
		case 3:  cout << "ěŕđňŕ."; break;
		case 4:  cout << "ŕďđĺë˙."; break;
		case 5:  cout << "ěŕ˙."; break;
		case 6:  cout << "čţí˙."; break;
		case 7:  cout << "čţë˙."; break;
		case 8:  cout << "ŕâăóńňŕ."; break;
		case 9:  cout << "ńĺíň˙áđ˙."; break;
		case 10: cout << "îęň˙áđ˙."; break;
		case 11: cout << "íî˙áđ˙."; break;
		case 12: cout << "äĺęŕáđ˙."; break;
		default: cout << "???"; break;
		}

		cout << endl;
		break;

	default:
		cout << "Íĺďđŕâčëüíî ââĺäĺí äĺíü ěĺń˙öŕ!" << endl;
		break;
	}

	return 0;
}
