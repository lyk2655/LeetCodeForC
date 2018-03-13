#include <stdio.h>
#include <string.h>

typedef enum{false,true} bool;

bool isMatch(char* s, char* p) {
    if(s == NULL || p == NULL)
    {
    	return false;
    }
    if(!*p) 
    {
    	return !*s;
    }

    if(*(p+1) == '*')
    {
    	while( (*p == *s)|| (*s && *p == '.') )
    	{
    		if(isMatch(s,p+2))
    			return true;
    		s++;
    	}
    	return isMatch(s,p+2);
    } else if((*p == *s) || (*s && *p == '.')) 
    {
    	return isMatch(s+1,p+1);
    }
    return false;
}

int main() 
{
	char s[1024];
	char p[1024];
	while(1) 
	{
		printf("请输入s:\n");
		scanf("%s",s);
		printf("请输入p:\n");
		scanf("%s",p);

		printf("匹配结果为%d\n",isMatch(s,p));
	}
}
