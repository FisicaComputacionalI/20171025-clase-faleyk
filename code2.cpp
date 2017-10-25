
//  main.cpp
//  Code1
//
//  Created by faleyk on 10/21/17.
//  Copyright © 2017 faleyk. All rights reserved.
//
#include <iostream>

using namespace std;



int main()
{
    int s=12,p,i;
    int prime=1;
    //int f=1;
    cout<<"Teclea un número entero positivo:"<<endl;
    cin>> p;
    do{
        do{
            if (p%2==0) p=p+1;
            for (i=2; i<=p/2; ++i)
            if(p%i==0)
            {prime=0;
                p=p+2;
            }
            else prime=1;
        } while(prime=0);
        if (p<s) {s=s-p;p=p+2;}
        else {s=s-1;
            if(s==!0) p=p+2;
        }
    }while(s!=0);
    
    cout<<"P="<<p-2<<endl;
    return 0;
}



