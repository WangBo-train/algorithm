#include <iostream>
#include <string>

using namespace std;

//1:string init
void test01()
{
    string s1;
    string s2 = "hello meizi";
    string s3(10, 'a');

    for(int i = 0; i < s2.size(); i++)
    {
        cout << s2[i] << " ";
    }
    cout << endl;

    for(string::iterator it = s3.begin(); it != s3.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

}
//2:string assign
void test02()
{
    string  s1;
    s1 = "hello meizi";
    cout << "s1 is " << s1 << endl;

    string s2 = "toilandmoil";
    s1 = s2;
    cout << "s1 is " << s1 << endl;

    s1 = 'a';
    cout << "s1 is " << s1 << endl;

    s1.assign("bob", 2);
    cout << "s1 is " << s1 << endl;

    s1.assign(s2, 0, 4);
    cout << "s1 is " << s1 << endl;
}

//3:string get
void test03()
{
    string s1;
    string s2 = "hello meizi";
    string s3(10, 'a');

    for(int i = 0; i < s2.size(); i++)
    {
        cout << s2.at(i) << "-";
    }
    cout << endl;
}

//4:string append
void test04()
{
    string s1 = "mei";
    s1 += "zi";
    cout << "s1 is " << s1 << endl;

    string s2 = "very";
    s1 += s2;
    cout << "s1 is " << s1 << endl;

    s1.append(5, 'o');
    cout << "s1 is " << s1 << endl;

}

//5:string find
void test05()
{
    int pos = -1;

    string s1 = "hello meizi is very beauiful";
    pos = s1.find("ll");
    cout << "pos is " << pos << endl;

    //pos = s1.rfind("ll");
    //cout << "pos is " << pos << endl;

    s1.replace(6, 5 , "aaaaa");
    cout << "s1 is " << s1 << endl;
}

//6:string compare
void test06()
{
//     string s1 = "hello meizi";
//     string s2 = "hello world";
     string s1 = "hello";
     string s2 = "hello";
     if(s1.compare(s2) == 0)
     {
         cout << "s1 == s2" << endl;
     }
     else if(s1.compare(s2) == -1)
     {
         cout << "s1 < s2" << endl;
     }
     else if(s1.compare(s2) == 1)
     {
         cout << "s1 > s2" << endl;
     }
}

//7:get child string from parent string
void test07()
{
    string s1 = "hello meizi is very beauiful";
    string ret = s1.substr(6, 5);
    cout << "ret is " << ret << endl;
}

//8:string insert and delete
void test08()
{
    string s1 = "meizi";
    s1.insert(5, "good");
    cout << "s1 is " << s1 << endl;
    s1.insert(0, "a");
    cout << "s1 is " << s1 << endl;

    s1.erase(0, 1);
    cout << "s1 is " << s1 << endl;
}

int main(void)
{
    //test01();
    //test02();
    //test03();
    //test04();
    //test05();
    //test06();
    //test07();
    test08();

    return 0;
}
