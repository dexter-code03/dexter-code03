#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node (int v)
    {
        data = v;
        next = NULL;
    }
};
class LinkedList
{
    private:
    node *head;
    int count=0;
    void displayRecursivehelper(node *current)
    {
        if(current==NULL)
        {
            return;
        }
        cout<<"-->"<<current->data;
        displayRecursivehelper(current->next);
    }
    void SearchByRecursionHelper(int data,node *current)
    {
        if(current==NULL)
        {
            cout<<"invalid data"<<endl;
            return;
        }
        else if(data==current->data)
        {
            cout<<count<<endl;
            return;
        }
        count++;
        SearchByRecursionHelper(data,current->next);
    }
    void ReverseLLhelper(node *&head)
    {
        node *p=head;
        node *q=head->next;
        node *temp;
        while(q)
        {
            temp = q;
            q=q->next;
            temp->next = p;
            p=temp;
        }
        head->next=NULL;
        head = p;
    }


    public:
    LinkedList()
    {
        head = nullptr;
    }
    void insertAtstart(int value)
    {
        node *temp = new node(value);
        if(head==NULL)
        {
            temp->next=NULL;
            head = temp;
        }
        else
        {
            temp->next= head;
            head = temp;
        }
    }
    void display()
    {
        node *temp=head;
        while(temp)
        {
            cout<<"-->"<<temp->data;
            temp=temp->next;
        }
        cout<<endl;
    }
    void displayRecursive()
    {
        displayRecursivehelper(head);
        cout<<endl;
        cout<<"Printed By Recursion"<<endl;
    }
    void insertAtend(int value)
    {
        node *temp = new node(value);
        node *p=head;
        if(head==NULL)
        {
            temp->next=nullptr;
            head = temp;
        }
        else
        {
            while(p->next)
            {
                p=p->next;
            }
            p->next=temp;
            temp->next=nullptr;
        }
    }
    void insertAtk(int k,int value)
    {
        node *temp=new node(value);
        node *p = head;
        if(head==NULL || k==0)
        {
            temp->next=head;
            head = temp;
        }
        else
        {
            while(k-1 && p->next)
            {
                p=p->next;
                k--;
            }
            if(k-1!=0)
            {
                cout<<"position is out of bound but data added at end position"<<endl;
            }
            temp->next=p->next;
            p->next=temp;
        }
    }
    void deleteNode(int value)
    {
        node *p = head;
        node *temp;
        while (p->next->data!=value)
        {
            p=p->next;
        }
        temp=p->next;
        p->next=temp->next;
        temp->next=nullptr;
        delete(temp);
    }
    void SearchByRecursion(int data)
    {
        SearchByRecursionHelper(data,head);
    }
    void ReverseLL()
    {
        ReverseLLhelper(head);
    }
    bool isPalindrome()
    {
        node *p=head;
        node *q=head;
        int count=0;
        vector <int> ll;
        while(q && q->next)
        {
            ll.push_back(p->data);
            p=p->next;
            q=q->next->next;
            count+=2;
        }
        if(q!=NULL)
        {
            count++;
        }
        if(count%2!=0)
        {
            p=p->next;
        }
        int n = ll.size()-1;
        while(n>=0&&p)
        {
            if(ll[n]!=p->data)
            {
                return 0;
            }
            n--;
            p=p->next;
        }
        return 1;
    }
};
int main()
{
    LinkedList list;
    list.insertAtend(1);
    list.insertAtend(0);
    list.display();
    cout<<list.isPalindrome();
}
    