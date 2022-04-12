#include <iostream>

using namespace std;

void calcularEdad(int anioAct, int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int anioAct;
    int mesAct;
    int fechAct;
    int anioNac;
    int mesNac;
    int fechNac;

    cout<<"Calculadora de edad"<<endl;
    cout<<"Ingrese el anio actual"<<endl;
    cin>>anioAct;
    cout<<"Ingrese el mes actual"<<endl;
    cin>>mesAct;
    cout<<"Ingrese el dia actual"<<endl;
    cin>>fechAct;

    cout<<"Ingrese el anio de nacimiento"<<endl;
    cin>>anioNac;
    cout<<"Ingrese el mes de nacimiento"<<endl;
    cin>>mesNac;
    cout<<"Ingrese el dia de naciemiento"<<endl;
    cin>>fechNac;

    calcularEdad(anioAct,mesAct,fechAct,anioNac,mesNac,fechNac);

    return 0;
}

void calcularEdad(int anioAct, int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int respFech, respMes;
    if(fechAct<fechNac){
        fechAct = fechAct +30;
        mesAct = mesAct -1;
        respFech = fechAct - fechNac;
    }
    else{
        respFech = fechAct - fechNac;
    }

    if(mesAct<mesNac){
        mesAct = mesAct +12;
        anioAct = anioAct -1;
        respMes = mesAct - mesNac;
    }
    else{
        respMes =mesAct - mesNac;
    }

    cout<<"Su edad es: "<<endl;

    cout<<"Anios: "<<anioAct-anioNac<<endl;
    cout<<"Meses: "<<respMes<<endl;
    cout<<"Dias: "<<respFech<<endl;
}
