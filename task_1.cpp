#include <iostream>
using namespace std;

//Створіть додаток Калькулятор. Потрібно підтримувати операції +, -, *, /.
//Реалізувати меню без використання операторів if і switch за допомогою масиву покажчиків на функції.

typedef double (*calculateFnc)(double, double);

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if(num2 == 0) {
        cout << "Error" << endl;
        return 0;
    }
    return num1 / num2;
}

calculateFnc getFunction(char s, calculateFnc functions[4], const char* arr)
{
    for (int i = 0; i < 4; ++i)
    {
        if(arr[i] == s)
        {
            return functions[i];
        }
    }
}

int main()
{

    calculateFnc functions[4] = {add, subtract, multiply, divide};
    char arrayActions[4] = {'+', '-', '*', '/'};

    calculateFnc culc = nullptr;
    char symbol;
    double num1, num2, result;

    cout << "Enter numbers and action (2+3): " << endl;
    cin >> num1 >> symbol >> num2;

    culc = getFunction(symbol, functions, arrayActions);

    if(culc != nullptr)
    {
        result = culc(num1, num2);
        cout << result;
    }

    return 0;
}
