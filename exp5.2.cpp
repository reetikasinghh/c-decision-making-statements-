/*WRITE A PROGRAM TO DISPLAY ALL THE  DAYS */
#include<iostream> // Include the input/output stream library.
using namespace std;

int main()
{
    int day; // Declare an integer variable 'day' to store the user's input.

    cout << "Enter the Day's number: "; // enter a number corresponding to a day.
    cin >> day; // Read the user's input and store it in the 'day' variable.

    switch (day) // Start a switch statement based on the value of 'day'.
    {
        case 1:
            cout << "Monday"; // If 'day' is 1, print "Monday".
            break; // Exit the switch statement.

        case 2:
            cout << "Tuesday"; // If 'day' is 2, print "Tuesday".
            break;

        case 3:
            cout << "Wednesday"; // If 'day' is 3, print "Wednesday".
            break;

        case 4:
            cout << "Thursday"; // If 'day' is 4, print "Thursday".
            break;

        case 5:
            cout << "Friday"; // If 'day' is 5, print "Friday".
            break;

        case 6:
            cout << "Saturday"; // If 'day' is 6, print "Saturday".
            break;

        case 7:
            cout << "Sunday"; // If 'day' is 7, print "Sunday".
            break;

        default:
            cout << "INVALID INPUT"; // If 'day' is not 1-7, print "INVALID INPUT".
    }

    return 0; // Return 0 to indicate successful program execution.
}

/*output : Enter the Day's number :6
Saturday 
Enter the Day's number :2     
Tuesday*/
