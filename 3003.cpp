#include <iostream>
using namespace std;

int main()
{
    int bking = 1, bqueen = 1, brook = 2, bbishop = 2, bknight = 2, bpawn = 8;
    int chess[6] = {1, 1, 2, 2, 2,  8};
    int need_chess[6];

    for(int i = 0; i < 6; i++)
    {
        cin >> need_chess[i];
        if(need_chess[i] != chess[i])
            need_chess[i] = chess[i] - need_chess[i];
        else
            need_chess[i] = 0;
    }
    
    for(int i = 0; i < 6; i++)
        cout << need_chess[i] << " ";
    cout << endl;
}