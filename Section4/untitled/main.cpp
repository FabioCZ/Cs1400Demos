#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);

//    int n;
//    cin >> n;
//    v.push_back(n);
    cout << "size " << v.size() << endl;
    for(auto i = 0; i < v.size();i++)
    {
        cout << v[i] << endl;
    }
    v.clear();
    cout << "size " << v.size() << endl << endl;

    vector<string> v2(5);
    v2.push_back("first string");
    v2.push_back("another string");
    v2.push_back("yet again");

    for(string s : v2)
    {
        cout << s << endl;
    }
    return 0;
}