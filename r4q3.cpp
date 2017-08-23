#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int n, i, face;
    float p1=0, p2=0, p3=0, p4=0, p5=0, p6=0;
    cout << "Digite o numero de vezes que o dado sera lancado: " << endl;
    cin >> n;

    if(n == 0){
        return 0;
    }

    srand((unsigned)time(0));

    for (i=0; i <n; i++){
        face = rand()%(6-1+1)+1;

        switch (face){
            case 1:
            p1 = p1 + 1;
            case 2:
            p2 = p2 + 1;
            case 3:
            p3 = p3 + 1;
            case 4:
            p4 = p4 + 1;
            case 5:
            p5 = p5 + 1;
            case 6:
            p6 = p6 + 1;
        }
    }
    p1 = p1/n;
    p2 = p2/n;
    p3 = p3/n;
    p4 = p4/n;
    p5 = p5/n;
    p6 = p6/n;
    cout << "Porcentagem da face 1 : " << p1 << endl;
    cout << "Porcentagem da face 2 : " << p2 << endl;
    cout << "Porcentagem da face 3 : " << p3 << endl;
    cout << "Porcentagem da face 4 : " << p4 << endl;
    cout << "Porcentagem da face 5 : " << p5 << endl;
    cout << "Porcentagem da face 6 : " << p6 << endl;
return 0;
}
