/* EDUARDO OLIVEIRA FREIRE
   RAFAEL DO NASCIMENTO PEDREIRA
   LEVI SILVA FREITAS
*/

#include <bits/stdc++.h>
using namespace std;

class complexo
{
    private: 
        double a, b;

    public:
        complexo(double a, double b)
        {
            this -> a = a;
            this -> b = b;
        }

        complexo operator=(complexo c)
        {
            return *this;
        }

        complexo operator-()
        {
            a = -a;
            b = -b;
            return *this;
        }    

        complexo operator+(complexo c)
        {
            double real = this-> a + c.a;
            double imag = this-> b + c.b;
            complexo aux(real, imag);
            return aux;
        }

        complexo operator-(complexo c)
        {
            double real = this-> a - c.a;
            double imag = this-> b - c.b;
            complexo aux(real, imag);
            return aux;
        }

        complexo operator*(complexo c)
        {
            double real = this -> a * this -> b - c.a * c.b;
            double imag = this -> a * c.b - c.a * this -> b;
            complexo aux(real, imag);
            return aux;
        }
        
        complexo operator/(complexo c)
        {
            double real = (this -> a * c.a + this -> b * c.b) / ((c.a * c.a) + (c.b * c.b));
            double imag = (-this -> a * c.b + this -> b * c.a) / ((c.a * c.a) + (c.b * c.b));
            complexo aux (real , imag);
            return aux;
        }

        double modulo()
        {
            return sqrt(a * a + b * b);        
        }

        double real()
        {
            return this -> a;
        }
        double imaginario()
        {
            return this -> b;
        }    
};