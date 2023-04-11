/*
Eduardo Oliveira Freire
Levi Silva Freitas
Rafael do Nascimento Pedreira
*/
#include <bits/stdc++.h>
#define MAX 10000
using namespace std;


class Stack
{
    public:
        char v[MAX];
        int len;
    Stack()
    {
        len = 0;
    }

    void push(char aux)
    {
        v[len] = aux;
        len++;
    }

    bool isEmpty()
    {
        return len == 0? true : false; 
    }

    char top()
    {
        
        return v[len - 1];
    }
    void pop()
    {
        len--; 
    }   
};


int main()
{

    int len;
    string sequence;
    while(cin >> len)
    {
        Stack s;    
        bool flag = true;
        cin >> sequence;
        if(len % 2)
        {
            bool firstPart = true;
            for(int i = 0; i < len && flag; i++)
            {
                if(sequence[i] != 'C' && firstPart)
                {      
                    s.push(sequence[i]);
                }
                else if(sequence[i] == 'C')
                    firstPart = false;
                else
                {
                    if(!s.isEmpty() && s.top() == sequence[i])
                        s.pop();
                    else if(!s.isEmpty() || s.isEmpty())
                        flag = false;    
                }    
            }
            if(flag)
                cout << "SIM\n";
            else
                cout << "NAO\n";    
        }
        else
            cout << "NAO\n";
        
    }
}