#include <iostream>

using namespace std;

void insertion(int data);
void traverse();


class node
{
public:
    int info;
    node *link;
};

node *head=NULL,*temp;

void insertion(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->link=NULL;
    if(head==NULL)
    {
        head=ptr;
        temp=ptr;
    }
    else
    {
        temp->link=ptr;
        temp=ptr;
    }
}
void traverse()
{
    node *srt;
    for(srt=head;;)
    {
        cout<<srt->info<<" ";
        if(srt->link==NULL)
        {
            break;
        }
        srt=srt->link;
    }
    cout<<endl;
}

int main()
{
    int item,n;
    cout<<"Enter the number of element:"<<endl;
    cin>>n;
    cout<<"Enter the data:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>item;
        insertion(item);
    }
    cout<<"The elements are: "<<endl;
    traverse();

    return 0;
}
