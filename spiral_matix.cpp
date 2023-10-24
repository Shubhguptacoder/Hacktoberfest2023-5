#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(int matrix[3][3])
{
    vector<int> ans;
    int row = 3;
    int col = 3;

    int total = row * col;

    int startrow = 0;
    int endrow = row - 1;
    int startcol = 0;
    int endcol = col - 1;

    int count = 0;

    while (count < total)
    {
        // print start row
        for (int i = startrow; count < total && i <= endcol; i++)
        {
            ans.push_back(matrix[startrow][i]);
            count++;
        }
        startrow++;

        // print endcol
        for (int i = startrow; count < total && i <= endrow; i++)
        {
            ans.push_back(matrix[i][endcol]);
            count++;
        }
        endcol--;

        // print endrow
        for (int i = endcol; count < total && i >= startcol; i--)
        {
            ans.push_back(matrix[endrow][i]);
            count++;
        }
        endrow--;

        // print startcol]
        for (int i = endrow; count < total && i >= startrow; i--)
        {
            ans.push_back(matrix[i][startcol]);
            count++;
        }
        startcol++;
    }
    return ans;
}

int main()
{
    vector<int> a;
    int arr[3][3];

    cout << "enter the elemnets in an array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    a = spiralOrder(arr);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
