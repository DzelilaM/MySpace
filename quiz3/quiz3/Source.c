#include <stdio.h>
int points = 0;
int correctAnswers = 0;
int incorrectAnswers = 0;

void Welcome()
{
	printf("Welcome to new quiz\n\n");
	printf("\n\n    For every question you will have 4 possibilities\n");
	printf("     \n    You have to choose which is correct\n");
	printf(" \n   Every correct answer will bring you 5 points\n");
	printf(" \n or if you do not answer correct you will lose 2 points\n\n");
	printf("        \n             Good luck\n\n");
}
void space()
{
	printf("\n\n");
}
void next()
{
	printf("   Next question is:  ");
}

void answer1()
{
	printf("\n\n          Your answer is correct\n");
	points += 5;
	correctAnswers += 1;
}
void answer2()
{
	printf("\n\nYour answer is not correct\n");
	points -= 2;
	incorrectAnswers += 1;
}
void cls()
{
	system("cls");
}
void math()
{
	system("COLOR 5F");
	int answer;
	cls();
	printf(" \n\n\n\n\n                 Your choise is Math\n");
	printf("  \n\n                      Good luck\n");
	printf("\n\n");
	system("Pause");
	cls();
	printf("How much is 5*5-2*2??\n\n");
	printf("1 21\n");
	printf("2 46\n");
	printf("3 30\n");
	printf("4 35\n");
	printf("\n\nEnter result\n\n");
	scanf_s("%d", &answer);
	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("What is root of 625??\n\n");
	printf("1 26\n");
	printf("2 23\n");
	printf("3 24\n");
	printf("4 25\n");
	printf("\n\nRoot is \n\n");
	scanf_s("%d", &answer);
	if (answer == 4)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("What is 3/4??\n\n");
	printf("1 0,55\n");
	printf("2 0,65\n");
	printf("3 0,75\n");
	printf("4 0,85\n");
	printf("\n\nEnter your result\n\n");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("What is 3*3*3*3??\n\n");
	printf("1 27\n");
	printf("2 36\n");
	printf("3 81\n");
	printf("4 243\n");
	printf("\n\nWhat do you think??\n\n");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("What is result if somebody divide 10*10*100*10/100 with 10??\n\n");
	printf("1 10\n");
	printf("2 10\n");
	printf("3 100\n");
	printf("4 1000\n");
	printf("\n\nWhat do you think??\n\n");
	scanf_s("%d", &answer);
	if (answer == 4)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	printf("\n\n\n   *****You have %d correct answers and your score is %d points*****\n", correctAnswers, points);
	space();
	if (points == 25)
		printf("YES you are great, you answer all question correct ");
	system("Pause");
	space();
}
void history()
{
	system("COLOR A4");
	int answer;
	cls();
	printf(" \n\n\n\n\n                 Your choise is History\n");
	printf("  \n\n                      Good luck\n");
	printf("\n\n");
	space();
	space();
	system("Pause");
	cls();
	printf("What found Columbo??\n\n");
	printf("1 Minhen\n");
	printf("2 America\n");
	printf("3 Madrid\n");
	printf("4 Russia\n");
	printf("\n\nEnter your answer:      \n\n");
	scanf_s("%d", &answer);

	if (answer == 2)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("From where is Napoleon??\n\n");
	printf("1 France\n");
	printf("2 America\n");
	printf("3 Germany\n");
	printf("4 Spain\n");

	printf("\n\nEnter your answer:      \n\n");
	scanf_s("%d", &answer);

	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("When was finished The second world war??\n\n");
	printf("1 1939\n");
	printf("2 1940\n");
	printf("3 1943\n");
	printf("4 1945\n");

	printf("\n\nEnter your answer:      \n\n");
	scanf_s("%d", &answer);

	if (answer == 4)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("What is year when The first world war started??\n\n");
	printf("1 1918.\n");
	printf("2.1919.\n");
	printf("3 1914.\n");
	printf("4 1915.\n");
	printf("\n\nAnd it was at year: \n\n");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("When was found America??\n\n");
	printf("1 1940.\n");
	printf("2.1941.\n");
	printf("3 1942.\n");
	printf("4 1943.\n");
	printf("\n\nAnd it was at year: \n\n");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();
	system("Pause");
	cls();

	printf("\n\n\n    ***** You have %d correct answers and your score is %d points*****\n", correctAnswers, points);
	space();
	if (points == 25)
		printf("YES you are great, you answer all question correct ");
	system("Pause");
	space();
}


void capitalcity()
{
	system("COLOR B5");
	int answer;
	cls();
	printf(" \n\n\n\n\n                 Your choise is Capital city\n");
	printf("  \n\n                      Good luck\n");
	printf("\n\n");
	system("Pause");
	cls();
	printf("What is capital city of England??\n\n");
	printf("1 Paris\n");
	printf("2 Madrid\n");
	printf("3 London\n");
	printf("4 Minhen\n");

	printf("\n\nCorrect answer is\n\n ");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("What is capital city of Croatia??\n\n");
	printf("1 Zagreb\n");
	printf("2.Beograd\n");
	printf("3 Pristina\n");
	printf("4 Sarajevo\n");
	printf("\n\nAnd it is: \n\n");
	scanf_s("%d", &answer);
	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("Capital city of Russia is??\n\n");
	printf("1 Moskva\n");
	printf("2 Petrograd\n");
	printf("3 Kijev\n");
	printf("4 Staljingrad\n");
	printf("\n\nCapital city of Russia is: \n\n");
	scanf_s("%d", &answer);
	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("What is capital city of Spain??\n\n");
	printf("1 Varsava\n");
	printf("2 Prag\n");
	printf("3 Madrid\n");
	printf("4 Amsterdam\n");
	printf("\n\nCorrect answer is : \n\n");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("And and what is capital city of China??\n\n");
	printf("1 Kairo\n");
	printf("2.Peking\n");
	printf("3 Tokio\n");
	printf("4 Lukaku\n");
	printf("\n\nIt is city: \n\n");
	scanf_s("%d", &answer);
	if (answer == 2)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	printf("\n\n\n      *****You have %d correct answers and your score is %d points*****\n", correctAnswers, points);
	space();
	if (points == 25)
		printf("YES you are great, you answer all question correct ");
	system("Pause");
	space();
}
void litheraty()
{

	system("COLOR E1");
	int answer;
	cls();
	printf(" \n\n\n\n\n                 Your choise is Litheraty\n");
	printf("  \n\n                      Good luck\n");
	printf("\n\n");
	system("Pause");
	cls();
	printf("Who wrote Ana Karenjina??\n\n");
	printf("1 Dostojevski\n");
	printf("2 Gorbacov\n");
	printf("3 Turgenjev\n");
	printf("4 Tolstoj\n");
	printf("\n\nIt was : \n\n");
	scanf_s("%d", &answer);
	if (answer == 4)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("Who is author of Albatros??\n\n");
	printf("1 Sarl Bodler.\n");
	printf("2 Rajner Maria Rilke\n");
	printf("3 Artur Rembo\n");
	printf("4 Pol Verlen\n");
	printf("\n\nName of author is : \n\n");
	scanf_s("%d", &answer);
	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("What is written by Edhem Mulabdic??\n\n");
	printf("1 Zeleno busenje\n");
	printf("2 Most na Drini cupriji\n");
	printf("3 Tvrdava\n");
	printf("4 Dervis i smrt\n");
	printf("\n\nHe wrote  \n\n");
	scanf_s("%d", &answer);
	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("From which country is author of Hamlet??\n\n");
	printf("1 Bulgaria\n");
	printf("2 Spain\n");
	printf("3 France\n");
	printf("4 England\n");
	printf("\n\nFrom\n\n");
	scanf_s("%d", &answer);
	if (answer == 4)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	next();
	space();
	printf("Who wrote the book Evgenije Onjegin??\n\n");
	printf("1 Ljermontov\n");
	printf("2 Puskin\n");
	printf("3 Goethe\n");
	printf("4 Flober\n");
	printf("\n\nEvgenije Onjegin is written by...\n\n");
	scanf_s("%d", &answer);
	if (answer == 2)
		answer1();
	else
		answer2();
	space();
	space();
	system("Pause");
	cls();
	printf("\n\n\n       *****You have %d correct answers and your score is %d points*****\n", correctAnswers, points);
	space();
	if (points == 25)
		printf("YES you are great, you answer all question correct ");
	system("Pause");
	space();
}
void main()
{
	system("COLOR E3");
	int start;
	int num;
	Welcome();
	printf("\n\n");
	printf("Enter number 1 to start or 0 o cancel quiz\n\n");
	scanf_s("\n\n%d", &start);
	if (start == 1)
	{
		printf("\n");
		printf("Now you can choose field of questions\n\n");
		printf("\nIf you want math press number 1\n");
		printf("\nIf you want hystory press number 2\n");
		printf("\nIf you want capital cities press number 3\n");
		printf("\nIf you want litheraty press number 4\n");
		printf("\n\n");
		scanf_s("%d", &num);
		if (num == 1)
		{
			math();
		}
		if (num == 2)
		{
			history();
		}
		if (num == 3)
		{
			capitalcity();
		}
		if (num == 4)
		{
			litheraty();
		}

	}
	else if (start == 0)
	{
		printf("You canceled quiz so goodbye \n");

		system("Pause");
	}



}

