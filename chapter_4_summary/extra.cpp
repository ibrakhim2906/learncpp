#include <iostream>

double calculateBallHeight(double, int);
void printBallHeight(double, int);
void calculateAndPrintBallHeight(double, int);

int main()
{
	std::cout << "Enter the height of the tower in meters : ";
	double tower_height{};
	std::cin >> tower_height;

	calculateAndPrintBallHeight(tower_height, 1);
	calculateAndPrintBallHeight(tower_height, 2);
	calculateAndPrintBallHeight(tower_height, 3);
	calculateAndPrintBallHeight(tower_height, 4);
	calculateAndPrintBallHeight(tower_height, 5);

	return 0;
}

double calculateBallHeight(double tower_height, int seconds)
{
	double gravity{9.8};

	double fallen_distance{gravity * (seconds * seconds) / 2.0};
	double ball_height{tower_height - fallen_distance};

	if (ball_height < 0.0)
	{
		return 0;
	}

	return ball_height;
}

void printBallHeight(double ball_height, int seconds)
{
	if (ball_height > 0.0)
	{
		std::cout << "At " << seconds << " seconds, the ball is at height "
				  << ball_height << " meters\n";
	}
	else
	{
		std::cout << "At " << seconds
				  << " seconds, the ball is on the ground\n";
	}
}

void calculateAndPrintBallHeight(double tower_height, int seconds)
{
	double ball_height{calculateBallHeight(tower_height, seconds)};
	printBallHeight(ball_height, seconds);
}
