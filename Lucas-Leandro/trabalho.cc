//NOMES: Lucas(lucascherutti@gmail.com) e Leandro(leandro-ie@hotmail.com)
//Implemente o cálculo da média da disciplina. A classe deve representar as notas de um aluno. Faça também um método para calcular e retornar a média do aluno. As notas e o cálculo são definidos pela fórmula de G1 desta disciplina.
//TRABALHO I (F)
#include "Aluno.h"
#include<iostream>
using namespace std;


int main()
{
    Aluno a1(5.0,6.0,8.0,7.0);
    a1.calcularMedia();
    a1.mostrar();

 Aluno a2(9.0,6.0,8.0,10.0);
    a2.calcularMedia();
    a2.mostrar();


    return 0;
}
