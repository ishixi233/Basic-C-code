最小的数
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int i=0,a[11]={0};
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++){
		if(a[i]!=0){
			printf("%d",i);
			a[i]--;
			break;
		}
	}
	for(i=0;i<10;i++){
		while(a[i]!=0){
			printf("%d",i);
			a[i]--;
		}
	}
	printf("\n");
	
}

不同的元素
#include<stdio.h>

int main(){
	int n,t,i,j,flag=0,k=1;
	scanf("%d",&n);
	int a[100];
	int b[100]={'\0'};
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=0;i<n;i++){
		flag=0;
		for(j=0;j<k;j++){
			if(b[j]==a[i]){
				flag=1;
				break;
				
			}
			
		}
		if(!flag)
		b[k++]=a[i];
		
	}
	printf("%d",k);
	return 0;
}

矩阵的幂
#include<stdio.h>

int main(){
	int n,k,i,j,m;
	scanf("%d %d",&n,&k);
	long int a[8][8]={0},b[8][8]={0},c[8][8]={0};
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[i][j];
		}
	}
	while(--k){
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
		}
	}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				for(m=0;m<n;m++)
					c[i][j] += b[i][m]*a[m][j];
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				b[i][j]=c[i][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%ld ",c[i][j]);
		printf("\n");
	}
	return 0;
}

日期距离
#include<stdio.h>


int main()
{
	int a,b,c,x=0,y=0,t,i;
	scanf("%d/%d/%d",&a,&b,&c);
	if((a+2000)%400==0||((a+2000)%4==0&&(a+2000)%100!=0)) t=1;
	if(a>12||a==c)
	{
		switch(b)
		{ 
		case 1: printf("January");break;
		case 2: printf("February");break;
		case 3: printf("March");break;
		case 4: printf("April");break;
		case 5: printf("May");break;
		case 6: printf("June");break;
		case 7: printf("July");break;
		case 8: printf("August");break;
		case 9: printf("September");break;
		case 10: printf("October");break;
		case 11: printf("November");break;
		case 12: printf("December");break;
		}
		printf(" %d, %d\n",c,a+2000);
	}
	else if(c>30||(b==29&&c!=2)||((b==4||b==6||b==9||b==11)&&c==31)||(t==1&&b==31)||(t==1&&b==30)||(t==0&&b==31)||(t==0&&b==30)||(t==0&&b==29))
	{
		switch(a)
		{ 	
		case 1: printf("January");break;
		case 2: printf("February");break;
		case 3: printf("March");break;
		case 4: printf("April");break;
		case 5: printf("May");break;
		case 6: printf("June");break;
		case 7: printf("July");break;
		case 8: printf("August");break;
		case 9: printf("September");break;
		case 10: printf("October");break;
		case 11: printf("November");break;
		case 12: printf("December");break;
		}
		printf(" %d, %d\n",b,c+2000);
	}
	else 
	{   
	for(i=2000;i<2000+a;i++)
	{
	if(i%400==0||(i%4==0&&i%100!=0)) x+=366;
	else x+=365;
	}
	for(i=1;i<b;i++)
	{if(i==4||i==6||i==9||i==11) x+=30;
	else if(i==1||i==3||i==5||i==8||i==7||i==10||i==12) x+=31;
	else if(i==2&&((a+2000)%400==0||((a+2000)%4==0&&(a+2000)%100!=0))) x+=29;
	else x+=28;
	}
	x+=c;
	
	for(i=2000;i<2000+c;i++)
	{
	if(i%400==0||(i%4==0&&i%100!=0)) y+=366;
	else y+=365;
	}
	for(i=1;i<a;i++)
	{if(i==4||i==6||i==9||i==11) y+=30;
	else if(i==1||i==3||i==5||i==8||i==7||i==10||i==12) y+=31;
	else if(i==2&&((c+2000)%400==0||((c+2000)%4==0&&(c+2000)%100!=0))) y+=29;
	else y+=28;
	}
	y+=b;
	
	if(x>y)	printf("%d",x-y);
	else	printf("%d",y-x);
	}
}

中值滤波
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int w,n,i,a[20],b[20],c[20],k,t,m,j,x;
	char ch;
	while(ch!=EOF)
	{
	scanf("%d %d",&w,&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
			c[i]=a[i];
		}
	if(w%2==0) printf("ERROR\n");
	else
	{
		for(i=0;i<=n-w;i++)
		{
		for(x=0;x<n;x++)
		{
			a[x]=c[x];
		}
		for(j=i;j<i+w;j++)
		{
			for(k=i;k<j;k++)
			{
			if(a[k]>a[j])
		    {t=a[k];
		    a[k]=a[j];
		    a[j]=t;
		    }
			}
		}
		m=i+(w-1)/2;
		b[m]=a[m];
		}
		for(j=0;j<n;j++)
		{printf("%d ",b[j]);
		}
		printf("\n");		
	}
	ch=getchar();
}
    return 0;
}

判断直角三角形
#include<stdio.h>
#include<string.h>
void proc()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a>0&&b>0&&c>0)&&(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a))
	{
		printf("Yes\n");
	}
	else printf("No\n");
}

int main()
{
	int pro,tme;
	scanf("%d",&tme);
	for(pro=0;pro<tme;pro++)
	{
		proc();
	}
	return 0;
}

求绝对值最大的数
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	double a[20];
	int i,j,res;
	double temp;
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		scanf("%lf",&a[j]);
	}
	for(int m=0;m<j;m++)
	{
		for(int k=0;k<j-m;k++)
		{
			if(fabs(a[k])>fabs(a[k+1]))
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	 res=(int)a[j];
	 printf("%d",res);
	 
}

分解偶数
#include <stdio.h>
#include <string.h>
#include <math.h>

int fun()
{
	int n,i,m=0,a[100],j=0,count=0;
	scanf("%d",&n);
	if(n>6&&n%2==0)
	{
		for(i=2;i<n;i++)
		{
			for(j=2;j<=i-1;j++)
			{
				if(i%j==0)
				break;
			}
			if(j==i)
			{
				a[m]=i;
				m++;
			}
		}
		for(int k=0;k<m;k++)
			{
				
				for(int k1=k+1;k1<m;k1++)
				{
					if(a[k]+a[k1]==n&&a[k]%2!=0&&a[k1]%2!=0)
					{
						printf("%d %d",a[k],a[k1]);
						printf("\n");
					}
				}
			}
	}
	else
	printf("ERROR\n");
}

int main()
{
	fun();
	return 0;
}
显示柱状图
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int m,p=0,k=0,t=1,bmax=0,lmax=0,i=0,j=0,n;
	scanf("%d ",&m);
	struct sign{
		int n;
		char si;
	}s[100];
	char ch,c[50];
	for(i=0;i<50;i++){
		c[i]=0;
	}
	ch=getchar();
	i=0;
	while(ch!='\n'){
		c[i++]=ch;
		ch=getchar();
	}
	n=strlen(c);
	c[n]=' ';
	for(i=0;i<=n;i++){
		if(c[i]=='-'){
			t=-1;
			p=0;
		}
		else if(c[i]==' '){
			t=1;
		}
		if(c[i]>='0'&&c[i]<='9'){
			if(p==1){
				s[k].n=(s[k].n*10)+(c[i]-'0')*t;
			}
			if(p==0){
				s[k].n=(c[i]-'0')*t;
				p=1;
			}
		}
		else if(p==1){
			p=0;
			if(c[i]==' '){
				s[k].si='+';
				k++;
			}
			else{
				s[k].si=c[i];
				k++;
			}
		}
	}
	for(i=0;i<k;i++){
		if(s[i].n>0){
			if(s[i].n>bmax)
				bmax=s[i].n;
		}
		else{
			if(s[i].n<lmax)
				lmax=s[i].n;
		}
	}
	char a[bmax+1-lmax][m];
	for(j=0;j<m;j++){
	
			if(s[j].n>0){
			for(i=bmax-1;i>bmax-s[j].n-1;i--)
				a[i][j]=s[j].si;
			for(i=bmax+1;i<bmax+1-lmax;i++)
				a[i][j]=' ';
			for(i=0;i<=bmax-s[j].n-1;i++)
				a[i][j]=' ';
		}
		else if(s[j].n<0){
			for(i=bmax+1;i<bmax-s[j].n+1;i++)
				a[i][j]=s[j].si;
			for(i=bmax-s[j].n+1;i<bmax-lmax+1;i++)
				a[i][j]=' ';
			for(i=0;i<bmax;i++)
				a[i][j]=' ';
		}
		else{
			for(i=0;i<bmax;i++)
				a[i][j]=' ';
			for(i=bmax+1;i<bmax-lmax+1;i++)
				a[i][j]=' ';
		}
		
	
	}
	for(j=0;j<m;j++){
		a[bmax][j]='-';
	}
	for(i=0;i<bmax+1-lmax;i++){
		for(j=0;j<m;j++){
			if(i==bmax&&j!=m-1)
				printf("%c-",a[i][j]);
			else if(i==bmax&&j==m-1)
				printf("%c",a[i][j]);
			else printf("%c ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

统计回文数
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[100000],temp[200][100];
	int num[10000];
	int i =0;
	while((s[i]=getchar())!=EOF)
	{
		i++;
	}
	int len = strlen(s);
	int p =0;
		int x = 0;
	for(int i=0;i<len;i++)
	{
		
		if(s[i]>='0'&&s[i]<='9')
		{
			temp[x][p]= s[i];
			p++;
		}
		else if(s[i]<'0'||s[i]>'9')
		{
			if(p!=0)
			{
				p=0;
				x++;
			}
		}
	}
	
	int nub[10000];
	int g = 0;
    for(int i = 0;i<x;i++)
    {
    	char t[200]={0};
    	int l = 0;
    	if(strlen(temp[i])==1)
    	{
    		continue;
		}
    	for(int j = strlen(temp[i])-1;j>=0;j--)
    	{
    		t[l] = temp[i][j];
    		l++;
		}
	
        if(strcmp(t,temp[i])==0)
        {
        	nub[g] = i;
        
        	g++;
		}
	}

	int max[200]={0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(int i =0;i<g;i++)
	{
		for(int j = 0;j<g;j++)
		{
			if(strcmp(temp[nub[i]],temp[nub[j]])==0)
			{
				max[i]+=1;
			}
		}
	}
//
	int m =0;
	int ma = 0;
	for(int i=0;i<g;i++)
	{
		if(max[i]>m)
		{
			m=max[i];
			ma = i;
		}
	}
	int j=0;
	char end[100][100];
	for(int i = 0;i<g;i++)
	{
		if(max[i]==m&&temp[nub[i]][0]!='0')
		{
			int fh=0;
			for(int w =0;w<j;w++)
			{
				if(strcmp(temp[nub[i]],end[w])==0)
				{
					fh=1;
				}
			}
			if(fh==0)
			{
			strcpy(end[j],temp[nub[i]]);
			j++;
		    }
		}
	}
	
	for(int i = 0;i<j;i++)
	{
		for(int v =i+1;v<j;v++)
		{
			if(strlen(end[i])>strlen(end[v]))
			{
				char tap[1000];
				strcpy(tap,end[i]);
				strcpy(end[i],end[v]);
				strcpy(end[v],tap);
			
			}
			else if(strlen(end[i])==strlen(end[v]))
			{
				for(int h=0;h<strlen(end[i]);h++) 
				{
					if(end[i][h]>end[v][h])
					{
						char tap[1000];
				strcpy(tap,end[i]);
				strcpy(end[i],end[v]);
				strcpy(end[v],tap);
				
				break;
					}
				}
			}
		}
	}
	if(g!=0)
	{
	for(int i = 0;i<j;i++)
	{
			printf("%s %d\n",end[i],max[ma]);
	}
}
else
{
	printf("None\n");
}

}
查找字符串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void process(){
	char a[101]={0};
	int i=0,l,flag=1,counta=0,counts=0;
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;){
		if(a[i]!='A'&&a[i]!='S'){
			flag=0;
			break;
		}
		else if(a[i]=='A'){
			while(a[i]=='A'&&i<l){
			    i++;	
			}
			counta++;
		}
		else if(a[i]=='S'){
			if(a[++i]=='C'&&i<l){
				if(a[++i]=='U'&&i<l){
					counts++;
					i++;
				}
				else{
					flag=0;
					break;
				}
			}
			else{
				flag=0;
				break;
			}
		}
	}
	if((counta!=2&&counta!=1&&counta!=0)||counts!=1){
		flag=0;
	}
	if(flag==1)printf("YES\n");
	else printf("NO\n");
}

int main(int argc, char *argv[]) {
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		process();
	}
	return 0;
}

计算平均值
#include<stdio.h>
int main()
{
	int i,n,a[100];
	double b,s=0;
	scanf("%d",&n);
	if(n<=100&&n>=1)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d ",&a[i]);
			s=s+a[i];
		}
		b=s/n;
		printf("%.2f",b);
	}
	
}

计算平均值（二）
#include <stdio.h>
#include <string.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char a[100][30];
	if(n>=1&&n<=100)
	{
    	for(i=0;i<n;i++)
    	{
    		scanf("%s",a[i]);
    	}
    	int count=n;
    	for(i=0;i<n;i++)
    	{
	    	if(strcmp(a[i],"n/a")==0) count--;
    	}
    	if(count==0) printf("n/a");
	    else
	    {
		    int b[100]={0};
	    	for(i=0;i<n;i++)
	        {
	        	if(strcmp(a[i],"n/a")==0) continue;
	        	else if(a[i][0]=='-')
	        	{
	        		for(int j=1;j<strlen(a[i]);j++)
	        		    b[i]=b[i]*10+a[i][j]-'0';
	        		b[i]=-b[i];
	        	}
	        	else
	        	{
	        		for(int j=0;j<strlen(a[i]);j++)
	        		    b[i]=b[i]*10+a[i][j]-'0';
	        	}
    	    }
        	double sum=0;
        	for(i=0;i<n;i++)
        	{
    	    	sum=sum+b[i];
        	}
          	printf("%.2lf",sum/count);
	     }
    }
	return 0;
}

成绩排名
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	struct student
	{
		char name[11];
		char id[19];
		char s[4];
		int score;
	}stu[100];
	int n,i;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%s",stu[i].name);
		scanf("%s",stu[i].id);
		scanf("%s",stu[i].s);
	}
	for(i=0;i<n;i++)
	{
		stu[i].score=0;
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(stu[i].s,"n/a")==0)
		{
			stu[i].score=-1;
		}
		else
		{
			for(int j=0;j<strlen(stu[i].s);j++)
			    stu[i].score=stu[i].score*10+stu[i].s[j]-'0';
		}
	}
	int max,min;
	for(i=0;i<n;i++)
	{
		if(stu[i].score!=-1)
		{
			max=stu[i].score;
			min=stu[i].score;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].score!=-1)
		{
		    if(stu[i].score>max)
	    	{
	    		max=stu[i].score;
	    	}
	    	if(stu[i].score<min)
	    	{
	    		min=stu[i].score;
	    	}
	    }
	}
	int high[100],low[100];
	int j=0,k=0;
	for(i=0;i<n;i++)
	{
		if(max==stu[i].score)
		{
			high[j]=i;
			j++;
		}
		if(min==stu[i].score)
		{
			low[k]=i;
			k++;
		}
	}
	int mark1=high[0],mark2=low[0];
	for(i=0;i<j;i++)
	{
		if(strcmp(stu[high[i]].name,stu[mark1].name)<0) mark1=high[i];
	}
	for(i=0;i<k;i++)
	{
		if(strcmp(stu[low[i]].name,stu[mark2].name)>0) mark2=low[i];
	}
	printf("%s %s\n",stu[mark1].name,stu[mark1].id);
	printf("%s %s",stu[mark2].name,stu[mark2].id);
	return 0;
}

查找成绩排名
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	struct stu
	{
		char name[15];
		char num[18];
		char gra[5];
		int grade;
		int rank;

	}a[105],tem;
	int n,i=0,j=0,l=1,k,m,x,y,count=0,flag=0,q;
	char s[20];
	scanf("%d",&n);
	scanf("%s",s);
	while(i<n)
	{
		a[i].grade=0;
		scanf("%s",a[i].name);
		scanf("%s",a[i].num);
		scanf("%s",a[i].gra);
		if(strcmp(a[i].gra,"n/a")==0)
		{
			a[i].grade=-1;	
		}
		else
		{
			m=strlen(a[i].gra);
			for(k=0;k<m;k++)
			{
				a[i].grade=a[i].grade*10+a[i].gra[k]-'0';
			}
		}
		i++;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].grade>a[j+1].grade)
			{
				tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}
		}
	}
    
	for(i=n-1;i>=0;i--)
	{
		a[i].rank=l;
		if(a[i].grade==a[i-1].grade)
		{
			count++;
		}
		else
		{
		    l=l+count+1;
			count=0;	
		}
	}
	k=0;
	y=strlen(s);
	for(i=0;i<n;i++)
	{
		x=strlen(a[i].name);
		for(j=0;j<y;j++)
		{
			while(k<x)
			{
				if(s[j]==a[i].name[k]) 
				{flag++;k++;break;}
				k++;
			}
			
		}
	    if(flag==y)
	    {
	    	if(a[i].grade!=-1)
	    	{
			   printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s %d\n",a[i].gra,a[i].rank);
			}
	    	else
	    	{
	    		printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s n/a\n",a[i].gra);
	    	}
	    }
	    flag=0;
	    k=0;
	}
	for(i=0;i<n;i++)
	{
		x=strlen(a[i].num);
		for(j=0;j<y;j++)
		{
			while(k<x)
			{
				if(s[j]==a[i].num[k]) 
				{flag++;k++;break;}
				k++;
			}
			
		}
	    if(flag==y)
	    {
	    	if(a[i].grade!=-1)
	    	{
			   printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s %d\n",a[i].gra,a[i].rank);
			}
	    	else
	    	{
	    		printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s n/a\n",a[i].gra);
	    	}
	    }
	    flag=0;
	    k=0;
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i].gra,s)==0)
	    {
	    	if(a[i].grade!=-1)
	    	{
			   printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s %d\n",a[i].gra,a[i].rank);
			}
	    	else
	        {
			   printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s n/a\n",a[i].gra);
			}
	    }
	}
	return 0;
}

