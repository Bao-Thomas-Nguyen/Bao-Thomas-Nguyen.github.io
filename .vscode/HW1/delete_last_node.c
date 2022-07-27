#include<stdio.h>
#include<stdlib.h>


struct list
{
    int data;
    struct list *next;
}

typedef struct list *vector;
vector create_node(int value)
 {
    vector temp;
    temp=(vector)malloc(sizeof(struct list));
    temp ->temp = NULL;
    temp ->data=value;
    return temp;

 }

vector vector_push_back(vector node, int value)
{
    vector temp,p;
    temp=create_node(value);
    if (node==NULL)     
    {
       node=temp;
    }
    else
    {
        p=node;
        while (p->next !=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        
    }
    return node;
}

vector init_linker()
{
    vector first=NULL;
    int n, value;
    do
    {
        printf("Nhap so pha tu mang n=");
        scanf("%d",&n);
    } while (n<0);
    
    for (int i = 0; i < n; i++)
    {
        printf("nhap gia tri so = %d", i);
        first=vector_push_back(first,value);

    }
    return first;
}

int Get(vector node, int index)
{
    int i=0;
    vector p=node;
    while (p->next !=NULL && i != index)
    {
        i++;
        p=p->next;
    }
    return p->data;
}

vector delete_node (vector node)
{
    vector  p, temp;
    p=node;
    if (p->next=NULL)
    {
        temp=NULL;
        return temp;

    }
    while (p->next !=NULL)
    {
        temp=p;
        p=p->next;
    }

    temp->next =NULL;
    free(p);
    return node;
    
}    
void output (vector node)
{
    int i=0;
    vector p= node;
    if (p=NULL)
    {
        printf(" KHONG CO PHAN TU TON TAI ");

    }
    else
    {
        printf("NODE %d\n", i,p->data);
        while (p->next !=NULL)
        {
         p = p->next;
         i++;
         printf("Node %d = %d\n",i,p->data);
        }
        

    }
    
    
}

int main(int argc, char const *argv[])
{

    vector vt= init_linker();
    vt= delete_node(vt);
    output(vt);
   
    return 0;
}
