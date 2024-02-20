#include<iostream>
using namespace std;

int main (){
try{
int age = 14;
if(age >= 18){
cout << "You can visit this site..... :) " << endl ;
}else{
throw(age);
}

}

catch (int Dream){
cout << "Your access is denied...... :( " << endl;
int y=18-Dream;
cout << "You are " << y << " years short...... :(";
}
return 7;
}

