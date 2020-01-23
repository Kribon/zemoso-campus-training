#include <iostream>
using namespace std;

int main() {
  double units;
	cout<<"Enter number of units consumed"<<endl;
	cin>> units;  //storing input value given by user in units

	if(units<0) {
	  cout<<"Please enter a positive number"<<endl;
	} else {
	    double cost;
    	if(units>250) {
    	    cost=1.5*units;
    	} else if(units>150) {
    	    cost=50*0.5+100*0.75+(units-150)*1.20;
    	} else if(units>100) {
    	    cost=50*0.5+(units-100)*0.75;
    	} else if(units>50) {
    	    cost=50*0.5+(units-50)*0.75;
    	} else {
    	    cost=units*0.5;
    	}
        cout<<cost<<endl;
	}
	return 0;
}
