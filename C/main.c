#include <stdio.h>

struct employee {
	char lname[20];
	char fname[20];
	int idnum;
	int ssn;
	char title[20];
};

struct members {
	struct employee employee[5];
} emp;

void store(int num) {

	printf("Enter last name: ");
	scanf("%s", emp.employee[num].lname);

	printf("Enter first name: ");
	scanf("%s", emp.employee[num].fname);

	printf("ID Number: ");
	scanf("%d", &emp.employee[num].idnum);

	printf("Last 4 digits of SSN: ");
	scanf("%d", &emp.employee[num].ssn);

	printf("Title: ");
	scanf("%s", emp.employee[num].title);
}

int main() {
	for (int i = 0;i < 5;i++) {
		store(i);
	}
	return 0;
}
