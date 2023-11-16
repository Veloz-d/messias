#include <iostream>
#include <string>
using namespace std;

int main()
{
    int entrada;
    cin >> entrada;
    for(int i = 1; i <= entrada; i++){
        for(int o = 1; o <= i; o++){
            cout << "!";
        }
        cout << "\n";
    }
    return 0;
}