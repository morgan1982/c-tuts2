#include <iostream>


using namespace std;

int main ()
{
    int age;
    int totalAge = 0;
    int numberOfPeople = 0;
    int average;

    cout << "enter age or -1 to exit" << endl;
    cin >> age;

    while(age != -1) {
        totalAge = totalAge + age;
        numberOfPeople++;

        cout << "enter age or -1 to quit" << endl;
        cin >> age;
    }
    average = totalAge / numberOfPeople;
    cout << "number of people: " << numberOfPeople << endl;
    cout << "the average is: " << average << endl;



    return 0;
}

