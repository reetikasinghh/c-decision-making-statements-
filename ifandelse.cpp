//22070123093
//REETIKA SINGH, ENTC B1
/*WAP TO FIND WHETHER THE NUMBER IS ODD EVEN OR ZERO*/

// This is a C++ program to find whether a number is odd, even, or zero.
#include<iostream>
using namespace std;

int number; // Declare an integer variable 'number' to store user input.

int main()
{
    cout << "Enter the first number: "; //enter a number.
    cin >> number; // Read the input number from the user and store it in the 'number' variable.

    if (number % 2 == 0)
    {
        cout << "The number is even."; // If the number is even, print this message.
    }
    else
    {
        cout << "The number is odd."; // If the number is odd, print this message.
    }

    return 0; // Return 0 to indicate successful program execution.
}

/* OUTPUT: enter the first number:56
the number is even.
enter the first number:23
the number is odd*/



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


 int x,y,z;
    cout<<"Enter the first number:"<<endl;
    cin>>x;
    cout<<"Enter the Second number:"<<endl;
    cin>>y;
    cout<<"Enter the third number:"<<endl;
    cin>>z;
    if ((x>y) && (x>z))
    cout<<"The first number is largest:"<<endl;
    else if ((y>x) && (y>z))
    cout<<"The second number is largest:"<<endl;
    else
    cout<<"The third number is largest:"<<endl;
