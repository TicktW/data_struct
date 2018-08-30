# include <stdio.h>
# define MAXSIZE 20  // the size of mem init
# define OK 1  
# define ERROR 0 
# define TRUE 1 
# define FALSE 0

typedef int Status;  // function type
typedef int ElemType;
typedef struct SqList{
    ElemType data[MAXSIZE];
    int length;
}SqList;

Status GetElem(SqList L, int i, ElemType *e){
    // i in [1,length]  and length of SqList >0
    if (L.length <= 0 || i < 1 || i > L.length)
    {
        return ERROR;
    }
    // get the val of 
    *e = L.data[i-1];
    return OK;
}

Status InsertElem(SqList *L, int i, ElemType e)
{
    int k;
    // if the data is full , throe err
    if (L->length >= MAXSIZE)
    {
        return ERROR;
    }
    // if the i not correct , throw err ; i in 1,L.length
    if (i<1 || i>L->length)
    {
        return ERROR;
    }
    // for elem from i to end , move to the next postion
    for (k=L->length-1; k>=i-1;k--)
    {
        L->data[k+1] = L->data[k];
    }
    L->data[i-1] = e;
    L->length++;
    return OK;
}

Status DelElem(SqList *L, int i, ElemType *e)
{
    int k;
    // i >=1  and i <= L.length
    // L.length > 0
    if (i<1 || i > L->length || L->length <= 0)
    {
        return ERROR;
    }
    *e = L->data[i-1];
    for (k=i-1; k<=L->length-1; k++)
    {
        L->data[k] = L->data[k+1];
    }
    L->length--;
    return OK;
}

int main(int argc, char const *argv[])
{
    SqList* list;

    return 0;
}
