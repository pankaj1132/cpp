#include <bits/stdc++.h>
using namespace std;

void findlis(int *a, vector<int> &lis, vector<int> &v, int len, int index)
{
    // base case
    if (len == 0)
    {
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    if (v.size() == 0)
    {
        v.push_back(a[index]);
        findlis(a, lis, v, len - 1, index - 1);
    }
    else
    {
        if (v[v.size() - 1] > a[index] and lis[index] == len)
        {
            v.push_back(a[index]);
            findlis(a, lis, v, len - 1, index - 1);
        }
        else
        {
            findlis(a, lis, v, len, index - 1);
        }
    }
}
void findLISAll(int *a, vector<int> &lis, vector<int> &v, int len, int indx) {
	// base case
	if (len == 0) {
		for (int i = v.size() - 1; i >= 0; --i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		return;
	}
	if (indx < 0 || len < 0) {
		return;
	}

	// recursive case
	if (v.size() == 0) {
		v.push_back(a[indx]);
		findLISAll(a, lis, v, len - 1, indx - 1);
		v.pop_back();
	}
	else {
		if (v[v.size() - 1] > a[indx] and lis[indx] == len) {
			v.push_back(a[indx]);
			findLISAll(a, lis, v, len - 1, indx - 1);
			v.pop_back();
		}

		findLISAll(a, lis, v, len, indx - 1);
	}
}

int main()
{
    int a[] = {10, 9, 3, 5, 4, 11, 7, 18};
    int n = sizeof(a) / sizeof(int);
    vector<int> ans(n + 1, 1);
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] > a[j])
            {
                ans[i] = max(ans[i], ans[j] + 1);
            }
        }
    }
    int val = 0, index = -1;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << ' ';
        if (ans[i] > val)
        {
            val = ans[i];
            index = i;
        }
    }
    cout << endl;
    cout << "lis :" << val << endl;
    cout << "lis index :" << index << endl;
    vector<int> v;
    findlis(a, ans, v, val, index);
    vector<int>list;
    findLISAll(a, list, v, val, index);

    return 0;
}