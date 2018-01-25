#include<stdio.h>
#include<math.h>
#include<windows.h>
#include <mmsystem.h>
#include<time.h>
#pragma comment(lib, "Winmm.lib")   
//自定义闹钟(输入小时和分钟)
void MekeaterAlarmclock(int dfhour,int dfminute)
{
    int hour,minute;
    time_t timep;  
    struct tm *p;  
	printf("now time is sleeping...\n");
	while(1==1)
	{
    if(hour==dfhour&&minute==dfminute)
	{
    printf("now time is working\nnow time is %d : %d",hour,minute);
	//绝对地址形式
    TCHAR fileName[]="F:\\AlwaysOnline.mp3";
    TCHAR shortName[MAX_PATH];
    GetShortPathName(fileName,shortName,sizeof(shortName)/sizeof(TCHAR));
    TCHAR cmd[MAX_PATH+10];
    wsprintf(cmd,"play %s",shortName);
    mciSendString(cmd,NULL, 0, NULL);
    Sleep(5 * 60 * 1000); //这里是防止一播放就结束做的延迟
	break;
	}
	time(&timep);  
    p =localtime(&timep); //此函数获得的tm结构体的时间，是已经进行过时区转化为本地时间
	hour=p->tm_hour;
    minute=p->tm_min;
	}
}
int main()
{
	//C输入输出练习
    /*int grade1,grade2;
	printf("Please input the first student's grade:");
 
    scanf("%d",&grade1);

	printf("Please input the second student's grade:");

	scanf("%d",&grade2);

	if (grade1>grade2)
		printf("the first student's grade is higher,it is %d\n:",grade1);
	else if (grade1==grade2)
		printf("these student's grade is same,it is %d\n:",grade2);
	else 
		printf("the second student's grade is higher,it is %d\n:",grade2);*/

    //C数据类型存储空间大小
	/*printf("The Length of Char is %d\n",sizeof(char));
	printf("The Length of short is %d\n",sizeof(short));
	printf("The Length of Int is %d\n",sizeof(int));
    printf("The Length of long is %d\n",sizeof(long));
	printf("The Length of float is %d\n",sizeof(float));
	printf("The Length of double is %d\n",sizeof(double));*/

	//轮流交换三个整形变量的值
	/*int a,b,c,d;
	printf("Please input the first num: a=");
	scanf("%d",&a);
	printf("Please input the second num: b=");
	scanf("%d",&b);
	printf("Please input the third num: c=");
	scanf("%d",&c);
	printf("\nthe a,b,c is part of: a=%d,b=%d,c=%d\n",a,b,c);
	printf("\nthe first change position a and b,which is the result :\n");
	d=a;
	a=b;
	b=d;
	printf("\nthe a,b,c is part of: a=%d,b=%d,c=%d\n",a,b,c); 
	printf("\nthe second change position b and c,which is the result :\n");
    d=c;
	c=b;
    b=d;
    printf("\nthe a,b,c is part of: a=%d,b=%d,c=%d\n",a,b,c); 
    printf("\nthe third change position a and c,which is the result :\n");
    d=c;
	c=a;
    a=d;
    printf("\nthe a,b,c is part of: a=%d,b=%d,c=%d\n",a,b,c); */

	//单目运算符<优先级比较高，高于任何双目或三目运算符>（++和--），在变量前先增值再赋值，在变量后先赋值后增值
	/*int year1 =18,year2 =18,yearRst1,yearRst2;
	yearRst1=++year1;
	yearRst2=year2++;
	printf("only one operator  at the front year is %d\n",yearRst1);
	printf("only one operator  at the back year is %d\n",yearRst2);*/
    
	//C语言的优先级和结合性 (?:三目运算符)
	/*int x = 3;  
    int y = 2;  
    int z = x > y ? 100 : ++y > 2 ? 20 : 30;  // int z = x > y ? 100 : (++y > 2 ? 20 : 30);  
    printf("the result is %d\n",z);*/
	//自反赋值运算符（+=，-=，*=，/=，%=）<左结合性>（与赋值运算符<右结合性>的优先级一样，优先级比较低，只比逗号运算符的优先级高）
	/*int grade=6;
	grade*=2+3;//grade*=(2+3);
    printf("the result is %d\n",grade);*/

	//逗号运算符(左结合性，优先级比赋值运算符还要低)
	/*int a=2,b=3,c=a+b;
    printf("the result is %d\n",c);*/
    
	/*格式字符
   （%d<用于输出十进制整数>，%x<用于输出十六进制整数>，%o<用于输出八进制整数>，%u<用于输出无符号十进制整数>）
    %c<用于输出字符>，%s<用于输出字符串>，%f<用于输出小数形式表示的浮点数>，%e<用于输出指数形式表示的浮点数>*/

	//输入函数的是永恒
	/*int a,b,c;
	printf("please input your num:\n");
	scanf("%d,%d,%d",&a,&b,&c);//输入的三个数字用逗号隔开(默认用空格或者回车隔开);
	printf("a=%d,b=%d,c=%d\n",a,b,c);*/

	//输入字符串
	/*char ch1,ch2;
	printf("please input a char: ");
	ch1=getchar();
	ch1-='a'-'A';
    printf("the result is: ");
	putchar(ch1);
	printf("\n");*/

	//大写字母转小写字母
	/*char ch1;
    printf("please input a char: ");
	ch1=getchar();
	ch1+=32;
	printf("output a char: ");
	putchar(ch1);
    printf("\n");*/

    //常用数学函数 平方根函数：sqrt(x);绝对值函数：fabs(x);幂函数x^n：pow(x,n);指数函数e^x: exp(x);对数函数lnx:log(x);
    /*int year,money;
	float rate,sum;
    printf("please input a years ,saving your money: ");
	scanf("%d",&year);
	printf("please input a num ,saving your money: ");
	scanf("%d",&money);
	printf("please input a rate ,saving your money: ");
	scanf("%f",&rate);
	sum=money*pow(1+rate,year);
    printf("please input a sum ,saving your money: %f\n",sum);*/

    //代码实现如下图形
    /*  *
       ***
      *****  */
    /*printf("  *\n");
	printf(" ***\n");
	printf("*****\n"); */
    //输入三个值求其平均值
    /*int a,b,c;
	double avg;
    printf("please input three nums:\n");
	scanf("%d%d%d",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("the result is %f:",avg);
	printf("\n");*/
    //求圆的面积
    /*printf("please input radius:\n");
	float radiu,area,pi=3.14;
	scanf("%f",&radiu);
    area=pi*pow(radiu,2);
	printf("the circle area is %f\n",area);*/

    //输入出生输出年龄
    /*int yearOfborn,year;
    printf("please input your year of born: ");
	scanf("%d",&yearOfborn);
	year=2018-yearOfborn;
	printf("your year is %d",year);
	printf("\n");*/
    
    //求两个数的加减乘除余
    /*printf("please input two nums:\n");
	float num1,num2;
	scanf("%f%f",&num1,&num2);
	printf("add is: %f",num1+num2);
    printf("\nReduction is: %f",num1-num2);
    printf("\nmultiplication is: %f",num1*num2);
    printf("\ndivision is: %f",num1/num2);
    printf("\remainder is: %f",num1%num2);
    printf("\n");*/
    
    //关系运算符（左结合性）
    /*int tf=0.2<0.5<1;
    printf("%d",tf);*/

    //逻辑运算符&&、||、！（左结合性）
    //条件运算符 e1?e2:e3;
    //输出两个整数的最大者
    /*int num1,num2,max;
    printf("please input two number: ");
	scanf("%d%d",&num1,&num2);
    max=num1>num2?num1:num2;
	printf("the more big num is : %d",max);
	printf("\n");*/
    
    //条件语句判断num是否为3或5的倍数
    /*int num;
	printf("please input one number: ");
    scanf("%d",&num);
	if(num%3==0||num%5==0)
	    printf("the number is the multiple of 3 or 5\n");
	else 
		printf("the number isn't the multiple of 3 or 5\n");*/
    
    //成绩分级
    /*int grade,condition=0;
    while(condition==0)
	{
    char ch='A';
    printf("please input a student grade:\n");  
	scanf("%d",&grade);
	if(grade<90)
	{
		if(grade>=80)
			ch='B';
		else if(grade>=70)
			ch='C';
		else if(grade>=60)
			ch='D';
		else
			ch='E';
	}
    printf("the student class of grade is %c",ch);
	printf("\n");
	printf("please input condition, which 0 is continue and 1 is end:\n");
	scanf("%d",&condition);
	}
    printf("end your class of grade\n");*/
    
    //输入一个字符判断其实空格数字还是其他字符
    /*char ch;
    printf("please input a char :\n");
	ch=getchar();
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		printf("the char is a character\n");
	else if(ch>='0'&&ch<='9')
        printf("the char is a number\n");
	else
		 printf("the char is a tab\n");*/
    //输入一串字符统计数字空格和其他字符的个数
    /*char ch;
	int num=0,character=0,tab=0,i;
    printf("please input a char\n");
	while((ch=getchar())!='\n')
	{
		if(ch==32)
			i=0;//空格
		else if(ch>'0'&&ch<'9')
			i=1;//数字
		else 
			i=2;//其他字符
		switch(i)
		{
		case 0:tab++; break;
		case 1:num++; break;
		case 2:character++; break;
		}
	}
	printf("there are %d number and %d tab and %d character",num,tab,character);*/
    
    //来个闹钟提醒自己吧
    //MekeaterAlarmclock(10,17);

    //从键盘上输入一个整数，输出该数字的位数
    /*int num,i=0;
    printf("please input a number\n");
	scanf("%d",&num);
	while(num%10!=0)
	{
        i++;
		num=num/10;
		printf("the number,missing a last bite,is : %d",num);
		printf("\n");
	}
	printf("the number bite is : %d\n",i);*/

    //输入一批学生成绩，计算其平均值，并统计不及格的人数
    /*int score[100],i,j=0,sum=0,flag=0;
	float avarage=0;
	printf("are you continue to put student's score,which input else num if you don't continue and input -1 \n");
	do
	{
		printf("please input student's score\n");
		scanf("%d",&score[j]);
		i=score[j];
		j++;
	}while(i!=-1);
	printf("put student's score are the follows:\n");
	for(int k=0;k<j;k++)
	{
		printf("%d ",score[k]);
        sum+=score[k];
		if(score[k]<60)
			flag++;
	}
	printf("\n");
	avarage=sum/j;
    printf("put student's avarage of score is : %f, all students are %d and score<60 have %d 人\n",avarage,j,flag);*/
    
    //break（整个循环终止）和continue（当前一次循环终止）的用法
    //求1-10的偶数项之和
    /*int sum=0;
    for(int i=0;i<20;i++)
	{
		if(i%2!=0)
			continue;
		if(i>10)
			break;
		sum+=i;
	}
	printf("the sum of even number is %d\n",sum);*/
   
    //goto语句称为无条件转向语句
    /*int i=0;
    flag:printf("please perform the task1\n");
    printf("please perform the task2\n");
	if(i<1)
	{
		i++;
		goto flag;
	}*/

    //判断输入的正整数是否为素数(又称为质数：除了1和它本身外，不能被其他数整除)
    /*int num;
    printf("please input a number num:");
	scanf("%d",&num);
	printf("your number is num=%d\n",num);
    for(int i=2;i<=num-1;i++)
		if(num%i==0)
			break;
	if(i==num)
		printf("the number that you have input is 质数\n");
	else
		printf("the number that you have input is not 质数\n");*/

    //输出100-200之间的所有素数
    /*printf("printf the 素数 all of the number from 100 to 200\n");
	int num=0;
	for(int i=100;i<=200;i++)
	{
		for(int j=2;j<=i-1;j++)
			if(i%j==0)
				break;
	    if(j==i)
			printf("%d ",i);
	}
    printf("\n");*/

    //输出200以内所有个位数为3且可被3整除
    /*int num;
	printf("num=");
	scanf("%d",&num);
	printf("最后一位数字:%d\n",num%10);
	printf("剩余数字:%d\n",num/10);*/
    
	/*for(int num=0;num<=200;num++)
	{
		if(num%10==3&&(num/10)%3==0)
			printf("%d ",num);
	}
	printf("\n");*/

    //求输入的任意两个数字n和m的最小公倍数和最大公约数

    //编程实现2/1+3/2+5/3+8/5+...前100相是和，保留两位小数(int 大小不够存储怎么办??)
    /*float sum=0;
	float num;
	int fm=2,fz=1,n;
	printf("%d/%d + ",fm,fz);
	for(int i=0;i<9;i++)
	{
		num=fm/fz;
		sum+=num;
        n=fm;
		fm=fm+fz;
		fz=n;
	    if(i==8)
			printf("%d/%d ",fm,fz);
		else
			printf("%d/%d + ",fm,fz);
	}
	printf("=%.2f\n",sum);*/

    //猴子吃桃问题,总共n个桃子，它每天这样吃桃子:(n/2+2) + ((n/2+2)/2+2) +(((n/2+2)/2+2)/2+2) +...第16天只剩下三个桃子,求n
    /*int sum=0,num,iftotle=32,totle=31;
    do
	{
		totle++;
		for(int i=0;i<16;i++)
		{
			num=(iftotle/2)+2;
			iftotle-=num;
			sum+=num;
		}
		printf("%d\n",totle);
	}while(totle!=sum+3);
	printf("The monkey pick %d taozi",totle);
	printf("\n");*/

    //输出所有三位数的各位数字的立方和等于其本身，例如153
    /*int ps1,ps2,ps3,sum=0;
    for(int i=100;i<10000;i++)
	{
		ps3=i%10;
		ps2=(i/10)%10;
		ps1=(i/100)%10;
		sum=pow(ps1,3)+pow(ps2,3)+pow(ps3,3);
		if(sum==i)
			printf("%d ",i);
	}
	printf("\n");*/


	return 0;
}
