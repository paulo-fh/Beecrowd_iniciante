#include<stdio.h>
#include<string.h>

main(){
	
	char p1[20], p2[20], p3[20];
	
	gets(p1);
	gets(p2);
	gets(p3);
	

	if(!strcmp(p1,"vertebrado")){
		if(!strcmp(p2,"ave")){		if(!strcmp(p2,"ave")){
	if(!strcmp(p1,"vertebrado")){
			if(!strcmp(p3,"carnivoro"))
				printf("aguia");
			else if(!strcmp(p3,"onivoro"))
				printf("pomba");
		}else if(!strcmp(p2,"mamifero")){
			if(!strcmp(p3,"onivoro"))
				printf("homem");
			else if(!strcmp(p3,"herbivoro"))
				printf("vaca");
		}
	}else if(!strcmp(p1,"invertebrado")){
		if(!strcmp(p2,"inseto")){
			if(!strcmp(p3,"hematofago"))
				printf("pulga");
			else if(!strcmp(p3,"herbivoro"))
				printf("lagarta");
		}else if(!strcmp(p2,"anelideo")){
			if(!strcmp(p3,"hematofago"))
				printf("sanguessuga");
			else if(!strcmp(p3,"onivoro"))
				printf("minhoca");
		}
	}   
	
	return 0;
}

int my_strcmp(char *s1, char *s2)
{
	int i;
	while(s1[i]==s2[i] && s1[i]!='\0')
		i++;
		
	return s1[i]-s2[i];
		
}
