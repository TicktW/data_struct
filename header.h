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

// link list
typedef struct Node{
    ElemType data;
    struct Node * next; 
} Node;

typedef struct Node * LinkList;
// end of link list