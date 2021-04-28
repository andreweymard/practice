#include <stdio.h>

struct stats {
	int points;
	int games;
};

struct player {
	struct stats stats[5];
} ply;

void store(int num) {
	printf("Enter Player %d's point total: ", num);
	scanf("%d", &ply.stats[num].points);

	printf("Enter Player %d's game total: ", num);
	scanf("%d", &ply.stats[num].games);	
}

void print(int num)	{
	double a = ply.stats[num].points;
	double b = ply.stats[num].games;
	double average = a / b;
	printf("Player %d's scoring average was %lf ppg.\n", num, average);
}

int main() {
	for (int i = 1; i < 6; i++) {
		store(i);
	}
	for (int i = 1; i < 6; i++) {
		print(i);
	}
	return 0;
}
