#include <iostream>
#include <cstring>

using namespace std;

const int size = 30;

struct CandyBar {
    char name[size];
    double ves;
    int kkal;
};

void fill_cb(CandyBar & a,const char * name = "Millennium Munch",double ves = 2.85, int kkal = 350)
{
    strcpy(a.name, name);
    a.ves=ves;
    a.kkal=kkal;
}

void print_cb(const CandyBar & b)
{
    cout << "Название: " << b.name << endl;
    cout << "Вес: " << b.ves << endl;
    cout << "Калории: " << b.kkal << endl;

}

int main(int argc, char **argv)
{
    CandyBar candybar1;
    CandyBar candybar2;

    fill_cb(candybar1);
    print_cb(candybar1);

    fill_cb(candybar2, "Sladost", 3.3, 400);
    print_cb(candybar2);

    return 0;
}
