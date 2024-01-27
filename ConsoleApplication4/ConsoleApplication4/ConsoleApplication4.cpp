// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Fraction {
private: int numerator;int denominator;

public: Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    // Числитель и знаменатель
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }

    //Метод сложения дробей
    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }
    //Метод вычитания дробей
    Fraction operator-(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }
    //Метод умножения дробей
    Fraction operator*(const Fraction& other) const {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }
    //Метод деления дробей
    Fraction operator/(const Fraction& other) const {
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return Fraction(num, denom);
    }

    // Вывод дроби
    void print() const {
        std::cout << numerator << "/" << denominator;
    }
};


int main()
{
    setlocale(LC_ALL, "rus");
    Fraction fraction1(1, 2);
    Fraction fraction2(1, 3);
    Fraction sum = fraction1 + fraction2;
    Fraction difference = fraction1 - fraction2;
    Fraction multiplication = fraction1 * fraction2;
    Fraction division = fraction1 / fraction2;

    std::cout << "Сумма: ";
    sum.print();
    std::cout << std::endl;

    std::cout << "Вычитание: ";
    difference.print();
    std::cout << std::endl;

    std::cout << "Умножение: ";
    multiplication.print();
    std::cout << std::endl;

    std::cout << "Деление: ";
    division.print();
    std::cout << std::endl;
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
