// vowel consinant using switch case
void vowelcheck(char ch)
{
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': printf("vowel");
			break;
		default : printf("consonant");
	}
}
int main()
{
	char ch;
	printf("enter the word : ");
	scanf("%c",&ch);
	printf("%c is a ",ch);
	vowelcheck(ch);
	return(0);
}
