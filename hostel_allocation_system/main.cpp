#include <iostream>
#include <fstream>


using namespace std;
int main()
{   int rollno;

    string name;
string line;
 int count=1;
    fstream file;
    file.open("roomfile.txt",ios::in|ios::out);

while (getline(file, line)){
        count++;}


    cout<<"                                         /Welcome to hostel allocation sytem/"<<endl;
    cout<<"*press 1 for entering new entry*"<<endl;
    cout<<"*press 2 for checking rooms filled*"<<endl;

file.close();

  file.open("roomfile.txt",ios::in|ios::out|ios::app);
    int entry;
    cin>>entry;
    if(entry==1){

    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"enter rollno"<<endl;
    cin>>rollno;
    if(rollno>=11601001&&rollno<=11602001)
    {
    file<<count<<"\t"<<name<<"\t"<<rollno<<endl;
    cout<<"you need to pay rs 4800 for hostel rent and security"<<endl;
    cout<<"press 1 to pay"<<endl;
    int cost;
    cin>>cost;
    if(count<=100){
    if(cost==1){
    cout<<"you are allocated with room no"<<"  "<<count<<"  "<<"and your mess account number is"<<"  "<<count<<"A"<<endl;}
    }
    else{
        cout<<"hostel rooms are full"<<endl;
    }
    }

    else{
        cout<<"sorry! hostel room cannot be allocated"<<endl;
    }
    cout<<"input any integer to exit"<<endl;
    int a;
    cin>>a;
    }

   file.close();
    file.open("roomfile.txt",ios::in);
    if(entry==2){

    while(file.eof()==0){
       file>>count;
       file>>name;
       file>>rollno;
        cout<<count<<"\t"<<name<<"\t"<<rollno<<endl;
    }
    cout<<"input any integer to exit"<<endl;
    int b;
    cin>>b;

    }cout<<"thanks for using this system"<<endl;

    return 0;

}
