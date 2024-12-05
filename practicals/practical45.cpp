#include <iostream>

using namespace std; 



/* 
START
	read maxRoomCap
	read pax
	IF pax > maxRoomCap
		gap = pax - maxRoomCap
		display cannot held
		display gap
	ELSE 
		gap = maxRoomCap - pax
		display can held
		display gap 
	END IF 
END 
*/

int main() {
	int pax, gap;
	const int maxRoomCap = 10;

	cout << "How many people? >";
	cin >> pax;

	if (pax > maxRoomCap) {

		gap = pax - maxRoomCap;

		cout << "The meeting cannot be held as planned due to fire regulations." << endl;
		cout << "You have to exclude " << gap << " people(s) to meet the fire regulations." << endl;
	}

	else {
		gap = maxRoomCap - pax;

		cout << "It is legal to hold the meeting." << endl;
		cout << "You can include " << gap << " more people(s) for the meet." << endl;
	}

	return 0;
}