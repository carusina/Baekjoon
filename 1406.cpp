#include <iostream>
#include <list>
using namespace std;

int main()
{
    string input; cin >> input;
    int N;  cin >> N;
    list<char> str(input.begin(), input.end());
    list<char>::iterator where_cursor = str.end();
    
    while(N--)
    {
        char command;   cin >> command;

        if(command == 'L')
        {
            if(where_cursor != str.begin())
                where_cursor--;
        }
        else if(command == 'D')
        {
            if(where_cursor != str.end())
                where_cursor++;
        }
        else if(command == 'B')
        {
            if(where_cursor != str.begin())
            {
                where_cursor--;
                where_cursor = str.erase(where_cursor); //erase함수는 지운 원소의 다음을 가르키는 이터레이터 반환
            }
        }
        else if(command == 'P')
        {
            char ch;    cin >> ch;
            str.insert(where_cursor, ch);
        }
    }
    for(where_cursor = str.begin(); where_cursor != str.end(); where_cursor++)
        cout << *where_cursor;
    cout << endl;
}