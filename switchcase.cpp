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


/* OUES: WRITE A PROGRAM FOR A CACULATOR USING SWITCH CASE */

#include<iostream> 
using namespace std;

int main()
{
    float i, r; // Declare two floating-point variables 'i' and 'r' to store user input.
    int calc = 4; // Initialize 'calc' with a default value of 4.

    cout << "Enter the first Number :"; // Prompt the user to enter the first number.
    cin >> i; // Read the first number from the user and store it in 'i'.

    cout << "Enter the second Number :"; // Prompt the user to enter the second number.
    cin >> r; // Read the second number from the user and store it in 'r'.

    cout << "Enter the operation to execute :" << endl; // Prompt the user to choose an operation.
    cout << "1. Sum" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> calc; // Read the user's choice and store it in 'calc'.

    switch (calc) // Start a switch statement based on the value of 'calc'.
    {
        case 1:
            cout << "The sum is : " << i + r << endl; // If 'calc' is 1, calculate and print the sum.
            break;

        case 2:
            cout << "The difference is : " << i - r << endl; // If 'calc' is 2, calculate and print the difference.
            break;

        case 3:
            cout << "The product is : " << i * r << endl; // If 'calc' is 3, calculate and print the product.
            break;

        case 4:
            if (r != 0) // Check if the second number is not zero to avoid division by zero.
            {
                cout << "The quotient is : " << i / r << endl; // If 'calc' is 4 and 'r' is not zero, calculate and print the quotient.
            }
            else
            {
                cout << "Division by zero is not allowed." << endl; // If 'calc' is 4 and 'r' is zero, show an error message.
            }
            break;

        default:
            cout << "Wrong Input"; // If 'calc' is not 1-4, print "Wrong Input".
            break;
    }

    return 0; // Return 0 to indicate successful program execution.
}

/* OUTPUT
Enter the first Number :98
Enter the second Number :45
Enter the operation to execute :
1. Sum
2. Subtraction
3. Multiplication
4. Division
4
The quotient is : 2.17778 

Enter the first Number :325
Enter the second Number :789
Enter the operation to execute :
1. Sum
2. Subtraction
3. Multiplication
4. Division
1
The sum is : 1114 */
