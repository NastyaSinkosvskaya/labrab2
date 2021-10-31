#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	long long int x1, x2, x3, y1, y2, y3;
	cout << "Введите размеры чемодана от x1 - x3: ";
	cin >> x1 >> x2 >> x3;
	cout << "Введите размеры коробки от y1 - y3: ";
	cin >> y1 >> y2 >> y3;
	if (x1 <= y1 && x2 <= y2 && x3 <= y3)cout << "Yes";else cout << "No";
}
