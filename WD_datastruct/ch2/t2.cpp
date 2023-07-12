#include "dataStruct.h"

// t2: 设计一个高效算法，将顺序表 L 的所有元素逆置，要求算法的空间复杂度为 O(1)。

bool t2(SqList &L){
    // 判断合法性
    if (L.length <= 0)
    {
        cout << "L is empty or the length of L is wrong." << endl;
        return false;
    }
    if (L.length == 1)
    {
        return true;
    }
    int a = 0;
    for (int i = 0; i < L.length / 2; i++)
    {
        a = L.data[i];
        L.data[i] = L.data[L.length - 1 - i];
        L.data[L.length - 1 - i] = a;
    }
    return true;
}

int main(){
    SqList L = newSqL(10);
    t2(L);
    for (int i = 0; i < L.length; i++)
    {
        cout << L.data[i] << " ";
    }
    cout << endl;
    return 0;
}