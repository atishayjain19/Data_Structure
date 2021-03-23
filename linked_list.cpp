//create function to return last node address.
//create a function to move last node to first place
#include <bits/stdc++.h> 
using namespace std;
struct node
{
    int data ;
    struct node *next;
};

struct node *find_last_node(struct node *s)
{
   if (s==NULL) {
       cout<<"LL is empty";
       return NULL;
   }
   while (s->next!=NULL)
   {
        s=s->next;
   } 
   return(s);
}

struct node * move_last_node_to_first_place(struct node *s)
{
    if (s==NULL) return s;
    if (s->next==NULL) return s;
    struct node *s1;                 //friend pointer
    struct node *h=s;
    
    while (s->next!=NULL)
    {
        s1=s;
        s=s->next;
    }
    s1->next=NULL;
    s->next=h;
    
    return s;

}

void show(struct node *q)
{
    while(q->next!=NULL)
    {
        cout<<q->data<<"-> ";
        q=q->next;
    }
    cout<<q->data;
}

int main() {
    //freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    struct node a={10,NULL};
    struct node b={20,NULL};
    struct node c={30,NULL};
    struct node d={40,NULL};

    a.next=&b;
    b.next=&c;
    c.next=&d;
    
    struct node *head=&a;
    struct node *last=find_last_node(head);

    struct node *move=move_last_node_to_first_place(head);
    show(move);
    return 0;
}
