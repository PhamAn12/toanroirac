// Tinh x^y mod n
#include<stdio.h>
int soDu (int x, int y,int n) {
	int r, i;
	r = x % n;
	for (i = 1; i < y; i++)
	r = (r * (x % n)) % n;
	return r;
}

int main () {
	int x,y,n;
	printf ("Nhap x , y , n : \n");
	scanf ("%d",&x);
	scanf ("%d",&y);
	scanf ("%d",&n);
	printf ("Ket Qua : %d",soDu(x,y,n));
	return 0;
}
