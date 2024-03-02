//write aprogram to search a particular word form paragraph;
#include<stdio.h>
#include<string.h>
int main(){
    char s2[200];
    char s3[200];
    scanf("%[^\n]",s2);
    char s1[]="IIITK started its functioning in June, 2015 in Amal Jyothi College of Engineering, Kerala as its temporary campus under the mentorship of NIT Calicut. In December 2016, the mentorship of IIITK has been moved to IISER Thiruvananthapuram and the transit campus was shifted to Gulati Institute of Finance and Taxation (GIFT) campus at Thiruvananthapuram.[4] IIITK started functioning in its permanent campus which was officially inaugurated by Shri Prakash Javadekar, Honorable Human Resource Minister on 20 February 2019 through video conferencing";
   int i=0;
   int j;
   int count=0;
    while(s1[i]!='\0'){
        j=0;
        while(s1[i]!=' '&&s1[i]!='\0'){
            s3[j]=s1[i];
            i++;
    
            j++;
        }
        s3[j]='\0';
       
        if(strcmp(s2,s3)==0){
            count++;
        }
        i++;
        


    }
    printf("%d",count);

    
    
    return 0;
}