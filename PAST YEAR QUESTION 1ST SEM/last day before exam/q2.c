// Admission to a professional course is subject to the following conditions:
// a)	Marks in mathematics >= 60
// b)	Marks in physics >= 50
// c)	Marks in chemistry >= 40
// d)	Total in all three subjects >= 200
// 				OR
// Total in mathematics and physics	>=150
// Write a program to process the applications to list eligible candidates.
#include <stdio.h>
#include <conio.h>
void main()
{
	int m, p, c, tmpc, tmp;
	clrscr();
	printf("Enter marks in mathematics, physics, and chemistry:\n");
	scanf("%d%d%d", &m, &p, &c);
	tmpc = m + p + c;
	tmp = m + p;
	if ((m >= 60 && p >= 50 && c >= 40 && tmpc >= 200) || (tmp >= 150))
		// if((m >= 60 && p >= 50 && c >= 40) && (tmpc >= 200 || tmp >= 150))
		printf("Eligible");
	else
		printf("Not eligible");
	getch();
}
