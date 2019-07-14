# C语言学习笔记--day 1
***
>* 文件尾条件:EOF 
用法1:cin.fail()
检测到EOF后cin将后两位(eofbit和failbit)都设置为1.可以通过成员函数eof()来查看eofbit是否被设置;如果监测到EOF,则cin.eof()将返回bool值true,否则返回false.同样,如果eofbit或failbit被设置为1,则fail()成员函数返回true,否则返回false.

>* 例:

'''c/c++
  #include<iostream>
int main()
{
  using namespace std;
  char ch;
  int count = 0;
  cin.get(ch);
  while(cin.fail() == false)
  {
    cout << ch;
    ++count;
    cin.get(ch);
  }
  cout << endl << count << " characters read\n";
  return 0;
}
'''
