#include <iostream>
#include <cstdlib>
#include <format>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int num;
    srand(2);
    for (int k = 1;k <= 10;k++) {
        //Случайное число от 2 до 8:
        num = 2 + rand() % 7;
        switch (num) {
        case 3:
        case 6:
            cout << k << ": " << num << ": число делится на три" << endl;
            break;
        case 2:
        case 4:
        case 8:
            cout << k << ": " << num << ": число является степенью двух" << endl;
            break;
        case 5:
            cout << k << ": " << num << ": пятёрка" << endl;
            break;
        case 7:
            cout << k << ": " << num << ": семёрка" << endl;
            break;
        }
    }
    system("pause > nul");
    return 0;
}
