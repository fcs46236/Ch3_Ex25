/* Program File Name: Ch3_Ex25
Programmer: Frank Sonsini
Date: October 2026
Requirements:
Write a program that inputs the length of a vinyard row, the length of an end-post assembly and the space between vines
   then calculates and displays then number of vines that can be planted in a row
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double row_length, end_post_assembly_length, vine_spacing;
    int number_of_vines;
    
    cout << fixed << setprecision(2);

    cout << "What is the length of a vinyard row in feet?" << endl;
    cin >> row_length;
    cout << "What is the length of an end-post assembly in feet?" << endl;
    cin >> end_post_assembly_length;
    cout << "What is the spacing between vines in feet?" << endl;
    cin >> vine_spacing;

    number_of_vines = (row_length - (2 * end_post_assembly_length)) / vine_spacing;

    cout << "The number of vines that can be planted in a row is "<< number_of_vines << "." << endl;
    return(0);
}