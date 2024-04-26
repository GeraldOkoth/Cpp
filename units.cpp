#include<iostream>
using namespace std;
float area(float r)
{
 return(3.14 * r * r);
}
float area(float b,float h)
{
 return(0.5 * b * h);
}
/*float area(float l,float b)
{
 return (l * b);
}*/
int main()
{
 float b,h,r,l;
 int num;
 do
 {
 cout<<"\n\n *****Program Menu***** \n";
 cout<<"\n 1. Area of Circle";
 cout<<"\n 2. Area of Triangle";
 cout<<"\n 3. Area of Rectangle";
 cout<<"\n 4. Exit the Program";
 cout<<"\n\n Please Enter Your Choice : ";
 cin>>num;
 switch(num)
 {
 case 1:
 {
 cout<<"\n Enter the Radius of Circle : ";
 cin>>r;
 cout<<"\n Area of Circle : "<<area(r);
 break;
 }
 case 2:
 {
 cout<<"\n Enter the Base & Height of Triangle : ";
 cin>>b>>h;
 cout<<"\n Area of Triangle : "<<area(b,h);
 break;
 }
 case 3:
 {
 cout<<"\n Enter the Length & Bredth of Rectangle : ";
 cin>>l>>b;
 cout<<"\n Area of Rectangle : "<<area(l,b);
 break;
 }
 case 4:

 exit(0);
 default:
 cout<<"\n Invalid Choice...Enter numbers 1 to 4 to continue ";
 }
 }while(num!=4);
 return 0;
}
