/*Problem statement : Use a stack to solve this problem. Read the numbers and push them
into the stack (without printing them) until a negative number is read. At
this time, stop reading and pop five items from the stack and print them. If
there are fewer than five items in the stack, print an error message and
stop the program.
After printing the five items, resume reading data and placing them in
the stack. When the end of the file is detected, print a message and the
items remaining in the stack. */

/* Code */

#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[]={1 ,2 ,3 ,4 ,5 ,-1 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,-2 ,11 ,12 ,-3, 1 ,2 ,3 ,4 ,5};
    n=sizeof(arr)/sizeof(int);
    int stack[n];
    int head=-1,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)                                                                     //Check for negative number
        {
            cout<<"Negative number is detected so popping 5 elements from stack : ";
            for(int j=0;j<5;j++)                                                        //Popping operations
            {
                if(head==-1)                                                            //If stack underflows
                {
                    cout<<"Under flow \n";
                    return -1;
                }
                cout<<stack[head]<<" ";                                                 //Printing popped 5 elements
                head--;
                count--;
            }
            cout<<"\n";
        }
        else
        {
            head++;
            stack[head]=arr[i];                                                         //Pushing elements in stack
            count++;       
        }
    }
    cout<<"End of file is detected and printing all elements in stack ";                //End of file is detected
    for(int i=0;i<count;i++)
    {
        cout<<stack[head]<<" ";                                                         //Printing all elements in stack
        head--;
    }
    cout<<endl;
}