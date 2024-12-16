 //string inetalization
 #include<stdio.h>
 int main()
 {
  int i;
 char name[10]={'A','P','P','L','E','\0'};
 char fruits[10]="Mango";
 for( i=0;name[i]!='\0';i++)
 {
   printf(" %c ",name[i]);
 }
 printf("\n ----------------\n");
 for(i=0;fruits[i]!='\0';i++)
 {
 printf(" %c ",fruits[i]);
 } 
  return 0;
}
