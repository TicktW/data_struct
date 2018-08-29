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


int main(int argc, char const *argv[])
{
    printf("hello world \n");
    return 0;
}
