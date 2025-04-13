#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

float getNumberInput(const string& prompt);
char getOperatorInput();


int main(){

    float num1 = getNumberInput("Enter the first number: ");
    char op = getOperatorInput();
    float num2 = getNumberInput("Enter the second number: ");


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
        if (num2 != 0){
            cout << num1 << " / " << num2 << " / " << num1 / num2 << '\n';
        } else {
            cout << "Error: Division by zero!\n";
        }
        break;
    }


    return 0;
}

float getNumberInput(const string& prompt){
    float num;
    cout << prompt;

    while (true){
        cin >> num;

        if (cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number: ";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear remaining characters
            return num; 
        }
    }
}

char getOperatorInput(){
    char op;
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
}