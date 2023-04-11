/*
Eduardo Oliveira Freire
Levi Silva Freitas
Rafael do Nascimento Pedreira
*/
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;


class Stack
{
    public:
        long long int v[MAX];
        int len;
    Stack()
    {
        len = 0;
    }

    void push(long long int aux)
    {
        v[len] = aux;
        len++;
    }

    void top()
    {
        cout << v[len - 1] << endl; 
    }
    

    long long int pop()
    {
        len--; 
        return v[len];
    }   
};


int main()
{
    int n;
    string operation;
    while(cin >> n && n)
    {
        Stack s;
        long long int val;
        while(n--)
        {
            cin >> operation;
            if(operation == "BIPUSH")
            {
                cin >> val;
                s.push(val);
            }
            else if(operation == "IADD")
            {
                long long int v1 = s.pop(), v2 = s.pop();
                s.push(v1 + v2);
            }
            else if(operation == "ISUB")
            {
                long long int v1 = s.pop(), v2 = s.pop();
                s.push(v1 - v2);
            }
            else
            {
                long long int v1 = s.pop(), v2 = s.pop();
                s.push(v1 * v2);
            }
        }
        s.top();   
    }
}