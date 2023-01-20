 #include <stdio.h>

int main() {
	int age =
		printf("How old are you? \n");
	scanf("%d", &age);
	while (age > 18) {
		printf("Please proceed");
	}

	int count = 0;

	while (count < 20) {
		printf("welcome\n");
		count = count + 1;
	}
	return 0;
}
