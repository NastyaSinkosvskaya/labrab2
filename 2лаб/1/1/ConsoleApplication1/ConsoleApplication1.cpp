#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    short num,res,x,x1,x2;
    cout << "Введите ваше число: ";
    cin >> num;
    if (num <= 99 || num >= 1000) {
        cout << "Error please try again cout number!";
        return 0;
    }
    else {
        x = num / 100;
        x1 = (num / 10) % 10;
        x2 = (num % 100) % 10;
        //cout << x<<" "<<x1<<" "<<x2;
        if (x + x1 + x2 > 9)cout << "Yes";else cout << "No";
    }
    }

