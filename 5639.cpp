#include <iostream>

using namespace std;

int arr[10000];

void Node(int first, int last)
{
    int tpindex = first + 1;
    if(first == last) // ==
        return;
    else if(first == last - 1)
    {
        std::cout << arr[first] << endl;
        return;
    }
    else
    {
        for(int i = tpindex; i < last; i++)
        {
            if(arr[first] < arr[i])
            {
                tpindex = i;
                break;
            }
        }
    }
    Node(first + 1, tpindex);
    Node(tpindex, last);
    std::cout << arr[first] << endl;
}

int main()
{
    int N = 0;
    while(cin >> arr[N++]);
    Node(0, N-1);
}