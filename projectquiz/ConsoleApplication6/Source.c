#include <stdio.h>
void Welcome()
{
	printf("Welcome to new quiz\n\n");
	printf("    For every question you will have 4 possibilities\n");
	printf("         You have to choose which is correct\n");
	printf("    Every correct answer will bring you 5 points\n");
	printf(" or if you do not answer correct you will lose 2 points\n\n");
	printf("        \n             Good luck\n\n");
}
void space()
{
	printf("\n\n");
}
void next()
{
	printf("Next question is coming");
}

void answer1()
{
	int points = 0;
	int correctanswers = 0;


	printf("Your answer is correct\n");
	points += 5;
	correctanswers += 1;

}
void answer2()
{
	int incorrectanswers = 0;
	int points = 0;

	printf("Your answer is not correct :(\n");
	points -= 2;
	incorrectanswers += 1;

}
void math()
{   
	system("cls");
	int answer;
	printf("How much is 5*5-2*2??\n");
	printf("1 21\n");
	printf("2 46\n");
	printf("3 30\n");
	printf("4 35\n");
	printf("Enter result\n");
	scanf_s("%d", &answer);
	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("What is root of 625??\n");
	printf("1 26\n");
	printf("2 23\n");
	printf("3 24\n");
	printf("4 25\n");
	printf("Root is \n");
	scanf_s("%d", &answer);
	if (answer == 4)
		answer1();
	else
		answer2();
	space();
	next();
		space();
		printf("What is 3/4??\n");
		printf("1 0,55\n");
		printf("2 0,65\n");
		printf("3 0,75\n");
		printf("4 0,85\n");
		printf("Enter your result\n");
		scanf_s("%d", answer);
		if (answer == 3)
			answer1();
		else
			answer2();
	
	space();
	next();
	space();
	printf("What is 3*3*3*3??\n");
	printf("1 27\n");
	printf("2 36\n");
	printf("3 81\n");
	printf("4 243\n");
	printf("What do you think??\n");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();

}
void history()
{
	int answer;
	printf("What found Columbo??\n");
	printf("1 Minhen\n");
	printf("2 America\n");
	printf("3 Madrid\n");
	printf("4 Russia\n");
	printf("Enter your answer:      \n");
	scanf_s("%d", &answer);

	if (answer == 2)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("From where is Napoleon??\n");
	printf("1 France\n");
	printf("2 America\n");
	printf("3 Germany\n");
	printf("4 Spain\n");

	printf("Enter your answer:      \n");
	scanf_s("%d", &answer);

	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("When was finished The second world war??\n");
	printf("1 1939\n");
	printf("2 1940\n");
	printf("3 1943\n");
	printf("4 1945\n");

	printf("Enter your answer:      \n");
	scanf_s("%d", &answer);

	if (answer == 4)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("What is year when The first world war started??\n");
	printf("1 1918.\n");
	printf("2.1919.\n");
	printf("3 1914.\n");
	printf("4 1915.\n");
	printf("And it was at year: \n");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("When was found America??\n");
	printf("1 1940.\n");
	printf("2.1941.\n");
	printf("3 1942.\n");
	printf("4 1943.\n");
	printf("And it was at year: \n");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();
}
void capitalcity()
{
	int answer;
	printf("What is capital city of England??\n");
	printf("1 Paris\n");
	printf("2 Madrid\n");
	printf("3 London\n");
	printf("4 Minhen\n");

	printf("Correct answer is ");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("What is capital city of Croatia??\n");
	printf("1 Zagreb\n");
	printf("2.Beograd\n");
	printf("3 Pristina\n");
	printf("4 Sarajevo\n");
	printf("And it was at year: \n");
	scanf_s("%d", &answer);
	if (answer == 2)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("Capital city of Russia is??\n");
	printf("1 Moskva\n");
	printf("2.Petrograd\n");
	printf("3 Kijev\n");
	printf("4 Staljingrad\n");
	printf("And it is: \n");
	scanf_s("%d", &answer);
	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("What is capital city of Spain??\n");
	printf("1 Varsava\n");
	printf("2.Prag\n");
	printf("3 Madrid\n");
	printf("4 Amsterdam\n");
	printf("And it was at year: \n");
	scanf_s("%d", &answer);
	if (answer == 3)
		answer1();
	else
		answer2();
	space();
	
	printf("And and what is capital city of China??\n");
	printf("1 Kairo\n");
	printf("2.Peking\n");
	printf("3 Tokio\n");
	printf("4 Lukaku\n");
	printf("And it was at year: \n");
	scanf_s("%d", &answer);
	if (answer == 2)
		answer1();
	else
		answer2();
}
void litheraty()
{
	int answer;

	printf("Who wrote Ana Karenjina??\n");
	printf("1 Dostojevski\n");
	printf("2 Gorbacov\n");
	printf("3 Turgenjev\n");
	printf("4 Tolstoj\n");
	printf("It was : \n");
	scanf_s("%d", &answer);
	if (answer == 4)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("Who is author of Albatros??\n");
	printf("1 Sarl Bodler.\n");
	printf("2 Rajner Maria Rilke\n");
	printf("3 Artur Rembo\n");
	printf("4 Pol Verlen\n");
	printf("Name of author is : \n");
	scanf_s("%d", &answer);
	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("What is written by Edhem Mulabdic??\n");
	printf("1 Zeleno busenje\n");
	printf("2 Most na Drini cupriji\n");
	printf("3 Tvrdava\n");
	printf("4 Dervis i smrt\n");
	printf("He wrote  \n");
	scanf_s("%d", &answer);
	if (answer == 1)
		answer1();
	else
		answer2();
	space();
	next();
	space();
	printf("From which country is author of Hamlet??\n");
	printf("1 Bulgaria\n");
	printf("2 Spain\n");
	printf("3 France\n");
	printf("4 England\n");
	printf("From\n");
	scanf_s("%d", &answer);
	if (answer == 4)
		answer1();
	else
		answer2();
	space();
	next();
	space();
    printf("Who wrote the book Evgenije Onjegin??\n");
	printf("1 Ljermontov\n");
	printf("2 Puskin\n");
    printf("3 Goethe\n");
	printf("4 Flober\n");
	printf("Evgenije Onjegin is written by...\n");
	scanf_s("%d", &answer);
	if (answer == 2)
		answer1();
	else
		answer2();
	space();
	
}



void main()
{
	int start;
	int num;
	Welcome();

	printf("Enter number 1 to start or 0 o cancel quiz\n");
	scanf_s("%d", &start);
	if (start == 1)
	{
		printf("Now you can choose field of questions\n\n");
		printf("If you want math press number 1\n");
		printf("If you want hystory press number 2\n");
		printf("If you want capital cities press number 3\n");
		printf("If you want litheraty press number 4\n");
		scanf_s("%d", &num);
		if (num == 1)
			math();
		if (num == 2)
			history();
		if (num == 3)
			capitalcity();
		if (num == 4)
			litheraty();

		
	}
	else if (start == 0)
		printf("You canceled quiz so goodbye \n");
}
