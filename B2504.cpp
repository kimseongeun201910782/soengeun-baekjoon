#include <iostream>
using namespace std;

int index = 0; 
string brackets;

long long int recur(char req_bracket) {
	long long int value = 0;
	while (true) {
		switch (brackets[index++]) {
		case '(':
			value += recur(')') * 2;
			break;
		case '[':
			value += recur(']') * 3;
			break;
		default:
			if (req_bracket == '-') {
				if (brackets[index - 1] == ')' || brackets[index - 1] == ']') {
					cout << 0;
					exit(0);
				}
				return (value ? value : 1);
			}
			if (req_bracket == brackets[index - 1]) {
				return (value ? value : 1);
			}
			else {
				cout << 0;
				exit(0);
			}
		}
	}
}

int main(void) {
	cin >> brackets;
	long long int result = 0;
	if (brackets[index] != '(' && brackets[index] != '[') {
		cout << 0;
		exit(0);
	}
	result += recur('-');
	cout << result << "\n";
	return 0;
}
