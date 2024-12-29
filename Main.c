#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
	printf("Calculate diameter \n");

	int radius = 3;
	char name2 = "test";
	char name3[64];
	char charArray[] = "test s";
	float pi = 3.14;
	double distance = 2.545;
	struct MyStruct
	{
		int structVar;
		float structVar2;
	};
	bool isOn = false;

	printf("Provide a radius: ");
	scanf_s("%d", &radius);

	int diameter = radius * 2;

	printf("Diameter is : %d \n", diameter);

	char name[10];

	printf("Enter your name: ");
	scanf_s("%9s", name, (unsigned)_countof(name));

	printf("your name is : %s\n", name);

	for (size_t i = 0; i < 5; i++)
	{
		printf("test\n");
	}

	int slices = 17;
	int people = 2;

	double slicesPerPerson = (double)slices / people;

	printf("slices per person: %lf\n", slicesPerPerson);


	return 0;
}