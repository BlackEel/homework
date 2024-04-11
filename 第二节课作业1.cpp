#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;
// return a random Captured  letter
char getRandomChar() 
{
    srand(static_cast<unsigned int>(time(0)));
    return char(rand() % 26 + 'A');
}

int main() 
{
    // get a random letter
    char correctChar = getRandomChar();
    // get a letter given by user
    char userInput;
    cout << "������ĸ ";
    cout << correctChar << endl;
    // guess if it is the same as the given letter
    while (true) 
    {
        cout << "������: ";
        cin >> userInput;
        if (toupper(userInput) == toupper(correctChar)) 
        {
            cout << "��ȷ " << correctChar << endl;
            break;
        }
        else 
        {
            cout << "���� " << correctChar << endl;
        }
    }

    return 0;
}