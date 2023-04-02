/* EDUARDO OLIVEIRA FREIRE
   RAFAEL DO NASCIMENTO PEDREIRA
   LEVI SILVA FREITAS
*/

#include <bits/stdc++.h>
using namespace std;

class racional
{
    private:
        int a, b;
    public:
        racional(int a, int b)
        {
            this -> a = a;
            this -> b = b;
        }
        void  reduzir()
        {
            int maior = max(a, b);
            int _min = min(a, b);
            while(_min > 0)
            {
                int aux = maior % _min;
                maior = _min;
                _min = aux; 
            }
            this -> a /= maior;
            this -> b /= maior; 
        }

        int numerador()
        {
            return this -> a;
        } 
        int denominador()
        {
            return b;
        } 
};

/*Agora ta testado e 100% atualizado
int main()
{   
     
    racional a(5,15);
    cout << a.aerador() << '\t' << a.bominador() << endl;
    a.reduzir();
    cout << a.aerador() << '\t' << a.bominador() << endl;

}
*/