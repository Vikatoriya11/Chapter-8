#include <iostream>

using namespace std;

int count = 0;

void print_str(const string &str, int n = 0)
{
    ++count;
    if (n != 0) {
        for (int i = 0; i < count; i++) {
            cout << str << endl;
        }
    } else {
        cout << str << endl;
    }
}

int main(int argc, char **argv)
{
    print_str("Hello");
    print_str("Goodbye"); 
    print_str("Rara", 9);
    return 0;
}
