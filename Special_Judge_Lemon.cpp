#include<fstream>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
using namespace std;
ofstream fscore,freport;
ifstream fin,fout,fstd;
int this_point;

string mainception;
string acep;
void Judge()
{
	getline(fout,mainception);
	getline(fstd,acep);
	if(acep!=mainception)
	{
		freport<<"人名都错了，你怎么算的？\n正确答案是“"<<acep<<"”\n而你却输出了“"<<mainception<<"”";
		fscore<<0<<endl;
	}
	else
	{
		getline(fout,mainception);
		getline(fstd,acep);
		if(acep!=mainception)
		{
			freport<<"名字对了，但是计算出了错误。\n正确答案是“"<<acep<<"”\n而你却输出了“"<<mainception<<"”\n"<<endl<<"看在你对了一点的份上就给你1分好了。";
			fscore<<1<<endl;
		}
		else
		{
			fscore<<this_point<<endl;
			freport<<"完全正确，无可挑剔。"<<endl;
		}
	}
}
int main(int argc,char *argv[])
{
	//put something to fstreams...
	/*
	argv[1]:输入文件
	argv[2]:选手输出文件 
	argv[3]:标准输出文件 
	argv[4]:单个测试点分值 
	argv[5]:输出最终得分的文件 
	argv[6]:输出错误报告的文件 
	*/
	fin.open(argv[1]);
	fout.open(argv[2]);
	fstd.open(argv[3]);
	fscore.open(argv[5]);
	freport.open(argv[6]);
	this_point=atoi(argv[4]);
	
	
	Judge();

	
	//close files.
	fin.close();
	fout.close();
	fstd.close();
	fscore.close();
	freport.close();
	return 0;
}
