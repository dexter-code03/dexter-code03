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
    void DeleteNthnodefrmlast(int n)
    {
        node *p=head;
        node *q;
        int count = 0;
        while(p)
        {
            count++;
            p=p->next;
        }
        count-=n;
        p=head;
        if(count==0)
        {
            head=p->next;
            p->next=nullptr;
            delete(p);
            return ;
        }
        while(count)
        {
            count--;
            q=p;
            p=p->next;
        }
        q->next=p->next;
        p->next=nullptr;
        delete(p);
    }
    void RemoveKthnode(int k)
    {
        node *p=head;
        node *q;
        int t=k;
        while(p)
        {
            t--;
            if(t==0)
            {
                q->next=p->next;
                p->next=nullptr;
                p=q->next;
                t=k;
            }
            else
            {
                q=p;
                p=p->next;
            }
        }
    }
    bool Palindrome() {
        if (head == NULL || head->next == NULL) {
            return true;  // Empty list or single node is palindrome
        }

        // Find middle of the list
        node *slow = head;
        node *fast = head;
        node *prev_slow = head;
        
        while (fast && fast->next) {
            fast = fast->next->next;
            prev_slow = slow;
            slow = slow->next;
        }

        // If list has odd number of nodes, skip middle node
        if (fast != NULL) {
            slow = slow->next;
        }

        // Reverse the second half
        node *second_half = slow;
        prev_slow->next = NULL;
        second_half = reverse(second_half);

        // Compare first half with reversed second half
        node *first_half = head;
        while (first_half && second_half) {
            if (first_half->data != second_half->data) {
                return false;
            }
            first_half = first_half->next;
            second_half = second_half->next;
        }

        return true;
    }

    // Helper function to reverse a linked list
    private:
    node* reverse(node* head) {
        node *prev = NULL;
        node *current = head;
        node *next = NULL;
        
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        return prev;
    }
};

int main()
{
    LinkedList list;
    list.insertAtend(1);
    list.insertAtend(1);
    list.insertAtend(1);
    list.insertAtend(2);
    list.insertAtend(1);
    list.insertAtend(1);
    list.insertAtend(0);
    list.display();
    cout<<list.Palindrome();
}