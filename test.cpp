#include <iostream>
using namespace std;

typedef struct Node
{
    int date;
    struct Node* next;
}Node;

typedef Node* LinkList;

typedef struct operate
{
    char c;
    int k=0;
    int x;
}operate;


int main(int argc, char const *argv[])
{
    int count;
    cin >> count;
    operate* array = new operate[count];

    for (int i = 0; i < count; i++)
    {
        cin >> array[i].c;

        if (array[i].c == 'a')
        
    }
    

    for (int i = 0; i < count; i++)
    {
        
    }

    return 0;
}
