#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    int n;
    cin >> n;
    v.push_back(n);
    for(auto i = 0; i < v.size();i++)
    {
        cout << v[i] << endl;
    }

    vector<string> v2;
    v2.push_back("first string");
    v2.push_back("second string");

    cout << "size is" << v2.size() << endl;
    for(string e : v2)
    {
        cout << e << endl;
    }

    return 0;
}