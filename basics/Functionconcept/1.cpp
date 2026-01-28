// // by using function cponcept find the sum and average 
// #include<iostream>
// using namespace std;
// int sum1(int x,int y,int &total,float &average){
//    total =x+y;
//    average=total/2.0;
// }

// int main(){
//     int a ,b,sum;
//      float avg;
//      cout<<"enter the  1 st number";
//     cin>>a;
//     cout<<"enter the 2 nd number";
//     cin>>b;
//     sum1(a,b,sum,avg);
    
    
//     cout<<"sum of a and b is "<<sum;
//     cout<<"avg of a and b "<<avg;




// }


// 🎓 Problem: Student Marks Updater

// You have to:

// Input a student’s marks in 3 subjects.

// Write a function to find the total marks.

// Write another function to find the average marks.

// Show both results in main().
// → Use pass by reference so that functions modify the original variables directly.

#include<iostream>
using namespace std;
 void calc(int m,int s,int p,int &total)
 {
       total=m+s+p;
 }
void aver( int total,float &average) // address changes the original declare value of total and average
{
    average=total/3.0;
}

int main()
{
  int m,s,p,total;
  float average;
  cout<<"enter the marks of three subject";
  cin>>m>>s>>p;
  calc(m,s,p,total);
  aver(total,average); 
  cout<<"total marks of 3 student is "<<total<<endl;
  cout<<"average marks of 3 student is "<<average;

}