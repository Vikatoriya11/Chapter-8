#include <iostream>

using namespace std;

const int SIZE = 5;

template <typename T>
T max5(T arr[])
{
    T a_max = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > a_max) {
            a_max = arr[i];
        }
    }
    return a_max;
}

int main(int argc, char **argv)
{
    int m1[SIZE] = {1, 10, 6, 89, 0};
    double m2[SIZE] = {10.7, 100.1, 0.0, 4.1, 22.9};

    cout << "Максимальное значение в m1: " << max5(m1) << endl;
    cout << "Максимальное значение в m2: " << max5(m2) << endl;

    return 0;
}
