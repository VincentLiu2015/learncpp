#include <iostream>
#include<cstring>

using namespace std;

class Employee
{
public:
    char m_strName[25];
    int m_nID;
    double m_dWage;
    void SetInfo( const char *strName,int nID,double dWage)
    {
        strncpy(m_strName,strName,25);
        m_nID =nID;
        m_dWage =dWage;
            }
    void Print()
    {

        cout<<"Name:"<<m_strName<<"\nID:"<<m_nID<<"\nWage:$"<<m_dWage<<endl;
            }
};

int main()
{

    Employee cAlex;
    cAlex.SetInfo("Alex",1,25.00);
    cAlex.Print();
    Employee cJoe;
    cJoe.SetInfo("Joe",2,22.25);
    cJoe.Print();

   // return 0;
}
