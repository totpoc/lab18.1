#include <iostream>
#include <cmath>

using namespace std;

template<typename G>
G getCorrectNubmer(G inputType)
{
    G inputNumber;
    while (!(cin >> inputNumber) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n')
        {
            cin.ignore();
            cout << "Введите корректное число: ";
        }
    }
    return inputNumber;
}

class COORDINATES {
    double first, second;

    public:
        COORDINATES()
        {
            this->first = 0;
            this->second = 0;
        }
        COORDINATES(double first, double second)
        {
            this->first = first;
            this->second = second;
        }
        double getDistance(double x1, double y1)
        {
            return sqrt(pow(x1 - this->first, 2) + pow(y1 - this->second, 2));
        }
};

int main()
{
    setlocale(LC_ALL, "rus");
    COORDINATES C;
    double x1 = 0, y1 = 0;
    cout << "Введите координату Х1: ";
    x1 = getCorrectNubmer(x1);
    cout << "Введите координату Y1: ";
    y1 = getCorrectNubmer(y1);
    cout << "Расстояние между точками = " << C.getDistance(x1, y1) << endl;
    return 0;
}

