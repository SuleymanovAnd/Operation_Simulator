#pragma once
#include <iostream>
struct coordinate{
    double X;
    double Y;
};

void coordinate_input (double &X, double &Y){
    std::cout << "Enter coordinate X: ";
    std::cin >> X;

    std::cout << "Enter coordinate Y: ";
    std::cin >> Y;
}

void coordinate_output (const double X,const double Y){
    std::cout <<"X - " << X << ". Y - " << Y << ".\n";
}

bool comparison_of_coordinates (const double X1,const double Y1, const double X2, const double Y2){
    if (X1 == X2 && Y1 == Y2){return true;}
    else {return false;}
}
