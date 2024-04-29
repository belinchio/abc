// Задача 1.
// Разработайте функцию, которая принимает целое число в качестве аргумента и возвращает строку,
// содержащую это число и слово "компьютер" в нужном склонении по падежам в зависимости от числа.
// Например, при вводе числа 25 функция должна возвращать "25 компьютеров", для числа 41 —
// "41 компьютер", а для числа 1048 — "1048 компьютеров".

#include <iostream>

std::string comp(size_t num) {
    std::string str = "компьютер";
    std::string newstr;
    if (num >= 5 && num < 21) {
        newstr = std::to_string(num) + " " + str + "ов";
    } else if (num % 10 > 1 && num <= 4) {
        newstr = std::to_string(num) + " " + str + "а";
    } else if (num % 10 >=5 && num % 10 <= 10) {
        newstr = std::to_string(num) + " " + str + "ов";
    } else newstr = newstr = std::to_string(num) + " " + str;
    return newstr;
}

int main() {
    std::string a1, a2, a3, a4, a5;
    a1 = comp(1);
    a2 = comp(25);
    a3 = comp(21);
    a4 = comp(1048);
    a5 = comp(11);
    
    std::cout << a1 << "\n" << a2 << "\n" << a3 << "\n" << a4 << "\n" << a5 << std::endl;

    return 0;
}