// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Rhombus {
private:
    double diagonal1;
    double diagonal2;

public:
    Rhombus(double d1, double d2) {
        if (d1 < 0 || d2 < 0) {
            cout << "Error: entered negative values ​​of diagonals!" << endl;
            diagonal1 = 0;
            diagonal2 = 0;
        }
        else {
            diagonal1 = d1;
            diagonal2 = d2;
        }
    }

    double calculateArea() {
        double area = (diagonal1 * diagonal2) / 2; // Формула площі ромбу
        return area;
    }
};

int main() {
    double diagonal1, diagonal2;

    cout << "Enter the length of the first diagonal: ";
    cin >> diagonal1;
    cout << "Enter the length of the second diagonal: ";
    cin >> diagonal2;

    Rhombus rhombus(diagonal1, diagonal2);

    double area = rhombus.calculateArea();

    if (area > 0) {
        cout << "Area of ​​a rhombus: " << area << endl;
    }

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
