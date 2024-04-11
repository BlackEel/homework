#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;
// return a random Captured  letter
char getRandomChar() {
    return char(rand() % 26 + 'A');
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    char correctChar = getRandomChar();
    char userInput;

    cout << "ÊäÈë×ÖÄ¸ ";
    cout << correctChar << endl;

    while (true) {
        cout << "ÇëÊäÈë: ";
        cin >> userInput;

        if (toupper(userInput) == toupper(correctChar)) {
            cout << "ÕýÈ· " << correctChar << endl;
            break;
        }
        else {
            cout << "´íÎó " << correctChar << endl;
        }
    }

    return 0;
}