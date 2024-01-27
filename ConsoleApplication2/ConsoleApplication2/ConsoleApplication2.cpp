﻿// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
const int rows = 3;
const int columns = 3;
const int depth = 3;

void MaximumValue(int arr[rows][columns][depth])
{
    for (int i = 0; i < columns; ++i)
    {
        int maxElement = arr[0][i][0];
        for (int j = 0; j < rows; ++j)
        {
            for (int k = 0; k < depth; ++k)
            {
                if (arr[j][i][k] > maxElement)
                {
                    maxElement = arr[j][i][k];
                }
            }
        }
        std::cout << "Максимальный элемент в столбце " << i << ": " << maxElement << std::endl;
    }
}
int main()
{
    setlocale(LC_ALL, "rus");
    int arr[rows][columns][depth] = {
    {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
    {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
    {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };
    MaximumValue(arr);

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
