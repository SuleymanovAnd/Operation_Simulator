#include "../include/tools.h"
#include "../include/coordinates.h"
#include <iostream>

using namespace std;

int main() {
    string command;
    coordinate point1;
    coordinate point2;

    bool cat_was_made = false;
    bool operation_completed = false;
    while (!operation_completed) {
        cout << ": ";
        cin >> command;

        if (command == "scalpel" && !cat_was_made) {
            cout << "Point 1\n";
            coordinate_input(point1.X, point1.Y);
            cout << "Point 2\n";
            coordinate_input(point2.X, point2.Y);
            if (!comparison_of_coordinates(point1.X, point1.Y, point2.X, point2.Y)) {
                scalpel(point1.X, point1.Y, point2.X, point2.Y);
                cat_was_made = true;
            } else { cout << "Point coordinates are equal! The cut was not made\n"; }
        }else if (command == "scalpel" && cat_was_made) {cout << "The cut has already been made";}

        if (command == "hemostat" && cat_was_made) {
            coordinate pointH;
            coordinate_input(pointH.X, pointH.Y);
            hemostat(pointH.X, pointH.Y);
        } else if (command == "hemostat" && !cat_was_made) {cout << "It is not possible to apply hemostat. Make a cut first\n";}

        if (command == "tweezers" && cat_was_made) {
            coordinate pointT;
            coordinate_input(pointT.X, pointT.Y);
            tweezers(pointT.X, pointT.Y);
        }else if (command == "tweezers" && !cat_was_made) {cout << "It is not possible to apply tweezers. Make a cut first\n";}

        if (command == "suture" && cat_was_made) {
            coordinate pointS1;
            coordinate pointS2;
            cout << "Point 1\n";
            coordinate_input(pointS1.X, pointS1.Y);
            cout << "Point 2\n";
            coordinate_input(pointS2.X, pointS2.Y);
            if(comparison_of_coordinates(point1.X,point1.Y,pointS1.X,pointS1.Y)
                    &&comparison_of_coordinates (point2.X,point2.Y,pointS2.X,pointS2.Y)){
                operation_completed = true;
                suture (pointS1.X, pointS1.Y, pointS2.X, pointS2.Y);
            } else { cout << "The seam cannot be made. You need the coordinates of the start and end of the cut\n";}

        }else if (command == "suture" && !cat_was_made) {cout << "It is not possible to apply suture. Make a cut first\n";}
    }
}
