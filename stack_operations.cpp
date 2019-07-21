#include<iostream>
using namespace std;
class stack
{
    private:
            int arr[5],top;
    public:
            stack()
            {
                top=-1;
            }
            void push(int n)
            {
                if((top+1)==5)
                {
                    cout<<"Stack overflow\n";
                }
		top=top+1;
                arr[top]=n;
            }
            int pop()
            {
                if(top==-1)
                {
                    cout<<"Stack underflow\n";
                    return -1;
                }
                top=top-1;
                return arr[top+1];
            }
            int peek()
            {
                return arr[top];
            }
            void display()
            {
                for(int i=top;i>=0;i--)
                {
                    cout<<arr[i]<<"  ";
                }
		cout<<endl;
            }
};

int main()
{
    int choice;
    string proceed;
    stack s=stack();
    do
    {
        cout<<"Enter your choice : \n1.Push\n2.Pop\n3.Top\n4.Display\nEnter the option : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                int num;
                cout<<"Enter the element to push : ";
                cin>>num;
                s.push(num);
            }break;
            case 2:
            {
                int num;
                num=s.pop();
                if(num!=-1)
                    cout<<"Popped element : "<<num<<"\n";
            }break;
            case 3:
            {
                int num;
                num=s.peek();
                cout<<"Top element of the stack : "<<num<<"\n";
            }break;
            case 4:
            {
                s.display();
            }break;
            default:
            {
                cout<<"Enter the valid option and continue ";
            }break;
        }
        cout<<"Do you want to continue : ";
        cin>>proceed;
    } while (proceed=="Yes");
    
}
