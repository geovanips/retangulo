#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int base,altura,area,perimetro, diagonal;
    cout << "\n#### PROGRAMA PARA CALCULO DA AREA, DAIGONAL E PERIMETRO DO retangulo####\n";
    cout << "\nEntre com a base e altura separados por espaco:\n";
    cin >> base >> altura;
    area = base*altura;
    perimetro = (2*base) + (2*altura);
    diagonal = sqrt(((base)^2)+((altura)^2));
    cout << "\nA area e: " <<area <<"\nO perimetro e: "<<perimetro<<"\nA diagonal e: "<<diagonal<<"\n";

}
