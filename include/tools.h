#pragma once
#include <iostream>

void scalpel (const double X1,const double Y1,const double X2,const double Y2){
    std::cout << "A cut was made between coordinates ( "<<X1<< ":" << Y1
         << " ) and ( "<< X2 <<":"<< Y2 <<" )\n";
}
void hemostat (const double X1, const double Y1){
    std::cout <<"Clamp made successfully in coordinate ( " <<X1 << ":" << Y1 << " ).\n";
}
void tweezers (const double X1, const double Y1){
    std::cout << "the tweezers were set at the point ( "<<X1 << ":" << Y1 << " ).\n";
}
void suture (const double X1,const double Y1,const double X2,const double Y2){
    std::cout<<  "The seam has been made between coordinates ( "<<X1<< ":" << Y1
             << " ) and ("<< X2 <<":"<< Y2 <<")\n";
}