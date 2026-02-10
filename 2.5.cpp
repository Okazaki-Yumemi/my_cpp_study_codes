#include <iostream>
using namespace std;
int main(){
    double apple_price=2.50 ,pear_price=1.80,banana_price=2.00,orange_price=1.60;
    double mass_of_apple,mass_of_pear,mass_of_banana,mass_of_orange;
    double price;
    cout<<"Please enter the mass of apple,pear,banana and orange"<<endl;
    cin>>mass_of_apple>>mass_of_pear>>mass_of_banana>>mass_of_orange; 
    price=apple_price*mass_of_apple+pear_price*mass_of_pear+mass_of_banana*banana_price+mass_of_orange*orange_price;
    cout<<"The final price of your things is: "<<int(price+0.5)<<endl;
    return 0;   
}