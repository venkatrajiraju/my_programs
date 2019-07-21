#include<iostream>
using namespace std;
struct node
{
    int data;
    node* link;
};
node * insert(node * head,int n)
{
    node* t=new node;
    t->data=n;
    t->link=NULL;
    if(head==NULL)
    {
        head=t;
        return head;
    }
    node *p=head;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=t;
    return head;
}
void reverse(node * t)
{
    if(t==NULL)
    {
        return;
    }
    reverse(t->link);
    cout<<t->data<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int num;
    node* head=NULL;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>num;
        head=insert(head,num);
    }
    cout<<"Reversing the list : ";
    reverse(head);
    cout<<endl;
    return 0;
}