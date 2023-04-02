#include <bits/stdc++.h>
using namespace std;
/*
Rafael do Nascimento Pedreira
Eduardo Oliveira Freire
Levi Silva Freitas
*/


class Node
{   
    public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next  = NULL;
    } 
};

class Lista
{
    public:
    Node *head = new Node(1);
    Lista()
    {
        head -> value = 1;

    }

    void create(int n)
    {
        int i = 2;
        Node *h = head, *t = head;
        while(i <= n)
        {
            Node *new_node = new Node(i++);
            t -> next = new_node;
            t = t->next;
        }
        t -> next = h;
    }

    int matar(int friends, int kill)
    {
        Node *h = head;
        
       if(kill == 1)
            return friends;
        while(friends != 1)
        {
       
            for(int i = 1; i < kill - 1 ; i++)
                h = h -> next;
            h -> next = h -> next -> next;
            h = h->next; 
            friends--;
        }

        return h -> value;
    }

};

int main()
{
    int friends, kill;
    while(cin >> friends >> kill)
    {
        Lista *l = new Lista();
        l->create(friends);
        cout << l->matar(friends, kill) << endl;
    }

}