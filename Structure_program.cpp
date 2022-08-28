#include <iostream>
using namespace std;
struct Area
{
    int width;
    float length;
};
int main()
{
   Area a1;
a1.width=12;
a1.length=21;
cout<<"area of the room  1 :"<<a1.width*a1.length<<endl;

   Area a2;
a2.width=34;
cout<<"area of the room 2 :"<<a2.width+a2.length<<endl;

 Area a3;
a3.width=55;
a3.length=26;
cout<<"area of the room 3 :"<<a3.width-a3.length<<endl;

 Area a4;
a4.width=55;
a4. length=23;
cout<<"area of the room 4 :"<<a4.width/a4.length;
}
