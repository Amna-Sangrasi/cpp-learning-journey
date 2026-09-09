#include <iostream>
using namespace std;

int main(){
string name,item ;
int quantity;
float price, total;
cout << "name of customer: " << endl;
getline (cin,name);
cout << "name of item: :" << endl;
getline (cin,item);
cout << "quantity of item: " << endl;
cin >> quantity;
cout << "price of item: " << endl;
cin >> price;
total= price*quantity;
cout << "total amount: " << total << endl;
if(total>=5000){
    double discountamount=total*15/100;
    cout << "final bill: " << total-discountamount << endl;
}
else if (total > 2500&&total < 5000){
    double discountamount=total*5/100;
    cout << "final bill: " << total-discountamount << endl;

}
else {
        double discountamount=0.0;
    cout << "final bill: " << total << endl;
}
return 0;


}
