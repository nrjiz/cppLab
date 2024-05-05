//You are given  integers.Sort the  integers and print the sorted order.
//Store the  integers in a vector.Vectors are sequence containers representing arrays that can change in size.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
     
    int n;
    cin >> n;

    vector<int> v;

    // Input integers into the vector using push_back()
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    // Sort the vector
    sort(v.begin(), v.end());
    

    // Output the sorted integers
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;

}
