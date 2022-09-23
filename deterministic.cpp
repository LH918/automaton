#include <iostream>
#define MAX 100
#define ERROR -1
#define OK 1
using namespace std;

typedef int STATA;

typedef struct Node
{
    char data;
    struct Node *next;
} Node, *State;
class DFA
{
private:
    State K[MAX];      //所有的状态集合，每个状态可能只含有一个元素，也可能是一个集合
    char Segma[MAX];   //符号表集合
    State f[MAX][MAX]; //映射函数
    State S;           //唯一初态
    State Z[MAX];      //可接受状态集合
    int count_k = 0, count_segma = 0, count_z = 0;

public:
    STATA setK(State K[]);
    STATA setSegma(char Segma);
    STATA setF(State K[]);
    STATA setS(State S);
    STATA set(State Z);
};
int main()
{
    cout<<"hello,world!"<<endl;
    cout<<"Do"<<endl;
}