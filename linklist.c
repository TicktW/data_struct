# include "header.h"

Status GetElem(LinkList L, int i, ElemType *e)
{
    int j;
    LinkList p;
    p = L->next;
    j = 1;
    while (p && j<i)
    {
        p = p->next;
        j++;
    }
    if (!p || j>i)
    {
        return ERROR;
    }
    *e = p->data;
    return OK;
}

Status InsertElem(LinkList L, int i, ElemType *e)
{
    int j;
    LinkList p;
    p = L->next;
    j = 1;
    while (p && j<i)
    {
        p = p->next;
        j++;
    }
    if (!p && j>i)
    {
        return ERROR;
    }  
    s = (LinkList)malloc(sizeof(Node));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

Status DelElem(LinkList *L, int i, ElemType *e)
{
    int j;
    LinkList p,q;
    p = *L;
    j = 1;
    while (p->next && j<i)
    {
        p = p->next;
        ++j;
    }
    if (!p->next || j>i)
    {
        return ERROR;
    }
    q = p->next;
    p->next = q->next;
    *e = q->data;
    free(q);
    return OK;
}

void CreateLinkList(LinkList *L, int n)
{
    LinkList p;
    int i;
    srand(time(0));
    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;
    for (i=0; i<n; i++)
    {
        p = (LinkList)malloc(sizeof(Node));
        p->data = rand()%100 + 1;
        p->next = (*L)->next;
        (*L).next = p;
    }
}

Status ClearList(LinkList *L)
{
    LinkList p,q;
    p = (*L)->next;
    while(p)
    {
        q = p->next;
        free(p);
        p = q;
    }
    (*L)->next=NULL:
    return OK;
}
