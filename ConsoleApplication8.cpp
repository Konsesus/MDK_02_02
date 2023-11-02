
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    
    // Пользователь выбирает фигуру
    cout << "Программа - Геометрические фигуры\n";
    cout << "[1] Линия\n";
    cout << "[2] Квадрат\n";
    int x;
    int y;
    int a;
    int b;
    // Пользователь выбирает фигуру
    cout << "[+] Выберите фигуру: ";
    cin >> x;
    // Если пользователь выбрал "Квадрат"
    if (x == 2)
    {
        system("cls");
        cout << "[+] Фигура: Квадрат\n";
        cout << "[1] Заполненный\n";
        cout << "[2] Пустой\n";
        cout << "[+] Выберите тип: ";
        cin >> y;
        // Если пользователь выбрал "Линия"
        if (y == 1)
        {
            cout << "[+] Размер: ";
            cin >> a;
            cout << "[+] Текстура: ";
            cin >> b;
            
            int z = 0;
            while (z < a)
            {
                cout << b;
                z++;
            };
            cin >> a;

        }

    }
    return 1;

}

