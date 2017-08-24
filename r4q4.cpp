#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int i, enq = 0, maior, indMaior;
    float jogador[24], percent[24];

    for(i=0;i<24;i++){
        jogador[i] = 0;
    }
    cout << "Enquete: Quem foi o melhor jogador?" << endl;
    while(1){
        cout << "Numero do Jogador (0=fim): " << endl;
        cin >> i;
        if(i == 0){
            break;
        }
        if(i > 23){
            cout << "Informe um valor entre 1 e 23 ou 0 para sair!" << endl;
            continue;
        }
        enq = enq + 1;
        jogador[i] = jogador[i] + 1;
    }
    for(i=0;i<24;i++){
        percent[i] = (jogador[i]/ enq) * 100;
    }

    cout << "Resultado da votacao" << endl;
    cout << "" << endl;
    cout << "Foram computados  " << enq <<  " votos." << endl;
    cout << "Jogador          Votos          %" << endl;
    for(i=0;i<24;i++){
        if(jogador[i]>0){
            cout << " " << i << "            " << jogador[i] << "           " << percent[i] << "%" << endl;
        }
    }
    maior = jogador[0];
    for(i=0;i<24;i++){
        if(jogador[i]> maior){
            maior = jogador[i];
            indMaior = i;
        }
    }
    cout << "O melhor jogador foi o numero " << indMaior << ", com  " << maior << " votos, correspondendo a  " << percent[indMaior] << "% do total de votos." << endl;
return 0;
}
