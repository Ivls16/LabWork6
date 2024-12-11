#include <iostream>
#include "solve.h"

//g++ -o main main.cpp solve.cpp io.cpp testing.cpp solve.h -lgtest -lpthread

int main() {
    test();

    std::cout << "Программа, выводящая самую короткую группу из нулей или единиц.\n";
    while (true) {
        std::cout << "Введите непустую строку, состоящую из нулей и единиц и пустую строку, чтобы завершить программу.\n";
        char *s = new char[81];
        int n;
        read(s, n);
        if (n == 0) {
            std::cout << "Строка пустая лол.\n";
            break;
        }
        std::cout << "Изначальная строка: ";
        write(s);
        std::cout << "Самая короткая группа: ";
        char* ans = shortest(s, n);
        write(ans);
        delete[] s;
        delete[] ans;
    }
}