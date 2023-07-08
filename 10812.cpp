#include <iostream>
using namespace std;

int main()
{
    int N;  cin >> N;
    int M;  cin >> M;
    int *buket = new int[N+1];
    for(int i = 1; i <= N; i++)
    {   buket[i] = i;   }

    for(int i = 0; i < M; i++)
    {
        int begin, end, mid;
        cin >> begin >> end >> mid;
        int num = end - mid + 1;
        int cnt = end - begin + 1;
        int findex = mid;
        int eindex = findex + num;
        for(int i = 0; i < cnt; i++)
        {
            if(eindex > end)
            {   eindex -= cnt;  }
            int tmp = buket[eindex];
            buket[eindex] = buket[findex];
            buket[findex] = tmp;
            findex = eindex;
            eindex = findex + num;
        }
    }

    for(int i = 1; i <= N; i++)
    {   cout << buket[i] << " ";    }
}