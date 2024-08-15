#include<stdio.h>
void
main ()
{

  char a[100], b[100];
  int i;
  printf ("DONNEZ LA CHAIN A:\n");
  scanf ("%s", a);
  printf ("DONNEZ LA CHAIN B:\n");
  scanf ("%s", b);
  for (i = 0; a[i] != '\0' && b[i]!='\0'; i++)
	{
	  if (a[i] < b[i])
		{
		  printf ("A precede B1\n ");
		  break;
		}
		if (a[i] > b[i])
		{
		  printf ("B precede A2\n");
		  break;
		}
	  if (a[i] == '\0' && b[i] == '\0')
		{
		  printf ("MEME CHAINE DE CHARACTER");
		  break;
		}
	else  if (a[i] =='\0')
		{
		  printf ("A precede b");
		  break;
		}
	 else if ( b[i] == '\0')
		{
		  printf ("B precede A4");
		  break;
		}

	}
}