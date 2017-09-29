/* Ian Williams - Period 2 9/29/17
Program Problem 1 - Display text
Display text through the command prompt that will display until user prompted keystroke 
*/

#include <iostream>
#include <conio.h>
using namespace std;

void pause() {
	cout << "Press any key to continue. . ." << endl;
	while (!_kbhit());
	_getch();	
	cout << '\n'; // newline function
}

void main() {
	cout << "Hello world!" << endl;
	cout << "plz help" << endl;
	cout << "caillou has stolen my soul" << endl;
	cout << "send help in form of memez" << endl;

	pause();
}