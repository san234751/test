#include <iostream>
using namespace std;
struct queue *f = NULL;
struct queue *r = NULL;
struct queue
{
    int data;
    struct queue *next;
};

void enqueue(int val)
{
    struct queue *n = new struct queue;
    if (n == NULL)
    {
        cout << "queue overflow";
    }
    else
    {

        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
int dequeue()
{
    int a = -1;
    if (f == NULL)
    {
        cout << "queue is empty";
    }
    else
    {
        struct queue *ptr=f;
        a = ptr->data;
        f = f->next;
        delete ptr;
    }
    return a;
}
void queuetraversal(struct queue *f)
{
    struct queue *e=f;
    while(e->next!=NULL)
    {
        cout<<e->data<<endl;
        e=e->next;
    }
}

int main()
{
    enqueue(10);
    enqueue(80);
    enqueue(5);
    enqueue(1);
    queuetraversal(f);
    cout << "the element dequed is: " << dequeue();
    return 0;
}