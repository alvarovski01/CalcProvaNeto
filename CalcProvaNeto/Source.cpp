#include <iostream>
#include <tchar.h>
using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese"));

    /*MATRIZ COMUM*/
    float a11, a12, a21, a22, detA;

    /*MATRIZ DOS COFATORES*/
    float A11, A12, A21, A22;

    /*MATRIZ INVERSA*/
    float I11, I12, I21, I22, dinv;

    /*SEM CATEGORIA*/
    char decisao;

    cout << "| CALCULADORA DE MATRIZ (2X2) |" << endl;
    cout << "Digite os elementos da matriz, sentido linha: " << endl;
    cout << "\n";

    cout << "LINHA 1" << endl;
    cout << "A11: ";
    cin >> a11;
    cout << "A12: ";
    cin >> a12;
    cout << "\n";

    cout << "LINHA 2" << endl;
    cout << "A21: ";
    cin >> a21;
    cout << "A22: ";
    cin >> a22;
    cout << "\n";

    /*CÁLCULO DOS DETERMINANTES*/
    detA = a11 * a22 + a12 * a21;

    /*CÁLCULO DO COFATOR*/
    A11 = a22;
    A12 = -(a21);
    A21 = -(a12);
    A22 = a11;

    /*DETERMINANTE DE UMA MATRIZ INVERSA:*/
    dinv = 1 / detA;

    /*MATRIZ INVERSA:*/
    I11 = a11 / detA;
    I12 = -(a12 / detA);

    I21 = -(a21 / detA);
    I22 = a22 / detA;

    cout << "Matriz descrita: " << endl;

    printf("|%.2f %.2f|\n", a11, a12);
    printf("|%.2f %.2f|\n", a21, a22);

    cout << "\n";

    cout << "Qual cálculo deseja realizar?" << endl;
    cout << "\n1. Determinante \n 2. Matriz dos cofatores \n 3. Matriz inversa \n 4. Determinante da matriz inversa \n" << endl;
    cout << "-> Escolha: ";
    cin >> decisao;
    cout << "\n";

    
    switch (decisao)
    {
    case '1':
        printf("Seu determinante resultou em %.2f\n", detA);
        break;
    case '2':
        printf("Aqui está a matriz do cofator:\n");
        printf("\n");
        printf("|%.2f %.2f|\n", A11, A12);
        printf("|%.2f %.2f|\n", A21, A22);
        break;
    case '3':
        printf("Aqui está a matriz inversa:\n");
        printf("|%.2f %.2f|\n", I11, I21);
        printf("|%.2f %.2f|\n", I12, I22);
        break;
    case '4':
        printf("O determinante da inversa é %.2f", dinv);
    default:
            printf("Você não selecionou nenhuma opção válida.\n");
        break;
    }

}