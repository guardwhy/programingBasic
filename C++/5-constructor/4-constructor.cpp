#include <iostream>

using namespace std;
/**
 * ����ṩ���вι��캯������ô�������Ͳ��ṩĬ�Ϲ��캯���ˣ�������Ȼ�ṩ�������캯��.
 * ����ṩ�˿������캯������ô�������Ͳ��ṩ ������ͨ���캯����
 */
class Person
{
public:

    Person()
    {
        cout << "Person��Ĭ�Ϲ��캯������" << endl;
    }

    Person(int a)
    {
        cout << "Person���вι��캯������" << endl;
    }

    //��������  //ֵ���ݵı��� ���ǵ��� �������캯��
    Person(const Person &p)
    {
        cout << "Person�Ŀ������캯������" << endl;
        m_Age = p.m_Age; //Ĭ�Ͽ������캯��  д�����д���
    }

    ~Person()
    {
        cout << "Person��������������" << endl;
    }

    int m_Age;
};

void test01()
{
    Person p1;
    p1.m_Age = 100;

    Person p2 = p1; //��ʽת����    Person p2 = Person (p1);

    cout << "p2������Ϊ�� " << p2.m_Age << endl;

}
int main() {
    test01();
    cout << "Hello, World!" << endl;
    return 0;
}