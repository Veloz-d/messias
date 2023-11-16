#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data, dia, mes, ano, meseano, nomemes, noisdaocuporra, noisdaocuporra2;
    int numerodia, numeromes;
    cin >> data;
    noisdaocuporra = data;
    dia = data.erase(2,8);
    meseano = noisdaocuporra.erase(0,3);
    noisdaocuporra2 = meseano;
    mes = meseano.erase(2,5);
    ano = noisdaocuporra2.erase(0,3);
    numeromes = stoi(mes);
    numerodia = stoi(dia);
    if(numerodia<10){
        dia = dia.erase(0,1);
    }
    switch(numeromes){
        case 01:
            nomemes = "Janeiro";
        break;
        case 02:
            nomemes = "Fevereiro";
        break;
        case 03:
            nomemes = "Março";
            break;
        case 04:
            nomemes = "Abril";
        break;
        case 05:
            nomemes = "Maio";
        break;
        case 06:
            nomemes = "Junho";
        break;
        case 07:
            nomemes = "Julho";
        break;
        case 8:
            nomemes = "Agosto";
        break;
        case 9:
            nomemes = "Setembro";
        break;
        case 10:
            nomemes = "Outubro";
        break;
        case 11:
            nomemes = "Novembro";
        break;
        case 12:
            nomemes = "Dezembro";
        break;
    }
    cout << dia << " de " << nomemes << " de " << ano;
    return 0;
}