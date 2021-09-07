#include <iostream>
#include <vector>
using namespace std;

int fill_row(vector<vector<char>> &grid, int i, int j, int c)
{
    int count = 0;
    while (i < j)
    {
        if (grid[c][i] != '.' && grid[c][j] == '.')
        {
            grid[c][j] = grid[c][i];
            count++;
        }
        else if (grid[c][j] != '.' && grid[c][i] == '.')
        {
            grid[c][i] = grid[c][j];
            count++;
        }
        ++i;
        --j;
    }
    return count;
}

int fill_col(vector<vector<char>> &grid, int i, int j, int c)
{
    int count = 0;
    while (i < j)
    {
        if (grid[i][c] == '.' && grid[j][c] != '.')
        {
            grid[i][c] = grid[j][c];
            count++;
        }
        else if (grid[j][c] == '.' && grid[i][c] != '.')
        {
            grid[j][c] = grid[i][c];
            count++;
        }
        ++i;
        --j;
    }
    return count;
}

int row_helper(vector<vector<char>> &grid)
{
    int n = grid.size(), m = grid[0].size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int s = 0, e = 0;
        while (s < m)
        {
            if (grid[i][s] != '#')
            {
                e = s + 1;
                while (e <= m)
                {
                    if (e == m || grid[i][e] == '#')
                    {
                        count += fill_row(grid, s, e - 1, i);
                        s = e;
                        break;
                    }
                    e++;
                }
            }
            s++;
        }
    }
    return count;
}

int col_helper(vector<vector<char>> &grid)
{
    int count = 0;
    int n = grid.size(), m = grid[0].size();
    for (int i = 0; i < m; i++)
    {
        int s = 0, e = 0;
        while (s < n)
        {
            if (grid[s][i] != '#')
            {
                e = s + 1;
                while (e <= n)
                {
                    if (e == n || grid[e][i] == '#')
                    {
                        count += fill_col(grid, s, e - 1, i);
                        s = e;
                        break;
                    }
                    e++;
                }
            }
            s++;
        }
    }
    return count;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (vector<char> &row : grid)
    {
        for (char &col : row)
        {
            cin >> col;
        }
    }

    int count = 0;
    int temp;
    bool status = true;
    while (true)
    {
        temp = 0;
        if (status)
            temp = row_helper(grid);
        else
            temp = col_helper(grid);

        if (temp == 0)
            break;
        status = !status;
        count += temp;
    }

    cout << count;
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < m; j++)
            cout << grid[i][j];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
    return 0;
}