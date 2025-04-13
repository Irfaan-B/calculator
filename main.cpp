#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int main(){

    char op;
    float num1, num2;

    cout << "Enter the first number: ";
    while (true){    
        cin >> num1;

        if (cin.fail()) { //Check if input failed
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input

            cout << "Invalid input. Please enter a valid float number.\n";
    }   else {
        break; //Exit loop if input is valid
    }}

    cout << "Enter operator: +. -, *, /: ";
    while (true){
        cin >> op;

        if (op == '+' || op == '-' || op == '*' || op == '/'){
            break;
        } else {
            cout << "Please enter a valid operator +. -, *, /: ";
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discord invalid input
        }
    }

    cout << "Enter the second number: ";
    while (true){    
        cin >> num2;

        if (cin.fail()) { //Check if input failed
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input

            cout << "Invalid input. Please enter a valid float number.\n";
    }   else {
        break; //Exit loop if input is valid
        }
    }

    switch (op) {

        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
        break;

        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
        break;

        case '*':
        cout << num1 << " * " << num2 << " * " << num1 * num2 << '\n';
        break;

        case '/':
        cout << num1 << " / " << num2 << " / " << num1 / num2 << '\n';
        break;
    }


    return 0;
}