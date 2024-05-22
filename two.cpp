/*#include<iostream>
using namespace std;
int main(){
    int x,y, sum;
    cout<<"enter first number:"<<endl;
    cin>>x;
    cout<<"enter second number:"<<endl;
    cin>>y;
    sum=x+y;
    cout<<"the sum of two number is: "<<sum;
    return 0;
}*/
/*#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<setw(12)<<"Deerwalk"<<endl<<setw(12)<<"Institute of"<<endl<<setw(12)<<"Technology";
    cout<<left;
    cout<<setw(12)<<"Deerwalk"<<endl<<setw(12)<<"Institute of"<<endl<<setw(12)<<"Technology";
    return 0;
}*/

//set precision
/*#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float f=3.141789;
    cout<<setprecision(2)<<f<<endl;
    cout<<setprecision(3)<<f<<endl;
    cout<<setprecision(4)<<f;
    return 0;
}*/
//C style of declaring
/*#include<iostream>
using namespace std;
int main(){
    char str[20];
    cout<<"enter string:";
    //cin>>str;
    cin.get(str, 20, '#');
    cout<<str;
    return 0;
}*/
//cpp style
/*#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter your name:";
    getline(cin, name, '#');
    //cin>>name;
    cout<<name;
}*/

