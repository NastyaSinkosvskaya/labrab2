#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    short year;
    cin >> year;
    switch (year % 10)
    {
    case 0:cout << "White ";
        break;
    case 1:cout << "White ";
        break;
    case 2:cout << "Black ";
        break;
    case 3:cout << "Black ";
        break;
    case 4:cout << "green ";
        break;
    case 5:cout << "green ";
        break;
    case 6:cout << "red ";
        break;
    case 7:cout << "red ";
        break;
    case 8:cout << "yellow ";
        break;
    case 9:cout << "yellow ";
        break;
    default:cout << "error ";
        break;
    }
    switch ((year + 8) % 12)
    {
    case 0:cout << "Крыса";
        break;
    case 1:cout << "корова";
        break;
    case 2:cout << "тигр";
        break;
    case 3:cout << "кролик";
        break;
    case 4:cout << "дракон";
        break;
    case 5:cout << "змея";
        break;
    case 6:cout << "лошадь";
        break;
    case 7:cout << "овца";
        break;
    case 8:cout << "обезьяна";
        break;
    case 9:cout << "курица";
        break;
    case 10:cout << "собака";
        break;
    case 11:cout << "свинья";
        break;
    default:cout << "error ";
        break;
    }
}