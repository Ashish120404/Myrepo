// #include <iostream>
// #include <string>
// using namespace std;
// class student
// {
//     int mark[5],i,s=0;
//     float p;
//     string name;

// public:
//     student()
//     {
//         cout<<"Enter name : ";
//         getline(cin,name);
//         for ( i = 0; i < 5; i++)
//         {
//             do{
//             cout<<"Enter marks of "<<i+1<<" sub : ";
//             cin>>mark[i];
//             }while(mark[i]>100 || mark[i]<0);
//         }

//         for ( i = 0; i < 5; i++){
//             cout<<"Sub "<<i+1<<" : "<<mark[i];
//             s+=mark[i];
//         }
//         p=s/5.0;
//         cout << "Percentage : " << p << endl;
//         if (p >= 90)
//             cout << "grade : A" << endl;
//         else if (p >= 80)
//             cout << "grade : B" << endl;
//         else if (p >= 70)
//             cout << "grade : B+" << endl;
//         else if (p >= 60)
//             cout << "grade : c" << endl;
//         else if (p >= 50)
//             cout << "grade : D" << endl;
//         else if (p >= 20)
//             cout << "grade : F" << endl;
//         else
//             cout << "Rehne de bhai nhi hoga terese ;) " << endl;
//     }
// };

// int main()
// {
//     system("cls");
//     student s1;
//     return 0;
// }
// // //--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;
// #define n 10
// int i;
// class demo{
//     public:
//     demo(){
//         for (i = 0; i < n; i++)
//         {
//             cout<<"Info lei"<<endl;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout<<"Info dedi "<<endl;
//         }

//     }
// };
// int main()
// {
//     system("cls");
//     cout<<"Enter n : ";
//     demo d1[n];
//     // book b1={"kali billi","dusri billi",69};
//     // b1.author="mwow0";
//     // cout<<"Author : "<< b1.author<<"\nTitle : "<<b1.title<<"\nPrice : "<<b1.price;
//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// #include <string>
// #define n 10
// using namespace std;
// class demo
// {
//     string s;

// public:
//     int marks;
//     void get()
//     {
//         cout<<"ENter name : ";
//         cin>>s;
//         cout<<"Enter marks : ";
//         cin>>marks;
//     }
//     void show()
//     {
//         cout << n << endl;
//         cout << marks << endl;
//     }
// };

// int main()
// {
//     system("cls");
//     demo d[10];
//     for (int i = 0; i < n; i++)
//     {
//         d[i].get();
//     }
//     cout<<"------------------------------------------------------------------"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         if (d[i].marks>30)
//         {
//         d[i].show();
//         }

//     }

//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     string *a=new string[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Naam daal : ";
//         cin>>a[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     delete a;
//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;
// class base
// {
// public:
//     virtual void show(){
//         cout << "I am in show" << endl;
//     }
// };
// class derived1:virtual public base{
//     public:
//     void show(){
//         cout<<"I am in derived 1"<<endl;
//     }
// };
// class derived2:virtual public base{
//     public:
//     void show(){
//         cout<<"I am in derived 2"<<endl;
//     }
// };
// int main()
// {
//     system("cls");
//     base *s;
//     derived1 d1;
//     derived2 d2;

//     s=&d1;
//     s->show();

//     s=&d2;
//     s->show();

//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;
// class vehical{
//     public:
//     virtual void show()=0;
// };
// class meow:public vehical{
//     public:
//     void show(){
//         cout<<"In meow meow "<<endl;
//     }
// };
// class bark:public vehical{
//     public:
//     void show(){
//         cout<<"In bark bark "<<endl;
//     }
// };
// int main()
// {
//     system("cls");
//     vehical *v;
//     meow m;
//     bark b;
//     v=&m;
//     v->show();
//     v=&b;
//     v->show();
//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;
// class emp
// {
// public:
//     virtual void calculateSalary()
//     {
//         cout << "General Employee Salary." << endl;
//     }
// };
// class Permanent : public emp
// {
// public:
//     void calculateSalary()
//     {
//         cout << "Salary for Permanent Employee." << endl;
//     }
// };
// class Contract : public emp
// {
// public:
//     void calculateSalary()
//     {
//         cout << "Salary for Contract Employee." << endl;
//     }
// };
// int main()
// {
//     system("cls");
//     emp *e;
//     Permanent p;
//     Contract c;
//     e = &p;
//     e->calculateSalary();
//     e = &c;
//     e->calculateSalary();
//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;
// class rect{
//     const int len;
//     int wid;
//     public:
//     rect(int i,int w):len(i),wid(w){};
//     void area()const{
//         cout<<"ARea "<<len*wid<<endl;
//     }
// };
// int main()
// {
//     system("cls");
//     rect rec(10,7);
//     rec.area();
//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;

// class car
// {
//     static int count;

// public:
//     car() { count++; }
//     static void getcount()
//     {
//         cout << "No of obj " << count << endl;
//     }
// };
// int car::count = 0; 
// int main()
// {
//     car c1, c2, c3;
//     car::getcount();
//     car c4,c5;
//     car::getcount();
//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;
// class demo{
//     public:
//     void show(){
//         cout<<"Hello "<<endl;
//     }
// };
// class demo2{
//     public:
//     void show(){
//         cout<<"Hello "<<endl;
//     }
// };
// class demo3:public demo,public  demo2{
//     public:
//     void show(){
//         demo::show();
//     }
// };
// int main()
// {
//     system("cls");
//     demo3 d;
//     d.show();
//     d.demo::show();
//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;
// class complex{
//     int real,img;
//     public:
//     complex(int r=0,int i=0){
//         real=r;
//         img=i;
//     }
//     complex operator++(){
//         real++;img++;
//         return *this;
//     }
//     complex operator&(complex c1){
//         return complex(real + c1.real,img+ c1.img);
//     }
//     void display(){
//         cout<<real<<" + "<<img<<"i "<<endl;
//     }
// };
// int main()
// {
//     system("cls");
//     complex c1(10,20),c2(30,40),c3;
//     ++c3;
//     c3.display();
//     c3=c1&c2;
//     c3.display();
//     return 0;
// }
//--------------------------------------------------------------------------;
#include <iostream> 
using namespace std; 
int main() { 
int a, b; 
cout << "Enter a : "; 
cin >> a; 
cout << "Enter b : "; 
cin >> b; 
try { 
if (b == 0) 
throw "error!"; 
cout << "Result: " << a / b << endl; 
} catch (const char *e) { 
cout << "Exception: " << e << endl; 
} 
return 0; 
} 