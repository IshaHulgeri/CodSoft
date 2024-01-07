#include<iostream>
#include <cstdlib>
using namespace std;

class MyClass
{
public:
int number=rand() %100+1;
int guess;
 void startGame() 
   {
        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "Can you guess the number I am thinking between 1 to 100?" << endl;

        do {
            cin >> guess;
            if (guess < number) {
                cout << "Your guess is too low!" << endl;
            } else if (guess > number) {
                cout << "Your guess is too high!" << endl;
            } else {
                cout << "You have guessed it correctly!" << endl;
                break;
            }
        } while (guess != number);
    }
};

int main() {
    MyClass obj;
    obj.startGame();
    return 0;
}