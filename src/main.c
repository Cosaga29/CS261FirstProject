/*
Martin Edmunds
CS 261-400
04/02/19

Assignment 0 - Area of a triangle

This program computes the area of a triangle whose sides
are given on the command prompt.

Area forumula used is:
Heron's Formula


*/

#include <stdio.h>
#include <math.h>


double calcArea(int, int, int);


int main(int argc, char** argv) {



	//pass the three functions on the command line into area function
	double area = calcArea(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));

	//Area of an x,y,z triangle is:
	printf("Area of a %s, %s, %s triangle is:\n", argv[1], argv[2], argv[3]);
	printf("%f\n", area);
}


double calcArea(int a, int b, int c) {

	//calculate semi perimeter
	double semi = ((double)a + (double)b + (double)c) / 2.0;

	//calculate area A = sqrt[s(s - a)(s - b)(s - c)]
	return sqrt(semi * (semi - (double)a) * (semi - (double)b) * (semi - (double)c));

}