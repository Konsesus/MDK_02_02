
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
    cout << "[+] Выберите фигуру: ";
    cin >> x;
    if (x == 2)
    {
        system("cls");
        cout << "[+] Фигура: Квадрат\n";
        cout << "[1] Заполненный\n";
        cout << "[2] Пустой\n";
        cout << "[+] Выберите тип: ";
        cin >> y;
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
            
            
            //for (int i = 0; i < a; i++)
            //{
            //    cout << b;
            //}

        }

    }
    return 1;

}

