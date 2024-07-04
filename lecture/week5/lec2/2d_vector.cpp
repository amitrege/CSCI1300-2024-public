#include <iostream>
#include <vector>

using namespace std;

int main() {

    // You need to "create space" in an empty vector
    
    vector<int> v1 = {1, 2, 3};
    
    vector<vector<int>> v2 = {{1, 2}, {3, 4}};
    // Strictly speaking, there is no such thing as a 2d vector
    // v2 is actually a vector of vectors
                           
    // cout << v2 << endl; // ERROR: Cannot directly print
                              
    for(int i = 0; i < v2.size(); i++) {
        for(int j = 0; j < v2[0].size(); j++) {
            cout << v2[i][j] << endl;
        }
    }
    
    
    
    cout << endl;
    
    
    
    // Since v2 is a vector of vectors
    // We can treat v2[0] or v2[1] as a standalone vector 
    
    // Print the second row of v2
    for(int i = 0; i < v2[1].size(); i++) {
        cout << v2[1][i] << endl; // Note the indexing
    }

    
    
    
    
    // Since each row of v2 is a standalone vector
    // We can add or remove elements from each of them
    
    // Add to first row
    v2[0].push_back(6);
    v2[0].push_back(7);
    
    // Now v2[0].size() == 4 and v2[1].size() == 2
    
    
    
    
    
    cout << endl;
    // Can potentially create rows with different number of elements
    vector<vector<int>> v3 = {{1}, {2, 3, 4}};
    
    // Print v3
    for(int i = 0; i < v3.size(); i++) {
        for(int j = 0; j < v3[i].size(); j++) {
           cout << v3[i][j] << endl; 
        }
    }
    // Notice the stopping condition for the inner loop
    // Since v3[0] and v3[1] have different sizes, we need to make sure
    // the stopping condition depends on which row you're in (outer loop)
}