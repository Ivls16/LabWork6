#include <iostream>
#include "solve.h"

// #include <bits/stdc++.h>
// g++ -o main main.cpp io.cpp solve.h solve.cpp
// 2
// абба cccaббббббббббббббббек peprra
// nikita pidoraссsss


int main() {
    test();

    std::cout << "Программа, архивирующая массив строк.\n";
    while (true) {
        std::cout << "Введите количество строк в массиве(ноль, чтобы завершить программу).\n";
        int n;
        read(n);
        if (n == 0) {
            break;
        }
        char **a = new char*[n];
        for (int i = 0; i < n; i++) {
            a[i] = new char[200];
            std::cout << "Введите a[" << i << "]: ";
            read(a[i]);
        }
        std::cout << "Полученный массив:\n";
        for (int i = 0; i < n; i++) {
            char* ans = new char[200];
            archive(a[i], ans);
            write(ans);
        }
        for (int i = 0; i < n; i++) {
            delete[] a[i];
        }
        delete[] a;
    }
}