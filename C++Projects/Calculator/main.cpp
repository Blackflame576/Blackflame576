#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_str(string str)
{
    cout << str << endl;
}
int main()
{
    float first_num;
    float second_num;
    string operation;
    float result;
    cout << "Введите первое число:" << endl;
    cin >> first_num;
    // cout << "\n" << endl;
    cout << "Введите второе число:" << endl;
    cin >> second_num;
    cout << "Введите операцию:" << endl;
    cin >> operation;
    if (operation == "+")
    {
        result = first_num + second_num;
        cout << "Результат:" << result << endl;
    }
    else if (operation == "-")
    {
        result = first_num - second_num;
        cout << "Результат:" << result << endl;
    }
    else if (operation == "*")
    {
        result = first_num * second_num;
        cout << "Результат:" << result << endl;
    }
    else if (operation == "/")
    {
        result = first_num / second_num;
        cout << "Результат:" << result << endl;
    }
    else 
    {
        cout << "Такой операции не существует!" << endl;
    }
    return 0;
    

}