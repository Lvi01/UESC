/*
Rafael do Nascimento Pedreira
Eduardo Oliveira Freire
Levi Silva Freitas
*/

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    node *next;

    node(int value)
    {
        this -> value = value;
        next = NULL;
    }
};

class Lista
{
    public:
    
    node *head;
    Lista(int v)
    {
       head = new node(v); 
    }

    int insert(int v)
    {
        int cont = 0;
        node *iterator = head;
        node *p = new node(v);
        
        if(p->value <= head -> value)
        {
            p-> next = head;
            head = p;
            return cont;
        }
        bool flag = true;
        while(iterator->next != NULL && flag)
        {   

            if(iterator -> next -> value < p-> value) 
            {
                iterator = iterator -> next;
                cont++;
            }
            else if(iterator -> value != p-> value)
            {
                    cont++;
                    flag = false;    
            }
        

        }
        if(iterator ->next == NULL && p-> value > iterator->value)
            cont++; 
        p -> next = iterator -> next;

        // while(iterator->next != NULL && p ->value > iterator->next ->value )
        // {    
        //     iterator = iterator -> next;
        //     cont++;

        // }



        iterator -> next = p; 
        return cont;
    }
};
int main()
{
    int n, aux;
    while(cin >> n)
    {
        cin >> aux;
        n--;
        Lista *l = new Lista(aux);

        cout << 0 << " "; 
        for(int i = 0; i < n ; i++)
        {
            cin >> aux;
            cout << l->insert(aux) << " ";
        } 
        cout << endl;
    }
}

