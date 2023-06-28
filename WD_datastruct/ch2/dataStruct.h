// 顺序表的定义
// 静态分配的顺序表
#define MaxSize 50      //定义线性表的最大长度
#define ElemType int
typedef struct 
{
    ElemType data[MaxSize];     //顺序表的元素
    int length;         //顺序表的当前长度
}SqList;                //静态分配数组顺序表的类型定义

// 动态分配的顺序表
#define InitSize 100    //表长度的初始定义
typedef struct 
{
    ElemType *data;     //指示动态分配数组的指针
    int length;         //数组的当前元素个数
}SeqList;               //动态分配数组顺序表的类型定义

