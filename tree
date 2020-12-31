#include <iostream>
using namespace std;

class Integer
{
	public:
		Integer(int i); //构造函数由用户给出初始值 
		Integer add(Integer i1,Integer i2)	//整型对象行为：相加 
		{
		this->value=i1.value+i2.value;	//两个整型对象的value赋给调用add函数对象的value 
		return(*this);		//返回this指针所指的对象值 
		}
		void showint()		// 整型对象行为：查询 
		{
			cout<<value;
		}
	private:
		int value;
	
};
Integer::Integer(int i)
{
	value=i;
}
int main()
{
	int a,b;
	cout<<"请输入两个整数"<<endl;
	cin>>a>>b; 	//用户输入数据 
	Integer i1(a);
	Integer i2(b);
	Integer i3(0);
	cout<<"整型对象一为";i1.showint();cout<<endl;
	cout<<"整型对象二为";i2.showint();cout<<endl;
	i3.add(i1,i2);
	cout<<"两整型对象和为";i3.showint();
	return 0;
}


/*class tree
{
	public:
		tree();				//构造函数用于初始化树龄 ，并且已经给出默认值 
		tree(int a); 	//构造函数用于初始化树龄，由用户给出初始值 
		void setage(int y)	//tree类的行为：用于获取生长年限
		{
			year=y; 
		}					
		int grow()					//tree类的行为：用于计算其y年后年龄
		{
		return age+year;
		}			 
	private:
		int age;			//tree的属性：初始年龄	
		int year;			//tree属性：生长年限 
};
tree::tree()
{
	age=1;
}
tree::tree(int a)
{
	age=a;
}
int main()
{
	int i,y,t;
	cout<<"是否需要自主输入初始树龄，需要请输入1否则输入0:"<<endl;
	cin>>i;
	if(i!=0)
		{
		cout<<"请输入初始树龄"<<endl;
		cin>>i; 
		tree t1(i); 
		cout<<"请输入树的生长年限"<<endl;
		cin>>y; 
		t1.setage(y);
		t=t1.grow();
		cout<<"树当前年龄为"<<i<<",在"<<y<<"年后年龄为"<<t<<endl; 
		}
	else
		{
		tree t1;
		i=1;
		cout<<"请输入树的生长年限"<<endl;
		cin>>y; 
		t1.setage(y);
		t=t1.grow();
		cout<<"树当前年龄为"<<i<<",在"<<y<<"年后年龄为"<<t<<endl;  
		} 
	return 0;
}*/ 