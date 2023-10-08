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