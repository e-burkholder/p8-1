#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main() {
	string input;
	while ( true ) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q")
			break;
		cout << "Vowel count: " << countVowel(input)<<endl;
	}
}

int countVowel(string str) {
	int characters = str.length();
	int vowels = 0;
	for (int i = 0; i <= characters; i++) {
		str.substr(i, 1);
		if (str.substr(i, 1) == "A" || str.substr(i, 1) == "a" ||
			str.substr(i, 1) == "E" || str.substr(i, 1) == "e" ||
			str.substr(i, 1) == "I" || str.substr(i, 1) == "i" ||
			str.substr(i, 1) == "O" || str.substr(i, 1) == "o" ||
			str.substr(i, 1) == "U" || str.substr(i, 1) == "u")
		{
			vowels++;
		}
	}
	return vowels;
}