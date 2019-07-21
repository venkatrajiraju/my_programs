#include<iostream>
using namespace std;
 struct node
{
    int data;
    node * link;
};
node* insert(node* head)
{
    int num;
    cout<<"Enter data to be inserted : ";
    cin>>num;
    node *n=new node();
    n->data=num;
    n->link=NULL;
    if(head==NULL)
    {
        head=n;
        return head;
    }
    node *temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=n;
    return head;
}
node* delete_list(node *list,int pos)
{
    int cnt=0;
    node* temp=list;
    if(list==NULL)
    {
        cout<<"No element in list";
        return list;
    }
    if(pos==1)
    {
        list=NULL;
        return list;
    }
    while(temp->link!=NULL && cnt!=pos-1)
    {
        temp=temp->link;
        cnt++;
    }
    if(cnt==(pos-1))
    {
        temp->link=temp->link->link;
        return list;
    }
    else if(temp->link==NULL)
    {
        cout<<"Position out of range";
        return list;
    }

}
void display(node *list)
{
    node* temp=list;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->link;
    }
}
int main()
{
    node *head=NULL;
    int choice=0;
    node* list=NULL;
    do
    {
        list=insert(list);
        cout<<"Do you want to delete an element :";
        cin>>choice;
        if(choice==1)
        {
            int pos;
            cout<<"Enter the position to delete : ";
            cin>>pos;
            list=delete_list(list,pos);
        }
        cout<<"Do you want to continue : ";
        cin>>choice;
    } while (choice!=0);
    display(list);
    cout<<endl;
}