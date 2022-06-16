#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void visual() {
	system("title strong password generator");
	system("color 2");
}

void password() {
	
	srand(time(0));

	string letters[57]{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", };
	string special_characters[15]{ "!", "?", "/", "$", ".", "(", ")", ";", "<", ">", "#", "*", "@", "+", "="};
	cout << "your new secure password is:\n------------------------------------------------------------\n";

	while (rand() % 60) {
		string letters_rand = letters[rand() % 57];
		string special_characters_rand = special_characters[rand() % 15];
		cout << letters_rand + special_characters_rand << rand() % 9 << letters_rand;
	}
	cout << "\n------------------------------------------------------------\n\n";
	system("pause");

}


int main(){
	visual();
	password();
}