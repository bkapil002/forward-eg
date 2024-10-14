#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a , b , c , d , root1 ,root2,realpoint , imginarypart;

    cout <<"Enter the vlaue a : ";
    cin >> a;
    cout <<"Enter the value b : ";
    cin >> b;
    cout <<"Enter the value c : ";
    cin >> c;

    d = (b * b) - (4 * a * c);
    cout << "value of D: "<< d << endl;

    if(d > 0){
        goto realid;
    }
    else if(d==0){
        goto realequal;
    }else{
        goto complex;
    }

    realid:
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    cout<< "two distinct real roots: "<<root1 << " and "<<root2 <<endl;
    cout<< "Root1 = "<<root1<<endl;
    cout<< "Root2 = "<<root2<<endl;
    goto end;

    realequal:
    root1 = root2 = -b / (2 * a);
    cout<< "two equal real roots: "<<root1 << " and "<<root2 <<endl;
    cout<< "Root1 = "<<root1<<endl;
    cout<< "Root2 = "<<root2<<endl;
    goto end;

    complex:
    realpoint = -b / (2 * a);
    imginarypart = sqrt(abs(d)) / (2 * a);
    cout<< " Roots are complex  and distinct: "<<endl;
    cout<< "Root1 = "<<realpoint<<" + "<<imginarypart<<"i"<<endl;
    cout<< "Root2 = "<<realpoint<<" - "<<imginarypart<<"i"<<endl;

     end:
    return 0; 
}