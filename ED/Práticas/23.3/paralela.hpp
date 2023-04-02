/* EDUARDO OLIVEIRA FREIRE
   RAFAEL DO NASCIMENTO PEDREIRA
   LEVI SILVA FREITAS
*/

#include <bits/stdc++.h>
#define LEVI_EPSOL 0.000000000001
using namespace std;


class reta
{
    private:
        double a, b, c;
        
    public :
    reta(double a, double b, double c)
    {
        this -> a = a;
        this -> b = b;
        this -> c = c;
    }

    bool paralela(reta s)
    {
        double coeficiente1 = (double) this -> a / this ->  b;
        double coeficiente2 = (double) s.a / s.b;

        if(this -> a == 0 && s.a == 0 || this -> b == 0 && s.b == 0){
            return true;
        }
        else if(LEVI_EPSOL > coeficiente1 - coeficiente2)
            return true;
        return false;    
    }
};

    /* Compilou, so nao sei se funciona
int main()
{
    reta a1(1.234, 2.32 ,3.98);
    return 0;
}
    */