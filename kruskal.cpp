#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
struct gp
{
    pair<int, int> vertex;
    int weight;
};

bool cmp(gp &m, gp &n)
{
    return m.weight < n.weight;
}
int main()
{
    int n;
    cin >> n;
    gp vr[n];
    cout<<"Before sort the input of graps \n";
    for (int i = 0; i < n; i++)
    {
        int p, q, r;
        cin >> p >> q >> r;
        vr[i].vertex = {p, q};
        vr[i].weight = r;
        cout<<p<<" "<<q<<" "<<r<<endl;
    }
    sort(vr, vr + n, cmp);
    cout<<"After sort the input of graps according to weight \n";
     for (int i = 0; i < n; i++)
     cout<<vr[i].vertex.first<<" "<<vr[i].vertex.second<<" "<<vr[i].weight<<endl;
}