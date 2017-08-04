#include <iostream>
#include <vector>
#include <string>

using namespace std;
//this project is saved object
class Person
{
public:
    Person(string name, int age)
    {
        this->mName = name;
        this->mAge = age;
    }

public:
    string mName;
    int mAge;
};

void test01()
{
    vector<Person> v;

    v.push_back(Person("person1", 10));
    v.push_back(Person("person2", 20));
    v.push_back(Person("person3", 30));
    v.push_back(Person("person4", 40));
    v.push_back(Person("person5", 50));

    for(vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
    {

        cout << "name:" << (*it).mName << " " << "age:" << (*it).mAge << endl;
        //cout << "name:" << it->mName << " " << "age:" << it->mAge << endl;
    }
}
void test02()
{
    vector<Person*> v;

    Person person1("person1", 10);
    Person person2("person2", 20);
    Person person3("person3", 30);
    Person person4("person4", 40);
    Person person5("person5", 50);

    v.push_back(&person1);
    v.push_back(&person2);
    v.push_back(&person3);
    v.push_back(&person4);
    v.push_back(&person5);

    for(vector<Person*>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << "name:" << (*it)->mName << " " << "age:" << (*it)->mAge << endl;
    }
}

void test03()
{
    vector<vector<int>> v;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    for(int i = 0; i < 5; i++)
    {
        v1.push_back(10 + i);
        v2.push_back(20 + i);
        v3.push_back(30 + i);
    }
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    for(vector<vector<int>>::iterator it = v.begin(); it != v.end(); ++it)
    {
        for(vector<int>::iterator tt = it->begin(); tt != it->end(); ++tt)
        {
            cout << *tt << " ";
        }
        cout << endl;
    }
}

int main(void)
{
    //test01();
    //test02();
    test03();
    return 0;
}
