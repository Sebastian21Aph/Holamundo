#include <iostream>
using namespace std;

int main () {
    // Decir Hello cinco veces
    for (int index = 0; index < 5; ++index)
      cout << HelloWorld! << endl;
    char input = 'i';
    cout << Para salir, pulse 'm' << endl;
    while(input != 'm') {
        cin  >> input;
        cout << Acaba de entrar  << input
             <<  debe entrar m para salir. << endl;
    }
    exit(0);
}