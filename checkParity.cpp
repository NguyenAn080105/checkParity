#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    string st[6];
    for(int i = 0; i < 6; i++)
    {
        getline(cin, st[i]);
    }
    for(int i = 0; i < 6; i++)
    {
        int even = 0;
        for(int j = 0; j < st[i].size(); j++)
        {
            if(st[i][j] == '1') even++;
        }
        if(even % 2 == 0)  cout << "Row " << i << " correct\n";
        else {
            cout << "Row " << i << " incorrect\n";
            y = i;
        }
    }
    cout << "\n";
    int size = st[0].size(); 
    for(int i = 0; i < size; i++)
    {
        int even = 0;
        for(int j = 0; j < 6; j++)
        {
            if(st[j][i] == '1') even++;
        }
        if(even % 2 == 0)  cout << "Collum " << i << " correct\n";
        else {
            cout << "Collum " << i << " incorrect\n";
            x = i;
        }
    }
    if(x > 7) x-=1;
    cout << "{" << x << "," << y << "}";
    return 0;
}