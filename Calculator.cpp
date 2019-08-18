//by:HallysonMiranda
#include <iostream>
using namespace std;

int main(){
    /*inicializando valores, alocando espaços nos blocos de memória para assim,
    armazenar os valores que irão ser digitados pelo usuário*/

    int num1 = 0, num2 = 0;
    char oper = ' ';

    //inserindo numero 1
    cin >> num1 ;
    //inserindo operador
    cin >> oper;
    //inserindo numero dois
    cin >> num2;

    /* A leitura do código é feito de forma (sícrona),significa dizer
       que o compilador, vai ler seu código da primeira linha de cima,
       passando linha por linha até chegar na última sem pular nem uma linha,
       sabendo disso,quando o usuário digitar todos os valores, vai entrar no
       switch abaixo e fazer a verificação dos dados que o usuário digitou, assim 
       retornando algum valor.
     */  

    //verificando o operador que o usuário inseriu

    switch(oper){

    case '+': cout << num1 + num2 << endl;

    /*realizou  a leitura do caso 1,
    caso o operador digitado for '+',
    ele para no break, e o restante das verificações segue do mesmo jeito.
    */

    break;

    case '-': cout << num1 - num2 << endl;
    break;

    case '/': cout << num1 / num2 << endl;
    break;

    case '*': cout << num1 * num2 << endl;
    break;

    default :

    return false;

    }

    return 0;

}
