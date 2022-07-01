#include <iostream>
using namespace std;

int main(){                                                                      
    int hi, hf, mi, mf, tempo_hora, tempo_minuto;
    cin >> hi >> mi >> hf >> mf;


    tempo_hora = hf - hi;
    tempo_minuto = mf - mi;

    if(tempo_minuto < 0){
    	tempo_minuto += 60;
    	tempo_hora --;
    }
    if(tempo_hora < 0){
    	tempo_hora += 24;
    }
    if(hi == hf && mi == mf){
    	cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    }
    else{
    	cout << "O JOGO DUROU " << tempo_hora << " HORA(S) E " << tempo_minuto << " MINUTO(S)\n";
    }

return 0;
}