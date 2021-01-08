/*描述
判断字符串是否满足要求。如果字符串满足以下要求之一的字符串输出YES，否则输出NO：
1. 字符串等于“SCU”；
2. 形如“xSCUx”的字符串,其中x是仅由字母A组成的字符串；
输入
每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。
输出
每个字符串的检测结果占一行，如果该字符串满足条件，则输出YES，否则输出NO。*/
#include<stdio.h>
#include<string.h>
  int main()
{
    int n,i;
    scanf("%d",&n);
   for( i=0; i<n; i++ ) 
  {
     char str[100] = {'\0'};
       scanf("%s",str);
     int len = strlen(str);
     if (len < 3)
       {printf("NO\n");}
     else if (len == 3)
       {strcmp(str,"SCU") == 0 ? printf("YES\n") : printf("NO\n") ;}
     else
     {
         int XSCUX = 0;
         for(int i1=0; i1 < len; i1++ )
       {
          if (str[i1] == 'S'&&str[i1+1] == 'C'&&str[i1+2] == 'U')
         {
          XSCUX = i1;
          break;
         }

      }
         	int len_qian = XSCUX,hou = XSCUX + 3;
			int len_hou = len - hou;
			if(len_qian != len_hou)
				printf("NO\n");
			else{
				int state1 = 0,state2 = 0; 
				for(int i=0;i<len_qian;i++)
					if(str[i] != 'A')
                    {
						state1 = 1;
						break;
					}
				for(int i=hou;i<len_hou + hou;i++)
					{
                        if(str[i] != 'A')
                      {
						state2 = 1;
						break;
					  } 
				    
                    }
                if(state1 == 0 && state2 == 0)
					printf("YES\n");
                else
                {
                    printf("NO\n");
                }
                
                }
     }
   }
   return 0;
}
    

