#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void func(string & str)
{
    for(char & c:str) {
        c=toupper(c);
    }
}

int main(int argc, char **argv)
{
    string input;

    cout<<"Enter a string: ";
    getline(cin,input);

    while(input != "q") {
        func(input);
        cout<<input<<endl;

        cout<<"Enter next string: ";
        getline(cin,input);
    }

    return 0;
}
