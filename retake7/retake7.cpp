
#include <iostream>
#include <string>

int CountOccStr(std::string str_, std::string substr_);



int main()
{


    setlocale(LC_ALL, "Rus");
    std::cout << "Введите строку: ";
    std::string str;
    std::getline(std::cin, str); // Считываем строку

    std::cout << "Введите подстроку: ";
    std::string substr;
    std::getline(std::cin, substr); // Считываем подстроку

    std::cout << "Количество вхождений подстроки в строку: " << CountOccStr(str, substr); // Вывод возвращаемого значения функции

    return 0;
}

int CountOccStr(std::string str_, std::string substr_)
{
    int count = 0; // переменная для подсчета количества вхождений строки в подстроку
    for (int i = 0; i < str_.length(); i++) // цикл который идет по строке
    {
        if (str_[i] == substr_[0]) // если в строке встречаем первый символ подстроки
        {
            if (str_.substr(i, substr_.length()) == substr_) // если часть строки (от позиции i до позиции "i+длина подстроки") равна подстроке
            {
                count++; // то увеличиваем счетчик вхождений 
                i += substr_.length() - 1; // и увеличиваем i (тип перепрыгиваем участок строки, в которой была подстрока)
            }
        }
    }
    return count; // возвращаем значение
}