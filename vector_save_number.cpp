#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

//1:while
#if 0
    vector<int>::iterator beg = v.begin();
    vector<int>::iterator end = v.end();

    while (beg != end) {
        cout << *beg << " ";
        ++beg;
    }
    cout << endl;
#endif

//2:for
#if 0
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
#endif

//3:for_each
#if 0
    for_each(v.begin(), v.end(), myPrint);

#endif

//4:auto
#if 1
    for(auto value : v)
    {
        cout << value << " ";
    }
    cout << endl;
#endif
}

int main(void)
{
    //cout << "Hello World!" << endl;

    test01();
    return 0;
}
