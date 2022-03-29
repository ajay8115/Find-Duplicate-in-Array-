// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &a)
    {
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            int ind = abs(a[i]) - 1;

            a[ind] *= -1;

            if (a[ind] > 0)
            {
                return abs(a[i]);
            }
        }

        return -1;
    }
};
