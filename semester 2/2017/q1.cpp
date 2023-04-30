//functions
int length(char s[]){ //part A
	int i=0;
	while(s[i]!='\0') i++;
	return i;
}
int add(char s[], char c){ //part B
	int tail=length(s);
	s[tail]=c;
	s[tail+1]='\0';
	return tail+1;
}
int lastOccur(char s[], char c){ //part C
	int len=length(s), pos=-1, i;
	for(i=0;i<len;i++) if(s[i]==c) pos=i;
	return pos;
}
int compareTo(char s1[], char s2[]){ //part D
	int L1=length(s1), L2=length(s2), i;
	//int comparison=L1==L2?0: L1<L2?-1:1;
	for(i=0;i<L1&&i<L2;i++){
		if(s1[i] < s2[i]) return -1;
		if(s1[i] > s2[i]) return 1;
	}
		//if(s1[i]!=s2[i]) return s1[i]<s2[i]?-1:1;
	//return comparison;
	if(L1==L2) return 0;
	if(L1 < L2) return -1;
	if(L1 > L2) return 1;
}
void getMessage(char haystack[], char message[]){ //part E
	int len=length(haystack), i;
	for(i=0;i<len;i++) message[i+1]=haystack[i];
	(message[0]='<', message[len+1]='>');
}