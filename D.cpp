#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    int n, m, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        vector<list<int>> hash;
        int val;
        scanf("%d %d", &m, &c);
        for (int j = 0; j < m; j++)
        {
            list<int> aux;
            hash.push_back(aux);
        }

        for (int j = 0; j < c; j++)
        {
            scanf("%d", &val);
            hash[val % m].push_back(val);
        }
        for (int j = 0; j < m; j++)
        {
            printf("%d ->", j);
            int tam = hash[j].size();
            if (tam)
                for (auto i = hash[j].begin(); i != hash[j].end(); i++)
                {
                    cout << ' ' << *i << " ->";
                }

            printf(" \\\n");
        }
        if (i < n - 1)
        {
            cout << endl;
        }
    }

    return 0;
}