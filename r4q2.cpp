#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int num,x;
    srand(time(0));
    x = (rand()%100)+1;

    cout << "Advinhe o numero escolhio: \n" << endl;
    cin >> num;

    while(1){
    if(num > x){
        cout << "Muito alto.\nTente novamente:\n" << endl;
    }
    if(num < x){
        cout << "Muito baixo.\nTente novamente: \n" << endl;
    }
    if(num == x){
        cout << "Parabens voce acertou!\n" << endl;
        break;
    }
    cin >> num;
    }

    return 0;
}
