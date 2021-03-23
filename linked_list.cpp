//create LL and return LL

#include <bits/stdc++.h> 
using namespace std;
struct node
{
    int data ;
    struct node *next;
};

 struct node *main() {
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

    cout<<head->data<<endl;
    cout<<(*head).data<<endl;
    cout<<a.data;
    
    return (head);
}
