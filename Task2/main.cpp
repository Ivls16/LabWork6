#include <iostream>
#include "solve.h"

// #include <bits/stdc++.h>
// g++ -o main main.cpp io.cpp solve.h solve.cpp
// g++ -o main main.cpp solve.cpp io.cpp testing.cpp solve.h -lgtest -lpthread
// мадара никита некит лох приве никто,,

int main() {
    test();

    std::cout << "Программа, заменяющая в тексте слова заданной длины на заданную подстроку\n";
    while (true) {
        std::cout << "Введите текст(пустой, если хотите завершить работу программы).\n";
        char *a = new char[200];
        read(a);
        if (a[0] == '\0') {
            std::cout << "Лол строка пустая.\n";
            break;
        }
        std::cout << "Введите подстроку, на которую нужно заменить слова заданной длины.\n";
        char *b = new char[200];
        read(b);
        std::cout << "Введите длину слова.\n";
        int k;
        read(k);
        char *ans = changeText(a, b, k);
        std::cout << "Полученный текст:\n";
        write(ans);
        delete[] a;
        delete[] b;
        delete[] ans;
    }
}