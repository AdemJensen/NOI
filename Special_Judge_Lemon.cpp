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
		freport<<"���������ˣ�����ô��ģ�\n��ȷ���ǡ�"<<acep<<"��\n����ȴ����ˡ�"<<mainception<<"��";
		fscore<<0<<endl;
	}
	else
	{
		getline(fout,mainception);
		getline(fstd,acep);
		if(acep!=mainception)
		{
			freport<<"���ֶ��ˣ����Ǽ�����˴���\n��ȷ���ǡ�"<<acep<<"��\n����ȴ����ˡ�"<<mainception<<"��\n"<<endl<<"���������һ��ķ��Ͼ͸���1�ֺ��ˡ�";
			fscore<<1<<endl;
		}
		else
		{
			fscore<<this_point<<endl;
			freport<<"��ȫ��ȷ���޿����ޡ�"<<endl;
		}
	}
}
int main(int argc,char *argv[])
{
	//put something to fstreams...
	/*
	argv[1]:�����ļ�
	argv[2]:ѡ������ļ� 
	argv[3]:��׼����ļ� 
	argv[4]:�������Ե��ֵ 
	argv[5]:������յ÷ֵ��ļ� 
	argv[6]:������󱨸���ļ� 
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
