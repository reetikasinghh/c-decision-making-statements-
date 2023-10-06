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
