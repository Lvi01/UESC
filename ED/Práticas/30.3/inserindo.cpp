/*
Eduardo Oliveira freire 
Rafael do Nascimento Pedreira 
Levi Silva Freitas
*/
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public :
    int value;
    Node *next;
    Node(int n)
    {
        value = n;
    }
};

class Deque
{
    public :
    Node *head;
    Node *tail;
    
    Deque(int v)
    {
        Node *n = new Node(v);
        head = n;
        tail = n;
    }
    void insert(int v, char op);
    void print();

};

int main()
{
    int n, val;
    while(cin >> n && n)
    {    
        char op;
        cin >> op >> val;
        Deque *l = new Deque(val);  
        while(--n)
        {
            cin >> op >> val;
            l->insert(val, op);
        }
        l->print();
        printf("\n");
    }

}


void Deque :: insert(int v, char op)
{
    
    Node *n = new Node(v);
    if(op == 'P')
    {   
        n -> next = head;
        head = n;
        
    }
    else
    {
        tail -> next = n;
        tail = n;
    }     
}

void Deque :: print()
{
    Node *n = head;
    while(n != NULL)
    {
        cout <<n ->value << " ";
        n = n -> next;
    }
}
