﻿// number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    std::cout << "2. Длинное вещественное число\n\n";

    std::string number;
    std::cout << "enter a number: ";
    std::cin >> number;

    if (number[0] == '-' || number[0] == '.' || number[0] > '0' && number[0] < '9')
    {
        bool flag = true; // флажок

        for (int first = 1; first < number.length(); first++)
        {
            int s = 0;        // счетчик

            if (number[first] < '0' && number[first] != '.' || number[first] > '9')
            {
                flag = false;
                break;
            }

            if (number[first] == '.')
            {
                s++;
            }

            if (s == 2)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            std::cout << "Yes";
        }
        else
        {
            std::cout << "No";
        }


    }
    else std::cout << "incorrect data entered ";


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
