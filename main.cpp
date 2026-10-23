#include <iostream>
using namespace std;
 
template<class T1, class T2>
class Pair
{
    T1 a;
    T2 b;
public:
    Pair(T1 first, T2 second);
    void show() const;
    T1 getFirst() const;
    T2 getSecond() const;
    void copyFrom(const Pair<T1, T2>& other);
    void clear();
};

template<class T1, class T2>
Pair<T1, T2>::Pair(T1 first, T2 second)
{
    a = first;
    b = second;
}
 
template<class T1, class T2>
void Pair<T1, T2>::show() const
{
    cout << a << "\t" << b << endl;
}
 
template<class T1, class T2>
T1 Pair<T1, T2>::getFirst() const
{
    return a;
}
 
template<class T1, class T2>
T2 Pair<T1, T2>::getSecond() const
{
    return b;
}
 
template<class T1, class T2>
void Pair<T1, T2>::copyFrom(const Pair<T1, T2>& other)
{
    a = other.a;
    b = other.b;
}
 
template<class T1, class T2>
void Pair<T1, T2>::clear()
{
    a = T1();
    b = T2();
}
 
int main()
{
    Pair<string, int> student("Maxim", 17);
    Pair<string, double> product("Phone", 2323.50);
    Pair<int, double> group(23, 10.3);
    student.show();
    cout << student.getFirst() << endl;
    cout << student.getSecond() << endl;
    Pair<string, int> student2("Zlata", 17);
    student2.show();
    student2.copyFrom(student);
    student.clear();
 
    return 0;
}