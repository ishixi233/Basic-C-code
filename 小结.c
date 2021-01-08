 #include<stdio.h>
 #include<string.h>
 //C语言简单逻辑符，令牌，语句总结
 //Nicholas S
 // 2020 12 28
 int main 
 int/*整数指示*/ 
 float/*双精度指示变量*/
 void /*无类型（尤其指针）*/
 
 printf("something, %d\n",sth);
 scanf("%d",&a)
 
 //数值运算符 
 +, -, *, /, % /*取模*/
 a++ /*先赋值后自加*/ 
 
 //关系运算符
 == //相等则为真
 != //不相等则为真
 >, <, >=, <= 
 
 //逻辑运算符
 && //且，二者皆为一则为真
 || //或，二者其一为一则为真 
 !  //非
 
//位运算符
 &, |, ^, ~, <<, >>

//赋值运算符
 = //左给右
 += // C += A equals to C = C + A 
 
//杂项运算符
 sizeof() //返回变量大小
 & //返回变量地址，如&a
 * //指向变量（指针）
 ?: // 若为真 ? 则值为 X : 否则值为 Y

 //一个小语句：换位置 
   a = a ^ b ;
   b = a ^ b ; 相当于 b1 = (a ^ b) ^ b 
   a = a ^ b ; 相当于 a1 = (a ^ b) ^ [a ^ b) ^ b]
   或用： a ^= b ^= a ^= b; 

  括号成员是老大;      // 括号运算符 []() 成员运算符.  ->
  全体单目排老二;      // 所有的单目运算符比如++、 --、 +(正)、 -(负) 、指针运算*、&
  乘除余三,加减四;    // 这个"余"是指取余运算即%
  移位五，关系六;     // 移位运算符：<< >> ，关系：> < >= <= 等
  等与不等排行七;     // 即 == 和 !=
  位与异或和位或;     // 这几个都是位运算: 位与(&)异或(^)位或(|)    
  三分天下八九十;  
  逻辑与，逻辑或;    // 逻辑运算符: || 和 &&
  十一十二紧挨着;    // 注意顺序: 优先级(||)  底于 优先级(&&) 
  条件只比赋值高,    // 三目运算符优先级排到 13 位只比赋值运算符和 "," 高
  逗号运算最低级!    //逗号运算符优先级最低 */

//判断 
condition ? true : false;//三元运算符 

switch(表达式)//switch之后表达式会自动取整 
 {
    case 常量表达式1 : 语句1; // 若需要跳出，需要 break； 
    case 常量表达式2 : 语句2;
    ...
    default:语句n+1;
 } 

if()
{ 
   if()
   { }
   else
   { } 
}
else
 { }
 
//循环   ctrl+C可以终止循环 
for 循环中; 永远不能省略 
 
//函数
  int max(int a, int b);
  //在代码最后声明 
  int max(int a, int b)
  {
  	if (a > b)
	  num = a;
	else
	  num = b;
	return (num);
  }
  //无参函数
  void a();
  void a()
  {
  	printf("Handsome Nicholas\n")
  }
  
//数组
a[10] = {1, 2, 3, 4} 
  //二维数组逻辑上是线性的
     a[0] 、a[1]...a[i] 代表的都是值，
     a、(a+0)、(a+1)、(a+i) 代表的是地址；
     另外这里的 a 代表整个数组的首地址，相当于 a[0] 的地址，
     而这里 (a+1) 就代表的是 a[0+1] 的地址。
     正如文章中提到的：所有的数组都是由连续的内存位置组成。
     最低的地址对应第一个元素，最高的地址对应最后一个元素，
	 即是说 (a+i) 就代表的是 a[0+i] 的地址。 
  //数组 地址符：&
     scanf("%c", &name[i]); scanf("%s", name);
     name[i] = getchar(); putchar(name[i]);
     gets(name); puts(name); /* strlen函数：返回数组的实际长度（不包括\0）*/  
	 
//指针（p是一个地址变量，*p是数值） 
    *表示从地址指到其中的数值
	  &表示从数值返回地址（地址符） 
	  int *p = NULL; //空指针 

    函数声明： 数组名[][某数] → *p
	  函数解释： 数组名[i][j] →* (p + i*列数 + j) 
    函数使用： 数组名 → *数组名

	  例如：a[3][4] 中的 a[i][j]→*(p + i*4 + j)
    可以定义指向行变量的指针  
    指针定义的形参和实参（形参是指针变量，实参是数组名）int (*p)[3];(指针指向二维数组行变量)
    指针指函数 int (*p)(int x, int y)

    指针 = &值  / p = &a[i] = a+i ;
    值 = *指针  / *p = a[]

//结构体
 例如：struct student
    {
     int stunumber;
     char name;
     char gender;
     float score;
    };//注意分号
     struct student a = { 001, "Nicolas", "male", 100 };
    // or } a= { 001, "Nicolas", "male", 100 };
     a.stunumber = 001;
     a.name = Nicolas;
     a.gender = male;
     a.score = 100;
     //}student[i] = {...};也是可行的

//字符串
   1	strcpy(s1, s2);
   复制字符串 s2 到字符串 s1。
   2	strcat(s1, s2);
   连接字符串 s2 到字符串 s1 的末尾。
   3	strlen(s1);
   返回字符串 s1 的长度。
   4	strcmp(s1, s2);
   如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。
   5	strchr(s1, ch);
   返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
   6	strstr(s1, s2);
   返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。
  本节涉及函数英文全称
   strcmp: string compare   //字符串大小比较
   strcat: string catenate  //字符串连接
   strcpy: string copy      //字符串复制
   strlen: string length    //字符串长度
   strlwr: string lowercase //小写
   strupr: string upercase  //大写

   'a' 表示是一个字符,
   "a" 表示一个字符串相当于 'a'+'\0';
   '' 里面只能放一个字符;
   "" 里面表示是字符串系统自动会在串末尾补一个\0。
   向字符串赋值：
   char CHAR
   strcpy(CHAR, "char in");//需要#include <string.h>
   
   字符串遍历：
   char hi[] = "hello";
   for 遍历：
   for(i==0, i<6,i++)
   {
    printf("%c",hi[i]);
   }
   直接输出：
   printf(hi);
   字符串格式（%s）输出：
   printf("%s",hi);

//共用体
  union Data
  {
    int i;
    float f;
    char string[20];
  } data ;
   data.i = 10
   printf( "data.i : %d\n", data.i);
  
//typedef和#define
    typdef 的一些特性与 define 的功能重合。例如：
   #define BYTE unsigned char
   这是预处理器用 BYTE 替换 unsigned char。
   但也有 #define 没有的功能，例如：
   typedef char * STRING;
   编译器把 STRING 解释为一个类型的表示符，该类型指向 char。因此：
   STRING name, sign;
   相当于：
   char * name , * sign;  
   但是，如果这样假设：
   #define STRING char *
   然后，下面的声明：
   STRING name, sign;
   将被翻译成：
   char * name, sign;
   这导致 name 才是指针。
   简而言之，#define 只是字面上的替换，由预处理器执行，#define A B 相当于打开编辑器的替换功能，把所有的 B 替换成 A。
   与 #define 不同，typedef 具有以下三个特点：
   1.typedef 给出的符号名称仅限于对类型，而不是对值。
   2.typedef 的解释由编译器，而不是预处理器执行。并不是简单的文本替换。
   3.typedef 虽然范围有限，但是在其受限范围内 typedef 比 #define 灵活。

//占位符
   short/int : %d
   long: %ld (long 是 int 得修饰，不能算是一种单独的数据类型，只是比 int 多了四个字节的存储空间)
   long long : %lld
   char : %c
   float/double : %f float 默认是 6 位小数输出；可以在 %f 中控制；例如：%.2f：输出两位小数。
   char *s(字符串) ：%s
   unsigned: %u (signed:有符号类型， unsigned：无符号类型；默认都是有符号的)
   八进制：%o 以 0 开头
   十六进制：%x 以 0x 开头
        int n = 10;
        printf("n的八进制输出是：%o \n", n);//输出是12
        printf("n的十六进制输出：%x \n", n);//输出是a
   地址值/指针值：%p，* 取指针里地址指向的地方的值，& 取改值存储位置的地址值。
   二进制的输出没有占位符，只能通过其他方法。

//宏定义
__DATE__	当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
__TIME__	当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
__FILE__	这会包含当前文件名，一个字符串常量。
__LINE__	这会包含当前行号，一个十进制常量。
__STDC__	当编译器以 ANSI 标准编译时，则定义为 1。