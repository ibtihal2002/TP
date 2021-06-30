#include<stdio.h>
#include<stdlib.h>





int palindrom(int ac, char *av)
{
	int i=0;
	int j=strlen(av);
	while (i<=j)
{
		if(av[i]!=av[j])
			return 0;
		i++;
		j--;
	}
	return 1;	
}



node string_linkedlist(char ch,node head)
{
	text=add(ch[0]);
	node curr = head;
	for (int i=1;i<strlen(ch);i++)
	{
		curr.next=add(text[i]);
		curr = curr.next;
	}
	return head;
}
int main()
{
	int ac;
	char *av[];
	palid=palindrom(ac,av[1]);
}
