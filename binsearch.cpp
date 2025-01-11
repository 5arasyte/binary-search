// binsearch.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <bits/stdc++.h>

using namespace std;

int bin (vector <int> a, int s)
{
    int left = 0, right = a.size() - 1;
    while (left != right)
    {
        int mid = left + right / 2;
        if (s > a[mid])
        {
            left = mid;
            continue;
        }
        else if (s < a[mid])
        {
            right = mid;
            continue;
        }
        return mid;
    }
    return -1;
}

int main()
{
    int n, s;
    cin >> n >> s;
    vector <int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << bin(a, s);
}