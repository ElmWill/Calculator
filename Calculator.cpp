#include <stdio.h>
#include <stdlib.h>

void matrix(long long int x1, long long int y1, long long int x2, long long int y2, long long int arr1[255][255], long long int arr2[255][255], long long int arr3[255][255], char typ){
	system("cls");
	
	puts("===================================================================");
	puts("MATRIX CALCULATOR");
	puts("===================================================================");
	printf("input the row for the first matrix: ");
	scanf("%lld", &x1); getchar();
	puts("");
	printf("Input the column for the first matrix: ");
	scanf("%lld", &y1); getchar();
	puts("");
	
	puts("===================================================================");
	printf("Input the row for the second matrix: ");
	scanf("%lld", &x2); getchar();
	puts("");
	printf("input the column for the second matrix: ");
	scanf("%lld", &y2); getchar();
	puts("");
	puts("===================================================================");
	puts("");
	printf("input what you want to do (+)(-)(x): ");
	
	scanf("%c", &typ);
	getchar();
	
	while(typ != 'x' && typ != 'X' && typ != '+' && typ != '-'){
		
		printf("Wrong Input! input what you want to do (+)(-)(x): ");
		scanf("%c", &typ);
		getchar();
	}
	
	
	if(typ == 'x' || typ == 'X'){
		if(y1 != x2){
			system("cls");
			
		puts("===================================================================");
		puts("Sorry This is Not Calculable");
	}
	else{
		puts("Input the numbers for the first Matrix: ");
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y1; j++){
				scanf("%lld", &arr1[i][j]);
			}
			getchar();
		}
		
		puts("Input the numbers for the second Matrix: ");
		for(long long int i = 1; i <= x2; i++){
			for(long long int j = 1; j <= y2; j++){
				scanf("%lld", &arr2[i][j]);
			}
			getchar();
		}
		
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y2; j++){
				arr3[i][j] = 0;
				for(long long int k = 1; k <= y1; k++){
					arr3[i][j] += arr1[i][k] * arr2[k][j];
				}
			}
		}
		system("cls");
		
		puts("===================================================================");
		puts("");
		
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y1; j++){
				printf("%lld\t", arr1[i][j]);
			}
			puts("");
		}
		
		puts("");
		puts("Times");
		puts("");
		
		for(long long int i = 1; i <= x2; i++){
			for(long long int j = 1; j <= y2; j++){
				printf("%lld\t", arr2[i][j]);
			}
			puts("");
		}
		
		puts("");
		puts("is");
		puts("");
		
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y2; j++){
				printf("%lld\t", arr3[i][j]);
			}
			puts("");
		}
		puts("");
		puts("===================================================================");
		
		}
	}
	else if(typ == '+'){
		if(x1 != x2 || y1 != y2){
				system("cls");
				
			puts("===================================================================");
			puts("Sorry This is Not Calculable");
		}
		else{
			puts("Input the numbers for the first Matrix: ");
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y1; j++){
				scanf("%lld", &arr1[i][j]);
			}
			getchar();
		}
		
		puts("Input the numbers for the second Matrix: ");
		for(long long int i = 1; i <= x2; i++){
			for(long long int j = 1; j <= y2; j++){
				scanf("%lld", &arr2[i][j]);
			}
			getchar();
		}
		
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y2; j++){
				arr3[i][j] = 0;
				arr3[i][j] += arr1[i][j] + arr2[i][j];
			}
		}
			system("cls");
			
		puts("===================================================================");
		puts("");
		
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y1; j++){
				printf("%lld\t", arr1[i][j]);
			}
			puts("");
		}
		
		puts("");
		puts("plus");
		puts("");
		
		for(long long int i = 1; i <= x2; i++){
			for(long long int j = 1; j <= y2; j++){
				printf("%lld\t", arr2[i][j]);
			}
			puts("");
		}
		
		puts("");
		puts("is");
		puts("");
		
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y2; j++){
				printf("%lld\t", arr3[i][j]);
			}
			puts("");
		}
		puts("");
		puts("===================================================================");
		}
	}
		else if(typ == '-'){
			if(x1 != x2 || y1 != y2){
				system("cls");
				
			puts("===================================================================");
			puts("Sorry This is Not Calculable");
		}
		else{
			puts("Input the numbers for the first Matrix: ");
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y1; j++){
				scanf("%lld", &arr1[i][j]);
			}
			getchar();
		}
		
		puts("Input the numbers for the second Matrix: ");
		for(long long int i = 1; i <= x2; i++){
			for(long long int j = 1; j <= y2; j++){
				scanf("%lld", &arr2[i][j]);
			}
			getchar();
		}
		
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y2; j++){
				arr3[i][j] = 0;
				arr3[i][j] += arr1[i][j] - arr2[i][j];
			}
		}
		
		system("cls");
			
		puts("===================================================================");
		puts("");
		
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y1; j++){
				printf("%lld\t", arr1[i][j]);
			}
			puts("");
		}
		
		puts("");
		puts("minus");
		puts("");
		
		for(long long int i = 1; i <= x2; i++){
			for(long long int j = 1; j <= y2; j++){
				printf("%lld\t", arr2[i][j]);
			}
			puts("");
		}
		
		puts("");
		puts("is");
		puts("");
		
		for(long long int i = 1; i <= x1; i++){
			for(long long int j = 1; j <= y2; j++){
				printf("%lld\t", arr3[i][j]);
			}
			puts("");
		}
		puts("");
		puts("===================================================================");
		}
	}
	else{
	}
}

void basic(long long int a1, long long int a2, long long int a3, char op, double b1, double b2, double b3, char s){
	do{
			system("cls");
			
		puts("===================================================================");
		puts("BASIC CALCULATOR");
		puts("===================================================================");
		puts("===================================================================");
		puts("What Kind of numbers will you using");
		puts("1. Round numbers");
		puts("2. Decimal numbers");
		puts("===================================================================");
		printf("Input: ");
		scanf("%c", &s);
		getchar();
		puts("===================================================================");
		puts("");
		
	}while(s != '1' && s != '2');
	
	if(s == '1'){
		printf("Input the first number: ");
	scanf("%lld", &a1);
	getchar();
	
	printf("Input the operator(+)(-)(x)(/): ");
	scanf("%c", &op);
	getchar();
	
	printf("Input the second number: ");
	scanf("%lld", &a2);
	getchar();
	puts("===================================================================");
	puts("");
	
	switch(op){
		case ('+'):{
			a3 = 0;
			a3 = a1 + a2;
			for(int i = 0; i <= 50; i++){
				puts("");
			}
			printf("%lld + %lld = %lld\n", a1, a2, a3);
			break;
		}
		case ('-'):{
			a3 = 0;
			a3 = a1 - a2;
			for(int i = 0; i <= 50; i++){
				puts("");
			}
			printf("%lld - %lld = %lld\n", a1, a2, a3);
			break;
		}
		case ('x'):{
			a3 = 0;
			a3 = a1 * a2;
			for(int i = 0; i <= 50; i++){
				puts("");
			}
			printf("%lld x %lld = %lld\n", a1, a2, a3);
			break;
		}
		case ('X'):{
			a3 = 0;
			a3 = a1 * a2;
			for(int i = 0; i <= 50; i++){
				puts("");
			}
			printf("%lld x %lld = %lld\n", a1, a2, a3);
			break;
		}
		case ('/'):{
			a3 = 0;
			a3 = a1 / a2;
			for(int i = 0; i <= 50; i++){
				puts("");
			}
			printf("%lld / %lld = %lld\n", a1, a2, a3);
			break;
		}
		default:{
			system("cls");
			
			puts("Sorry This is Not Calculable");
			break;
		}
	}
	puts("===================================================================");
	}
	else{
		printf("Input the first number: ");
	scanf("%lf", &b1);
	getchar();
	
	printf("Input the operator(+)(-)(x)(/): ");
	scanf("%c", &op);
	getchar();
	
	printf("Input the second number: ");
	scanf("%lf", &b2);
	getchar();
	puts("===================================================================");
	puts("");
	
	switch(op){
		case ('+'):{
			b3 = 0;
			b3 = b1 + b2;
			system("cls");
			
			printf("%lf + %lf = %lf\n", b1, b2, b3);
			break;
		}
		case ('-'):{
			b3 = 0;
			b3 = b1 - b2;
			for(int i = 0; i <= 50; i++){
				puts("");
			}
			printf("%lf - %lf = %lf\n", b1, b2, b3);
			break;
		}
		case ('x'):{
			b3 = 0;
			b3 = b1 * b2;
			for(int i = 0; i <= 50; i++){
				puts("");
			}
			printf("%lf x %lf = %lf\n", b1, b2, b3);
			break;
		}
		case ('X'):{
			b3 = 0;
			b3 = b1 * b2;
			system("cls");
			
			printf("%lf x %lf = %lf\n", b1, b2, b3);
			break;
		}
		case ('/'):{
			b3 = 0;
			b3 = b1 / b2;
			for(int i = 0; i <= 50; i++){
				puts("");
			}
			printf("%lf / %lf = %lf\n", b1, b2, b3);
			break;
		}
		default:{
			system("cls");
			
			puts("Sorry This is Not Calculable");
			break;
		}
		}
	}
	puts("===================================================================");
	}
	



int main(){
	// buat yg matrix
	long long int x1, y1, x2, y2; 
	long long int arr1[255][255], arr2[255][255], arr3[255][255];
	char typ;
	// buat calc biasa
	long long int a1, a2, a3;
	double b1, b2, b3;
	char op, s;
	// buat menu calculator...
	char select;
	
	
	do{
		puts("===================================================================");
		puts("CALCULATOR");
		puts("===================================================================");
		puts("");
		puts("===================================================================");
		puts("pick what you want to do:");
		puts("1. Basic Calculator");
		puts("2. Matrix Calculator");
		puts("3. Close Program");
		puts("===================================================================");
		printf("Input : ");
		scanf("%c", &select);
		getchar();
		
		system("cls");
		
		if(select == '2'){
			system("cls");
			
			matrix(x1, y1, x2, y2, arr1, arr2, arr3, typ);
		}
		else if(select == '1'){
			system("cls");
			
			basic(a1, a2, a3, b1, b2, b3, op, s);
		}
		else if(select == '3'){
			break;
		}
		else{
			continue;
		}
	}while(select != '1' || select != '2');
	
	return 0;
}
