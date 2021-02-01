// vector manipulation
// chris grimes
#include <iostream>
#include <vector>

using std::endl; using std::cout; using std::cin;using std::vector;

double check(vector<double> &v, double num){
double output= -1.0;
for(vector<double>:: iterator p=v.begin();p!= v.end();++p){
if(*p== num)
output= *p;
}
return output;
};

void addnum(vector<double> &v, double num){
if(check(v,num)== -1.0){
v.push_back(num);
}
};

void output(vector <double> &v){
cout<< "The numbers in the vector are:";
for(vector<double>:: iterator p=v.begin();p!= v.end(); ++p){
cout<< *p << " ";
}
cout<<endl; 
};

void remove(vector<double> &v, double num){
if(check(v,num)!=-1){
for(vector<double>::iterator p= v.begin(); p!=v.end(); ++p){
if(*p==num){
v.erase(p);
}
}
}
}

vector <double> usr_vec;
char usr_response;
double usr_num;

int main(){
do{
cout<< "Please enter the operation you wish to perform on said vector: [a] add a number, [r] remove a number, [q] quit program" <<endl;
cin>> usr_response;

switch (usr_response){
case 'a':
	cout<< "Please enter the number you wish to add to said vector:"<<endl;
	cin>> usr_num;
	addnum(usr_vec, usr_num);
	output(usr_vec);
	break;
case 'r':
	cout<<"Please enter the number you wish to remove from said vector:"<<endl;
	cin>> usr_num;
	remove(usr_vec, usr_num);
	output(usr_vec);
	break;
case 'q':
	exit(0);
	break;
default:
	break;	
}
}while(usr_response != 'q');
}

