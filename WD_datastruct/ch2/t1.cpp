// 从顺序表中删除具有最小值的元素（假设唯一）并由函数返回被删元素的值，空出的位置由最后一个元素填补，若顺序表为空，则显示出错信息并退出运行
#include <iostream>
#include "dataStruct.h"
using namespace std;

bool t1(SqList &L, ElemType &min){    
    if (L.length <= 0)      //判断输入顺序表的合法性
    {
        cout << "输入的顺序表不合法。" << endl;
        return fasle;
    }
    min = L.data[0];
    int num = 0;
    for (int i = 1; i < L.length; i++)      //遍历顺序表进行比较，如出现小于min的值则将其赋给min
    {
        if (L.data[i] < min)
        {
            min = L.data[i] //更新最小值
            num = i;        //记录删除元素位置
        }
    }
    L.data[i] = L.data[L.length - 1];       //用顺序表表尾元素替换删除元素
    L.length--;     //更新表长
    cout << "数组的最小值为" << min << endl;
    return true;
}
