#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> p, pair<int, int> q)
{
    return p.second < q.second;
}
vector<pair<int, int>> acti;

int maxact(vector<pair<int, int>> activity)
{

    int c = 0;
    int t = INT_MIN;
    for (auto ac : activity)
    {
        if (ac.first > t)
        {
            c++;
            t = ac.second;
            acti.push_back({ac.first, t});
        }
    }

    return c;
}
int main()
{
    int n, x, y;
    cin >> n;

    vector<pair<int, int>> activity;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        activity.push_back({x, y});
    }
    sort(activity.begin(), activity.end(), cmp);
    cout << maxact(activity) << endl;
    for (auto it : acti)
        cout << it.first << " " << it.second << endl;
}