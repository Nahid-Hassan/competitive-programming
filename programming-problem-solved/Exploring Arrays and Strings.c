#include<stdio.h>
#include<string.h>

int main(void)
{
    /*This program requests input of two strings,then demonstrates the four string functions with them*/

    char str1[80],str2[80];
    int i;

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the 2nd string: ");
    gets(str2);

    /*see how long the strings are*/
    printf("%s is %d chars long\n",str1,strlen(str1));
    printf("%s is %d chars long\n",str2,strlen(str2));

    /*compare two stings*/

    i = strcmp(str1,str2);
    if(!i) printf("The strings are equal.\n");
    else if(i<0) printf("%s is less then %s\n",str1,str2);
    else printf("%s is greater then %s\n",str1,str2);

    /*concatenate str2 to end of str1 if there is enough room*/
    if(strlen(str1)+strlen(str2) <80)
    {
        strcat(str1,str2);
        puts(str1);
    }

    /*copy to str2 to str1*/
    strcpy(str1,str2);
    printf(str1);


    return 0;
}
///code - 145(1) & 146(1)
/*
char str[80];
    int i;

    printf("Enter a string(less then 80 characters): ");
    gets(str);

    printf(str);
    printf("\n");
    printf("%s\n");
    for(i=0;str[i];i++)
    {
        printf("str[%d] = %d & %c\n",i,str[i],str[i]);
    }

*/

///using strcpy()

/*

    int s1[100],s2[100];

    /**Use strcpy() and other library function**/
    /*
        General from all uses library function:
        1. gets(string_variable_name)
        2. puts(string_variable_name)
        3. printf(string_variable_name)
        4. strcpy(to,from)  ---> Copies the content from --> to
        5. strcpy(string_variable, "string");
        6. printf(string_variable,another_string_variable) print first string variable arguments
    */

/*  gets(s1);    ///using string input
    printf(s1);   ///print s1 string
    printf("\n");  ///print newline
    strcpy(s2,s1); ///copy string s1 to s2
    printf(s2);    ///print s2 string
    strcpy(s2,"University of Rajshahi.");  ///copy University of Rajshahi to s2
    printf("\n"); ///print newline
    printf(s2);    /// print s2
    printf("\n");   ///print newline
    printf(strcpy(s1,s2)); /// copy s2 to s1
    printf("\n");   ///print newline
    printf(s1,s2);   /// print s1
    printf("\n");   ///print newline
    printf(s2,s1);    /// print s2
    printf("\n");   ///print newline
    puts(s2);        ///using puts function for string displayed

*/

 /// Using strcat()
/*
    char str1[100],str2[100],str3[200];

    ///using strcat()

    gets(str1);    ///gets str1
    gets(str2);    ///gets str2
    printf(strcat(str1,str2)); ///print str1 & str2 in same line
    printf("\n");

    printf(strcat(strcpy(str3,str1),str2));  ///first copy str1 to str3 then str3+str2
    printf("\n");

    printf(strcat(str3," I am Nahid Hassan."));
    printf("\n");
    puts(strcat(str3," sJamalpur Zilla School\n"));
    printf(str3);

*/
///using strcmp()
/*
int str1[100],str2[100];

    gets(str1);
    gets(str2);

    /**
        strcmp(str1,str2) --> It returns 0 if str1 and str2 same;
                              It returns <0 if str1<str2;
                              It returns >0 if str1>str2;
    The strings are compared lexicographically, that is in dictionary order.

    The comparison is case-sensetive, lowercase characters being greater than uppercase.
    **/

   // printf("%d\n",strcmp(str1,str2));
    //printf("%d\n",strcmp("nahid","na"));



//*/
///using strlen
/*
char name[20];

    gets(name);

    int len = strlen(name);

    printf("%d\n",len);

    char lastName[20];

    int lastNamelen = strlen(strcat(strcpy(lastName,name),name));

    printf("%d\n",lastNamelen);


*/
