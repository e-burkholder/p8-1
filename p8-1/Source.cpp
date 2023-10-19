#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);

int main() {

	cout<<countCharacter("hello");
	cout<<countCharacter("1 2 3");

}

int countCharacter(string str) {
	int characters = str.length();
	return characters;
}