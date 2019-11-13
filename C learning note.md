# C语言学习笔记

***
>* 文件尾条件:EOF  
用法:cin.fail()/cin.eof()  
检测到EOF后cin将后两位(eofbit和failbit)都设置为1.  
可以通过成员函数eof()来查看eofbit是否被设置;  
如果监测到EOF,则cin.eof()将返回bool值true,否则返回false.
同样,如果eofbit或failbit被设置为1,则fail()成员函数返回true,否则返回false.
***
