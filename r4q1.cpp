#include <iostream>

using namespace std;

int main(){
    int maior = -1;
    int num;

    while(num != 0){
    cout << "Digite um inteiro\n" << endl;
    cin >> num;

    if(num > maior){
        maior = num;
    }
    }

    cout << "O maior eh: \n" << maior << endl;
    return 0;
}
