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
        int v[MAX];
        int len;
    Stack()
    {
        len = 0;
    }

    void print()
    {
        if(isEmpty())
            cout << "*";
        else    
            for(int i = len - 1; i >= 0; i--)
                cout << v[i] << " ";
        cout << endl;
    }

    void push(int aux)
    {
        v[len] = aux;
        len++;

    }

    bool isEmpty()
    {
        return len == 0? true : false; 
    }

    void pop()
    {
        len--; 
    }   
};


int main()
{
    int operations;
    char op; int value;
    while(cin >> operations && operations)
    {
        Stack s;
        while(operations--)
        {
            cin >> op;
            if(op == 'E')
            {
                cin >> value;
                s.push(value);
                s.print();
            }
            else
            {
                s.pop();
                s.print();
            }
        }
        cout << "\n";
    }

    
}