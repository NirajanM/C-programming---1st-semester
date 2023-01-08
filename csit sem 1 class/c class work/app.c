#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int loginPage();
void openFile(float point1, float point2, float point3, float point, float point4, float point5, float point6, float point_n);
int main()
{
	char username[15], password[15], $pw1[15], $pw2[15], ch;
	int recovery, i = 14;
	float point1 = 0, point2 = 0, point3 = 0, point4 = 0, point5 = 0, point6 = 0, point = 0, point_n = 0;
	int category;
	int review, review_n;
	int argentina, botswana, belgium, greece, jamaica;
	int afganistan, china, egypt, finland, indonesia;
	int bangladesh, bhutan, cyprus, india, iran;
	int ReturnValue = 0;
	int lamjung, bajhang, bhojpur, gulmi, dailekh;
	int tanahun, achham, dang, sankhuwasabha, bara;
	int narayanhiti, swargadwari, janaki, muktinath, haleshi;
	char name[30];
	int count = 0;

	ReturnValue = loginPage();
	if (ReturnValue == 1)
	{
		system("COLOR F");
		printf("-------  Welcome to the quiz game  -------\n\n");

		printf("Choose your category :\n");
		printf(" 1. World \n 2. Nepal\n\n");
		printf("Option : ");
		scanf("%d", &category);
		system("cls");

		if (category == 1)
		{
		W:
			count++;
			printf("\n\n------  Welcome to the quiz of world  ------\n\n");
			printf("Let's start with location of countries\n\n");

			//input start
			printf("Q1. Location of Argentina :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &argentina);
			// input end

			//output start
			switch (argentina)
			{
			case 5:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point1;
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q2. Location of Botswana :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &botswana);
			// input end

			//output start
			switch (botswana)
			{
			case 3:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point1;
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q3. Location of Belgium :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &belgium);
			// input end

			//output start
			switch (belgium)
			{
			case 2:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point1;
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q4. Location of Greece :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &greece);
			// input end

			//output start
			if (greece == 2)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point1;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q5. Location of Jamaica :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &jamaica);
			// input end

			//output start
			if (jamaica == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point1;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter to check result of this level...\n");
			getch();
			system("cls");
			system("COLOR F");
			printf("Your score in this level is %.2f%%\n", point1 * 20);
			printf("You have moved to next level.\n\n");
			printf("Press Enter for another level...\n");
			getch();
			system("cls");
			system("COLOR F");

			//Next level
			printf("Let's proceed to capital of countries...\n\n");

			//input start
			printf("Q1. Capital of Afganistan :\n");
			printf("   1.Islamabad \n   2.Tehran \n   3.Kabul \n   4.Nyapitaw \n");
			printf("Ans : ");
			scanf("%d", &afganistan);
			//intput end

			//output start
			if (afganistan == 3)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q2. Capital of China :\n");
			printf("   1.Beijing \n   2.Moscow \n   3.Seoul \n   4.Taipei \n");
			printf("Ans : ");
			scanf("%d", &china);
			//intput end

			//output start
			if (china == 1)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q3. Capital of Egypt :\n");
			printf("   1.Damascus \n   2.Jerusalem \n   3.Beirut \n   4.Cairo \n");
			printf("Ans : ");
			scanf("%d", &egypt);
			//intput end

			//output start
			if (egypt == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q4. Capital of Finland :\n");
			printf("   1.Brussels \n   2.Madrid \n   3.Berlin \n   4.Helsinki \n");
			printf("Ans : ");
			scanf("%d", &finland);
			//intput end

			//output start
			if (finland == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q5. Capital of Indonesia :\n");
			printf("   1.Hanoi \n   2.Port Morsbey \n   3.Jakarta \n   4.Bangkok \n");
			printf("Ans : ");
			scanf("%d", &indonesia);
			//intput end

			//output start
			if (indonesia == 3)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter to check result of this level...\n");
			getch();
			system("cls");
			system("COLOR F");
			printf("You score in this level is %.2f%%.\n", point2 * 20);
			printf("You have moved to next level.\n\n");
			printf("Press Enter for another level...\n");
			getch();
			system("cls");
			system("COLOR F");

			//Next level
			printf("Let's proceed to currency of countries...\n\n");
			//input start
			printf("Q1. Currency of Bangladesh :\n");
			printf("   1.Dollar \n   2.Taka \n   3.Yen \n   4.Rial \n");
			printf("Ans : ");
			scanf("%d", &bangladesh);
			//intput end

			//output start
			if (bangladesh == 2)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q2. Currency of Bhutan :\n");
			printf("   1.Dollar \n   2.Taka \n   3.Yen \n   4.Ngultrum \n");
			printf("Ans : ");
			scanf("%d", &bhutan);
			//intput end

			//output start
			if (bhutan == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q3. Currency of Cyprus :\n");
			printf("   1.Euro \n   2.Dollar \n   3.Taka \n   4.Yen \n");
			printf("Ans : ");
			scanf("%d", &cyprus);
			//intput end

			//output start
			if (cyprus == 1)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q4. Currency of India :\n");
			printf("   1.Indian Rupee \n   2.Dollar \n   3.Yuan \n   4.Pound Sterling \n");
			printf("Ans : ");
			scanf("%d", &india);
			//intput end

			//output start
			if (india == 1)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q5. Currency of Iran :\n");
			printf("   1.Dollar \n   2.Rial \n   3.Yen \n   4.Yuan \n");
			printf("Ans : ");
			scanf("%d", &iran);
			//intput end

			//output start
			if (iran == 2)
			{
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter to check result of this level...\n");
			getch();
			system("cls");
			system("COLOR F");
			printf("You score in this level is %.2f%%.\n", point3 * 20);
			printf("You have completed the game.\n\n");
			printf("Press Enter to check your overall score...\n");
			getch();
			system("cls");

			point = (point1 + point2 + point3)/3;

			if (point >= 6)
			{
				system("COLOR 2");
			}
			else
			{
				system("COLOR 4");
			}

			printf("Your overall score is %.2f%%\n", point * 20);
			printf("Press Enter to know about yourself...\n");
			getch();
			system("cls");
			system("COLOR 30");

			//if else conditions
			if (point1 > point2 && point1 > point3)
			{
				printf("You are good in determinig the location of countries.\n\n\n");
			}
			else if (point2 > point3 && point2 > point1)
			{
				printf("You are good in determining the capital of countries.\n\n\n");
			}
			else if (point3 > point1 && point3 > point2)
			{
				printf("You are good in determining the currency of countries.\n\n\n");
			}
			else if (point1 < point2 && point1 < point3 && point2 == point3)
			{
				printf("You are good in determining the capital & currency of countries.\n\n\n");
			}
			else if (point2 < point1 && point2 < point3 && point1 == point3)
			{
				printf("You are good in determining the location & currency of countries.\n\n\n");
			}
			else if (point3 < point1 && point3 < point2 && point1 == point2)
			{
				printf("You are good in determining the location & currency of countries.\n\n\n");
			}
			else if (point1 == point2 && point2 == point3 && point3 == 0)
			{
				printf("You are poor in determining the location, capital & currency of different countries.\n\n\n ");
			}
			else if (point1 == point2 && point2 == point3)
			{
				printf("You have equal knowledge determining the location, capital & currency of different countries.\n\n\n");
			}
			else
			{
				printf("Better Luck Next Time !!!\n\n\n");
			}

			printf("Do you want to review questions?\n");
			printf(" 1.Yes \n 2.No\n");
			printf("Option : ");
			scanf("%d", &review);
			if (review == 1)
			{
				//Answers of questions
				system("cls");
				system("COLOR F9");
				printf("\n\n Countries	Location\n");
				printf(" Argentina: South America \n Botswan: Africa \n Belgium: Europe \n Greece: Europe \n Jamaica: North America\n\n\n");

				printf(" Countries	Capital\n");
				printf(" Afghanistan: Kabul \n China: Beijing \n Egypt: Cairo \n Finland: Helsinki \n Indonesia: Jakarta\n\n\n");

				printf(" Countries	Currency\n");
				printf(" Bangladesh: Taka \n Bhutan: Ngultrum \n Cyprus: Euro \n India: Indian Rupee \n Iran: Rial\n\n\n");
				printf("press any key to continue");
				getch();
				system("cls");
			}
			if (count > 1)
			{
				openFile(point1, point2, point3, point, point4, point5, point6, point_n);
				printf("You played both option from our quiz game\nThank you for playing our quiz game.\nHave a good day.");
				exit(1);
			}

			else
			{

				printf("\n\nDo you want to go to next category?\n");
				printf(" 1.Yes \n 2.No\n");
				printf("Option : ");
				scanf("%d", &category);

				if (category == 1)
				{
					system("cls");
					goto S;
				}
				else
				{
					openFile(point1, point2, point3, point, point4, point5, point6, point_n);
					printf("thank you for playing our quiz game.");
					exit(1);
				}
			}
		}
		else if (category == 2)
		{
		S:
			count++;
			printf("\n\n------  Welocme to the quiz of Nepal  ------\n\n");
			printf("Let's start with location of districts\n\n");

			//input start
			printf("Q1. Location of Lamjung :\n");
			printf("   1.Bagmati \n   2.Gandaki \n   3.Karnali \n   4.Sudur Paschim\n");
			printf("Ans : ");
			scanf("%d", &lamjung);
			// input end

			//output start
			switch (lamjung)
			{
			case 2:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point4);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q2. Location of Bajhang :\n");
			printf("   1.Karnali \n   2.Province 2 \n   3.Province 1 \n   4.Sudur Paschim\n");
			printf("Ans : ");
			scanf("%d", &bajhang);
			// input end

			//output start
			switch (bajhang)
			{
			case 4:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point4);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q3. Location of Bhojpur :\n");
			printf("   1.Province 1 \n   2.Province 2 \n   3.Lumbini \n   4.Bagmati\n");
			printf("Ans : ");
			scanf("%d", &bhojpur);
			// input end

			//output start
			switch (bhojpur)
			{
			case 1:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point4);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q4. Location of Gulmi :\n");
			printf("   1.Bagmati \n   2.Lumbini \n   3.Gandaki \n   4.Sudur Paschim\n");
			printf("Ans : ");
			scanf("%d", &gulmi);
			// input end

			//output start
			switch (gulmi)
			{
			case 2:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point4);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q5. Location of Dailekh :\n");
			printf("   1.Bagmati \n   2.Gandaki \n   3.Lumbini \n   4.Karnali\n");
			printf("Ans : ");
			scanf("%d", &dailekh);
			// input end

			//output start
			switch (dailekh)
			{
			case 5:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point4);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end
			printf("Press Enter to check result of this level...\n");
			getch();
			system("cls");
			system("COLOR F");
			printf("You score in this level is %.2f%%.\n", point4 * 20);
			printf("You have moved to next level.\n\n");
			printf("Press Enter for another level...\n");
			getch();
			system("cls");
			system("COLOR F");

			//Next level
			printf("Let's proceed to headquarter of districts...\n\n");

			//input start
			printf("Q1. Headquarter of Tanahun :\n");
			printf("   1.Besisahar \n   2.Pokhara \n   3.Damauli \n   4.Chame\n");
			printf("Ans : ");
			scanf("%d", &tanahun);
			// input end

			//output start
			switch (tanahun)
			{
			case 3:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point5);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q2. Headquarter of Achham :\n");
			printf("   1.Dipayal \n   2.Mangalsen \n   3.Silgadhi \n   4.Martadi\n");
			printf("Ans : ");
			scanf("%d", &achham);
			// input end

			//output start
			switch (achham)
			{
			case 2:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point5);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q3. Headquarter of Dang :\n");
			printf("   1.Diktel \n   2.Tansen \n   3.Gulariya \n   4.Ghorahi\n");
			printf("Ans : ");
			scanf("%d", &dang);
			// input end

			//output start
			switch (dang)
			{
			case 4:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point5);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q4. Headquarter of Sankhuwasabha :\n");
			printf("   1.Khandbari \n   2.Gaighat \n   3.Phidim \n   4.Bhadrapur\n");
			printf("Ans : ");
			scanf("%d", &sankhuwasabha);
			// input end

			//output start
			switch (sankhuwasabha)
			{
			case 1:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point5);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q5. Headquarter of Bara :\n");
			printf("   1.Gaur \n   2.Kalaiya \n   3.Inaruwa \n   4.Birgunj\n");
			printf("Ans : ");
			scanf("%d", &bara);
			// input end

			//output start
			switch (bara)
			{
			case 2:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point5);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			printf("Press Enter to check result of this level...\n");
			getch();
			system("cls");
			system("COLOR F");
			printf("You score in this level is %.2f%%.\n", point5 * 20);
			printf("You have moved to next level.\n\n");
			printf("Press Enter for another level...\n");
			getch();
			system("cls");
			system("COLOR F");

			//Next level
			printf("Let's proceed to location of cultural heritages...\n\n");

			//input start
			printf("Q1. Location of Narayanhiti Durbar :\n");
			printf("   1.Lalitpur \n   2.Bhaktapur \n   3.Kathmandu \n   4.Kavrepalchowk\n");
			printf("Ans : ");
			scanf("%d", &narayanhiti);
			// input end

			//output start
			switch (narayanhiti)
			{
			case 3:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point6);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q2. Location of Swargadwari :\n");
			printf("   1.Surkhet \n   2.Doti \n   3.Jumla \n   4.Pyuthan\n");
			printf("Ans : ");
			scanf("%d", &swargadwari);
			// input end

			//output start
			switch (swargadwari)
			{
			case 4:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point6);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q3. Location of Janaki Temple :\n");
			printf("   1.Dhanusha \n   2.Siraha \n   3.Sarlahi \n   4.Sunsari\n");
			printf("Ans : ");
			scanf("%d", &janaki);
			// input end

			//output start
			switch (janaki)
			{
			case 1:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point6);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q4. Location of Muktinath :\n");
			printf("   1.Manang \n   2.Mustang \n   3.Banglung \n   4.Myagdi\n");
			printf("Ans : ");
			scanf("%d", &muktinath);
			// input end

			//output start
			switch (muktinath)
			{
			case 2:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point6);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			//input start
			printf("Q5. Location of Haleshi Mahadev :\n");
			printf("   1.Udayapur \n   2.Terhathum \n   3.Khotang \n   4.Bhojpur\n");
			printf("Ans : ");
			scanf("%d", &haleshi);
			// input end

			//output start
			switch (haleshi)
			{
			case 3:
				system("COLOR 2");
				printf("Your answer is correct \2\2\2\n\n", ++point6);
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			//output end

			printf("Press Enter to check result of this level...\n");
			getch();
			system("cls");
			system("COLOR F");
			printf("You score in this level is %.2f%%.\n", point6 * 20);
			printf("You have completed the game.\n\n");
			printf("Press Enter to check your overall score...\n");
			getch();
			system("cls");

			if (point >= 4)
			{
				system("COLOR 2");
			}
			else
			{
				system("COLOR 4");
			}

			float point_n = (point4 + point5 + point6)/3;
			printf("Your overall score is %.2f%%\n", point_n * 20);
			printf("Press Enter to know about yourself...\n");
			getch();
			system("cls");
			system("COLOR 30");

			//if else conditions
			if (point4 > point5 && point4 > point6)
			{
				printf("You are good in determinig the location of districts.\n\n\n");
			}
			else if (point5 > point6 && point5 > point4)
			{
				printf("You are good in determining the headquarter of districts.\n\n\n");
			}
			else if (point6 > point4 && point6 > point5)
			{
				printf("You are good in determining the location of cultural heritages.\n\n\n");
			}
			else if (point4 < point5 && point4 < point6 && point5 == point6)
			{
				printf("You are good in determining the location & headquarter of districts.\n\n\n");
			}
			else if (point5 < point4 && point5 < point6 && point4 == point6)
			{
				printf("You are good in determining the location of districts and cultural heritages.\n\n\n");
			}
			else if (point6 < point4 && point6 < point5 && point4 == point5)
			{
				printf("You are good in determining the headqauarter of districts & loacation of cultural heritages.\n\n\n");
			}
			else if (point4 == point5 && point5 == point6 && point6 == 0)
			{
				printf("You are poor in determining the location & headquarter of districts as well as location of cultural heritages.\n\n\n ");
			}
			else if (point4 == point5 && point5 == point6)
			{
				printf("You have equal knowledge determining the location & headquarter of districts as well as location of cultural heritages.\n\n\n");
			}
			else
			{
				printf("Better Luck Next Time !!!\n\n\n");
			}

			printf("Do you want to review questions?\n");
			printf(" 1.Yes \n 2.No\n");
			printf("Option : ");
			scanf("%d", &review_n);
			if (review_n == 1)
			{
				//Answers of questions
				system("cls");
				system("COLOR F9");
				printf("\n\n Districts	Location\n");
				printf(" Lamjung: Gandaki \n Bajhang: Sudur Paschim \n Bhojpur: Province 1 \n Gulmi: Lumbini \n Dailekh: Karnali\n\n\n");

				printf(" Districts	Headquarter\n");
				printf(" Tanahun: Damauli \n Achham: Mangalsen \n Dang: Ghorahi \n Sankhuwasabha: Khandbari \n Bara: Kalaiya\n\n\n");

				printf(" Cultural Heritages	Currency\n");
				printf(" Narayanhiti Durbar: Kathmandu \n Swargadwari: Pyuthan \n Janaki Temple: Dhanusha \n Muktinath: Mustang \n Haleshi Mahadev: Khotang\n\n\n");
				printf("\n\npress any key to continue");
				getch();
				system("cls");
			}

			if (count > 1)
			{
				openFile(point1, point2, point3, point, point4, point5, point6, point_n);
				printf("You played both option from our quiz game\nThank you for playing our quiz game.\nHave a good day.");
				exit(1);
			}

			else
			{

				printf("\n\nDo you want to go to next category?\n");
				printf(" 1.Yes \n 2.No\n");
				printf("Option : ");
				scanf("%d", &category);
				if (category == 1)
				{
					goto W;
				}
				else
				{
					openFile(point1, point2, point3, point, point4, point5, point6, point_n);
					printf("thank you for playing our quiz game.");
					exit(1);
				}
			}
		}
	}
	return 0;
}

int loginPage()
{
	char username[30], password[15], $pw1[15], $pw2[15], ch;
	int recovery, i = 0;
	printf("\t\t\t\t\t\t\t\t-----------------   Login   -----------------");
	printf("\n\n\t\t\t\t\t\t\t\t\tEnter your username: ");
	scanf("%s", &username);
	printf("\t\t\t\t\t\t\t\t\tEnter your password: ");
	while (1)
	{
		ch = getch();
		if (ch == 13)
		{
			break;
		}
		else
		{
			password[i] = ch;
			putch('*');
			i++;
		}
	}
	password[i] = '\0';
	printf("\n");
	if (strcmp(username, "spandan1") == 0 && strcmp(password, "spandan100") == 0)
	{
		system("COLOR 2");
	A:
		printf("\n\n\t\t\t\t\t\t\t\t\tLogin successful \1\1\1\n");
		printf("\t\t\t\t\t\t\t\t\tPress any key...");
	B:
		getch();
	C:
		system("cls");
		return 1;
	}
	else if (strcmp(username, "1") == 0 && strcmp(password, "2") == 0)
	{
		system("COLOR 2");
		goto A;
		goto B;
		goto C;
		return 1;
	}
	else
	{
		printf("\n\nInvalid username or password !!!\a");
		printf("\n\n1. Forgot password?\t 2. Login again\t 3. Exit\n");
		printf("Option: ");
		scanf("%d", &recovery);
		system("cls");
		switch (recovery)
		{
		case 1:
			printf("-------Welcome to password recovery-------\n");
			printf("\n\nEnter your username: ");
			scanf("%s", &username);
			if (strcmp(username, "spandan1") == 0)
			{
				printf("\nWhat is your birthdate? Date format(dd/mm/yyyy)\n");
				scanf("%s", &$pw1);
				if (strcmp($pw1, "01/01/2001") == 0)
				{
					printf("\nYour password is spandan100.\n\n");
					printf("Press Enter to login again...");
					getch();
					system("cls");
					loginPage();
					break;
				}
				else
				{
					printf("\nWrong date of birth !!!\n\n");
					exit(1);
				}
			}
			else if (strcmp(username, "1") == 0)
			{
				printf("\nWhat is your birthdate? Date format(dd/mm/yyyy)\n");
				scanf("%s", &$pw2);
				if (strcmp($pw2, "01/01/2001") == 0)
				{
					printf("\nYour password is 2.\n\n");
					printf("Press Enter to login again...");
					getch();
					system("cls");
					loginPage();
					break;
				}
				else
				{
					printf("\nWrong date of birth !!!\n\n");
					exit(1);
				}
			}
			else
			{
				printf("\n\nInvalid username or password !!!\n");
				exit(1);
			}
			break;

		case 2:
			loginPage();
			break;

		case 3:
			exit(1);
			break;

		default:
			printf("Invalid input.... \n Exiting the program");
			exit(1);
			break;
		}
	}
}

void openFile(float point1, float point2, float point3, float point, float point4, float point5, float point6, float point_n)
{
	char name[30];
	FILE *fptr;
	fptr = fopen("data.txt", "a");
	printf("Enter your full name:");
	scanf(" %[^\n]s", name);
	fprintf(fptr, "%s", "\nFull Name:");
	fprintf(fptr, "%s", name);
	fprintf(fptr, "%s", "\nLevel 1:");
	fprintf(fptr, "%.2f", point1 * 10);
	fprintf(fptr, "%s", "\nLevel 2:");
	fprintf(fptr, "%.2f", point2 * 10);
	fprintf(fptr, "%s", "\nLevel 3:");
	fprintf(fptr, "%.2f", point3 * 10);
	fprintf(fptr, "%s", "\nOverall Result:");
	fprintf(fptr, "%.2f", point * 10);
	fprintf(fptr, "%s", "\nnext round:");
	fprintf(fptr, "%s", "\nLevel 1:");
	fprintf(fptr, "%.2f", point4 * 10);
	fprintf(fptr, "%s", "\nLevel 2:");
	fprintf(fptr, "%.2f", point5 * 10);
	fprintf(fptr, "%s", "\nLevel 3:");
	fprintf(fptr, "%.2f", point6 * 10);
	fprintf(fptr, "%s", "\nOverall Result:");
	fprintf(fptr, "%.2f", point_n * 10);
	fprintf(fptr, "%s", "\n");
	fclose(fptr);
}