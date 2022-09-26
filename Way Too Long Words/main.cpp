#include <iostream>

using namespace std;

int main() {
	const int NUMBER_OF_ELEMENTS = 100;
	string words[NUMBER_OF_ELEMENTS];
	int numberOfWords;

	cin >> numberOfWords;

	for (int i = 0; i < numberOfWords; i++) {
		cin >> words[i];
	}

	for (int i = 0; i < numberOfWords; i++) {
		int wordLength = words[i].length();
		if (wordLength > 10) {
			printf("%c%i%c \n", words[i][0], wordLength - 2, words[i][wordLength - 1]);
			//cout << words[i][0];
			//cout << wordLength - 2;
			//cout << words[i][wordLength - 1] << endl;
		}
		else {
			cout << words[i] << endl;
		}
	}

	return 0;
}