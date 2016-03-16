#include <bits/stdc++.h>
using namespace std;

class exchange{
private:

public:
    double change(int x,int y,double amount){
        if(x==1){
            if(y==1){
                return amount;
            }else if(y==2){
                return amount * 0.12;
            }else if(y==3){
                return amount * 14.55;
            }else if(y==4){
                return amount * 0.13;
            }else if(y==5){
                return amount * 0.038;
            }
        }else if(x==2){
            if(y==1){
                return amount * 8.56;
            }else if(y==2){
                return amount;
            }else if(y==3){
                return amount * 124.61;
            }else if(y==4){
                return amount * 1.09;
            }else if(y==5){
                return amount * 0.33;
            }
        }else if(x==3){
            if(y==1){
                return amount * 0.069;
            }else if(y==2){
                return amount * 0.0080;
            }else if(y==3){
                return amount;
            }else if(y==4){
                return amount * 0.0088;
            }else if(y==5){
                return amount * 0.0026;
            }
        }else if(x==4){
            if(y==1){
                return amount * 7.83;
            }else if(y==2){
                return amount * 0.91;
            }else if(y==3){
                return amount * 113.98;
            }else if(y==4){
                return amount;
            }else if(y==5){
                return amount * 0.30;
            }
        }else if(x==5){
            if(y==1){
                return amount * 26.06;
            }else if(y==2){
                return amount * 3.04;
            }else if(y==3){
                return amount * 379.17;
            }else if(y==4){
                return amount * 3.33;
            }else if(y==5){
                return amount;
            }
        }
    }
};

class def{
private:

public:
    string defination(int x,int y){
        string arr[]={" Egyptian Pounds "," Euro "," Japanese Yen "," US Dollars "," Kuwaiti Dinar "};
        if(x>=0 && y==-1) return arr[x-1];
        else if(y>=0 && x==-1) return arr[y-1];
    }
};


int main()
{   int from,to;
    double amount;

    exchange exchange1;
    def def1;

    cout<<"List of available currencies:\n1. Egyptian Pound \n2. Euro \n3. Japanese Yen \n4. US Dollar \n5. Kuwaiti Dinar "<<endl;
    cout<<"Please enter the currency you would like to convert from ===>";
    cin>>from;
    cout<<"Please enter the currency you would like to convert to ===>";
    cin>>to;
    cout<<"Please enter the amount ===>";
    cin>>amount;
    cout<<amount<<def1.defination(from,-1)<<"= "<<exchange1.change(from,to,amount)<<def1.defination(-1,to)<<endl;
    cout<<amount<<def1.defination(-1,to)<<"= "<<exchange1.change(to,from,amount)<<def1.defination(from,-1)<<endl;

    return 0;
}
