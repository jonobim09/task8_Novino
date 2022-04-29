//Program to find the average test score and output the average
//test score and all the test scores that are less than
// the average test score.
//Programmed by: Jolly Novino
//Date Completed: April 29, 2022


#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int test[5];
    int sums = 0;
    double average;
    int index;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter five test scores: ";

    for (index = 0; index < 5; index++)
    {
        cin >> test[index];
        sums = sums + test [index];
    }

    cout << endl;

    average = sums /5.0; 
    cout << "The average test score = " << average << endl;

    for (index = 0; index < 5; index++)
        if (test [index] < average)
        cout << test[index]
            << " is less than the average test score." <<endl;
    
    return 0;
}