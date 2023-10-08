//wap to print the largest number
 #include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> x;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> y;

    // Prompt the user to enter the third number
    cout << "Enter the third number: ";
    cin >> z;

    // Check which number is the largest among the three
    if (x > y && x > z)
        cout << "The first number is largest." << endl;
    else if (y > x && y > z)
        cout << "The second number is largest." << endl;
    else if (z > x && z > y)
        cout << "The third number is largest." << endl;
    else
        cout << "Two or more numbers are equal and largest." << endl;

    return 0;
}
/*Enter the first number: 10
Enter the second number: 20
Enter the third number: 15
The second number is largest.
*/