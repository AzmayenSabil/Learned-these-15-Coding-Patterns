// 1D Array

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int sum = 0;
//     int prefix[n];
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//         prefix[i] = sum;
//     }
//     int query;
//     cin >> query;
//     while (query--)
//     {
//         int left, right;
//         cin >> left >> right; // query is given 0 based indexing
//         if (left == 0)
//             cout << prefix[right] << endl; // Range: [left, right]
//         else
//             cout << prefix[right] - prefix[left - 1] << endl; // Range: [left, right]
//     }

//     return 0;
// }

//----------------------------------------------------------------

// 2D Array

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cout << "Enter number of rows and columns: ";
//     cin >> n >> m;
    
//     int a[n+1][m+1] = {0};  // Initialize a (n+1) x (m+1) array with zeros

//     cout << "Enter elements of the 2D array:\n";
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             cin >> a[i][j];
//         }
//     }

//     // Compute the prefix sum array with an extra row and column at the beginning
//     int prefix[n+1][m+1] = {0};  // Initialize the prefix array with zeroes

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             prefix[i][j] = a[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
//         }
//     }

//     // Query the sum of any submatrix
//     int q;
//     cout << "Enter number of queries: ";
//     cin >> q;
    
//     while (q--) {
//         int x1, y1, x2, y2;
//         cout << "Enter top-left and bottom-right coordinates of the submatrix (1-indexed): ";
//         cin >> x1 >> y1 >> x2 >> y2;

//         int result = prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1];

//         cout << "Sum of the submatrix: " << result << endl;
//     }

//     return 0;
// }
