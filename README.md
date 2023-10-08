# c-decision-making-statements-

Program Aim:
The aim of this program is to determine whether a user-entered integer is even or odd and then display the result.

Program Theory:

#include<iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

using namespace std;: This line allows us to use the standard C++ library (std) without explicitly specifying it in the code. It simplifies the code by eliminating the need to prefix elements from the standard library with "std::".

Declaration of variables:

int number;: Declares an integer variable 'number' to store user input.
int main(): This is the entry point of the program. All C++ programs start execution from the main function.

cout << "Enter the first number: ";: Displays a prompt asking the user to enter a number.

cin >> number;: Reads the user's input number and stores it in the 'number' variable.

Conditional statement (if-else):

if (number % 2 == 0): Checks if the remainder of 'number' when divided by 2 is equal to 0, which is the condition for even numbers.
If the condition is true, it prints "The number is even."
If the condition is false, it prints "The number is odd."
return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Prompt the user to enter a number.
Read the input number from the user and store it in the 'number' variable.
Check if the number is even by using the modulo operator (%). If the remainder is 0, it's even; otherwise, it's odd.
Display the result message based on whether the number is even or odd.
Terminate the program.
Program Conclusion:
This C++ program takes a user-input integer and determines whether it is even or odd using a conditional statement. It then displays the result accordingly. It serves as a basic example of using conditions to make decisions in a program.


output:
![image](https://github.com/reetikasinghh/c-decision-making-statements-/assets/139485681/075d1813-3e02-4d76-966d-f88d7b8afc86)


Program Aim:
The aim of this program is to determine and display which of three user-entered numbers is the largest, or to indicate if two or more numbers are equal and the largest.

Program Theory:

#include <iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

using namespace std;: This line allows us to use the standard C++ library (std) without explicitly specifying it in the code. It simplifies the code by eliminating the need to prefix elements from the standard library with "std::".

Declaration of variables:

int x, y, z;: Declares integer variables 'x', 'y', and 'z' to store user input.
int main(): This is the entry point of the program. All C++ programs start execution from the main function.

Prompts for user input:

The program prompts the user to enter three numbers ('x', 'y', and 'z') one by one.
Conditional statements (if-else):

The program compares the three numbers to determine which one is the largest using a series of if-else statements.
It checks if 'x' is the largest, then 'y', then 'z'.
If two or more numbers are equal and the largest, it displays a message to that effect.
return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Prompt the user to enter the first number ('x').
Prompt the user to enter the second number ('y').
Prompt the user to enter the third number ('z').
Compare 'x', 'y', and 'z' to determine which one is the largest:
If 'x' is the largest, display "The first number is largest."
If 'y' is the largest, display "The second number is largest."
If 'z' is the largest, display "The third number is largest."
If two or more numbers are equal and the largest, display "Two or more numbers are equal and largest."
Terminate the program.
Program Conclusion:
This C++ program takes three user-input numbers and determines which one is the largest among them. If two or more numbers are equal and the largest, it provides that information as well. It demonstrates the use of conditional statements to make decisions based on user input.

Example Output: 
![image](https://github.com/reetikasinghh/c-decision-making-statements-/assets/139485681/27d6963e-071d-47cd-a522-d6d2947d66f1)


Program Aim:
The aim of this program is to take an integer input from the user (representing a day of the week) and then display the corresponding day's name.

Program Theory:

#include<iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

using namespace std;: This line allows us to use the standard C++ library (std) without explicitly specifying it in the code. It simplifies the code by eliminating the need to prefix elements from the standard library with "std::".

Declaration of variables:

int day;: Declares an integer variable 'day' to store the user's input, which represents a day of the week.
int main(): This is the entry point of the program. All C++ programs start execution from the main function.

Prompts for user input:

The program prompts the user to enter an integer corresponding to a day of the week.
switch statement: The program uses a switch statement to select the appropriate day's name based on the value of 'day'. Each case represents a day of the week (1 for Monday, 2 for Tuesday, and so on).

break;: After each case, there is a break; statement to exit the switch statement when a matching case is found.

default:: If the user enters a value other than 1-7, the default case is triggered, and the program prints "INVALID INPUT."

return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Prompt the user to enter a number representing a day of the week.
Read the user's input and store it in the 'day' variable.
Use a switch statement to check the value of 'day':
If 'day' is 1, print "Monday."
If 'day' is 2, print "Tuesday."
If 'day' is 3, print "Wednesday."
If 'day' is 4, print "Thursday."
If 'day' is 5, print "Friday."
If 'day' is 6, print "Saturday."
If 'day' is 7, print "Sunday."
If 'day' is not 1-7, print "INVALID INPUT."
Terminate the program.
Program Conclusion:
This C++ program takes an integer input from the user representing a day of the week and then displays the corresponding day's name. It uses a switch statement to make the selection based on the input. If the input is not within the range of 1-7, it informs the user that the input is invalid. This program serves as a simple example of using a switch statement for decision-making based on user input.

EXAMPLE OUTPUT:
![image](https://github.com/reetikasinghh/c-decision-making-statements-/assets/139485681/a6d20e28-f8e5-4beb-ac8f-6ba3cef43c5a)


Program Aim:
The aim of this program is to create a simple calculator that allows the user to perform four basic mathematical operations (addition, subtraction, multiplication, and division) on two floating-point numbers. The user can choose the operation to be performed.

Program Theory:

#include<iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

using namespace std;: This line allows us to use the standard C++ library (std) without explicitly specifying it in the code. It simplifies the code by eliminating the need to prefix elements from the standard library with "std::".

Declaration of variables:

float i, r;: Declares two floating-point variables 'i' and 'r' to store user input (two numbers).
int calc = 4;: Initializes an integer variable 'calc' with a default value of 4. This variable will be used to represent the selected operation.
int main(): This is the entry point of the program. All C++ programs start execution from the main function.

User input:

The program prompts the user to enter the first number and stores it in 'i'.
Then, it prompts the user to enter the second number and stores it in 'r'.
User operation selection:

The program prompts the user to choose an operation (sum, subtraction, multiplication, or division) by entering a number from 1 to 4. It stores the user's choice in 'calc'.
switch statement: The program uses a switch statement to execute the selected mathematical operation based on the value of 'calc'.

Calculations:

If 'calc' is 1, it calculates and prints the sum of 'i' and 'r'.
If 'calc' is 2, it calculates and prints the difference between 'i' and 'r'.
If 'calc' is 3, it calculates and prints the product of 'i' and 'r'.
If 'calc' is 4, it checks if 'r' is not zero (to avoid division by zero) and then calculates and prints the quotient (division result) of 'i' and 'r'. If 'r' is zero, it displays an error message to prevent division by zero.
default:: If the user enters a value other than 1-4, the default case is triggered, and the program prints "Wrong Input."

return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Prompt the user to enter the first number ('i').
Prompt the user to enter the second number ('r').
Prompt the user to choose a mathematical operation by entering a number from 1 to 4 ('calc').
Based on the value of 'calc', perform one of the following operations:
If 'calc' is 1, calculate and print the sum of 'i' and 'r'.
If 'calc' is 2, calculate and print the difference between 'i' and 'r'.
If 'calc' is 3, calculate and print the product of 'i' and 'r'.
If 'calc' is 4, check if 'r' is not zero; if not, calculate and print the quotient of 'i' and 'r'. If 'r' is zero, display an error message.
If 'calc' is not 1-4, print "Wrong Input."
Terminate the program.
Program Conclusion:
This C++ program implements a simple calculator that allows the user to perform four basic mathematical operations on two floating-point numbers. It uses a switch statement to select the operation based on user input. Additionally, it includes error handling to prevent division by zero. The program serves as an illustrative example of basic arithmetic operations and user input handling.

EXAMPLE OUTPUT: 
![image](https://github.com/reetikasinghh/c-decision-making-statements-/assets/139485681/b1837a0e-2c9c-451a-b370-952caffabded)





