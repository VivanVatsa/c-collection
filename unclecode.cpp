#include <stdio.h>
#include <conio.h>

void input(int ary[][8]);
void output(int ary[][8]);
int isPrime(int num, int p[][8], int fp[][8]);
int process(int s[][8], int p[][8], int fp[][8], int f[][8], int n[][8]);

int main(void)  {
	int s[8][8];
	int fp[8][8];
	int f[8][8];
	int p[8][8];
	int n[8][8];
	process(s, p, fp, f, n);
	printf("\nSource...\n");
	output(s);
	printf("\nPrime...\n");
	output(p);
	printf("\nFibonnaci & Prime...\n");
	output(fp);
	printf("\nFibonnaci...\n");
	output(f);
	printf("\nNone...\n");
	output(n);
}


int process(int s[][8], int p[][8], int fp[][8], int f[][8], int n[][8]) {
	int f1 = 0; // first flag 
	int f2 = 1; // second flag
	int f3= f1 + f2; // flag used for getting into fibonnacci series
		
	int r = -1; // row
	int c = -1; // column 
	
	for(int num = 0; num < 64;) {
		int isFib = 0;
		
		if(num%8 == 0) {
			++r;
			c = 0;			
		} else {
			++c;
		}
		
		++num;
		s[r][c] = num;
		
		if(f3 == num) {
			isFib = 1;
			f1 = f2;
			f2 = f3;
			f3 = f1 + f2;
		}
		
		int isPrimeResult = 0;
		if(num != 1) {
			//printf("Test Num: %d\n", num);
			isPrimeResult = isPrime(num, p, fp);
		}
		
		//printf("Num: %d isPrimeResult: %d isFib: %d\n", num, isPrimeResult, isFib);
		if(isFib && isPrimeResult) {
			fp[r][c] = num;
			f[r][c] = 0;
			p[r][c] = 0;
			n[r][c] = 0;
		} 
		else if(!isFib && !isPrimeResult) {
			fp[r][c] = 0;
			f[r][c] = 0;
			p[r][c] = 0;
			n[r][c] = num;
		} 
		else {
			if(isFib) {
				fp[r][c] = 0;
				f[r][c] = num;
				p[r][c] = 0;
				n[r][c] = 0;
			} 
			else {
				fp[r][c] = 0;
				f[r][c] = 0;
				p[r][c] = num;
				n[r][c] = 0;
			}
		}
			
	}
}


int isPrime(int num, int p[][8], int fp[][8]) {
	int result = 1;
	int isBreak = 0;
	for(int r = 0; ((isBreak == 0) && (r < 8)); ++r) {
		for(int c = 0; c < 8; ++c) {
			if((r*8) + c + 1 == num) {
				isBreak = 1;
				break;
			} else{
				if((fp[r][c] != 0)&&(num % fp[r][c] == 0)) {
					result = 0;
					isBreak = 1;
					break;
				} else if((p[r][c] != 0)&&(p[r][c] != 0)) {
					if(num % p[r][c] == 0) {
						result = 0;
						isBreak = 1;
						break;
					}
				}
			}
		}
	}
	
	return result;
}

void input(int ary[][8]) {
	int r = -1;
	int c = -1;
	
	for(int i = 0; i < 65;) {
		if(i%8 == 0) {
			++r;
			c = 0;			
		} else {
			++c;
		}
		
		++i;
		ary[r][c] = i;
	}
}

void output(int ary[][8]) {
	for(int r = 0; r < 8; ++r) {
		for(int c = 0; c < 8; ++c) {
			printf("%d", ary[r][c]);
			printf(" ");
		}
	}
}

