# mysql数据库介绍

## 1.1 mysql简介
    1.什么是mysql?
    mysql是一个开源的关系型数据库管理系统，现在是Oracle公司旗下的一款产品，  
    由C/C++编写，可移植性高，支持在多种操作系统安装，  
    最常见由AIX,linux,windows。mysql因为开源免费，所有受到了目前互联网行业的欢迎。  
    以mysql作为数据库，linux系统作为操作系统，apache或者nginx作为web服务器，  
    Perl/PHP/python作为服务端的脚本解释器，  
    就可以搭建一个免费的网站。被业界称为LNMP或LAMP。
    
    
    
## 2.1 mysql的核心知识之服务管理
    简介：mysql的service服务管理与登录管理
    
    查看mysql登录进程：ps -ef | grep mysql
    
    service服务管理：cp -a mysql.server /etc/rc.d/init.d/mysql
    启动命令：service mysql start
    关闭命令：service mysql stop
    重新启动命令：service mysql restart
    查看状态命令：service mysql status
    
    登录管理：ln -s /usr/local/mysql/bin/* /bin
    登录命令：mysql -uroot -p
    
    默认端口号：3306
    配置文件： /etc/my.cnf
    
## 2.2 mysql的命令行登录和图形界面登录



## 2.3 mysql的库表深入解析
    简介：mysql数据库的基本概念详解
    （1）什么是库？
    数据仓库
    mysql数据库：实质上十一个关系型数据服务管理系统
    
    （2）什么是表？
    数据库：database
    数据表：table
    字段（列）：column
    行：row
    
    
## 2.4 mysql的sql各类语句
    简介：mysql的操作语句分类
    
    
    操作语句分为四类：
    1. DDL (Data Definition Language)  例如：建库，建表
    2. DML (Data Manipulation Language) 例如：对表中的数据进行增删改查
    3. DQL (Data Query Language) 例如：对数据进行查询
    4. DCL (Data Control Language) 例如：对用户权限进行设置
    
    
    
## 3.1 mysql数据库必备知识之创建、查看以及使用/切换
    简介：细讲数据的创建使用
    
        (1)直接创建数据库 db1
        create database db1;
        (2)查看当时所在数据库
        select database();
        (3)进入数据库db1进行操作
        use db1;
        (4)判断是否存在，如果不存在则创建数据库db2
        create database if not exists db2;
        (5)创建数据库并指定字符集为 gbk
        create database db3 default charater set gbk;
        (6)查看某个库是什么字符集
        SHOW CREATE DATABASE yt1;
        (7)查看当前mysql使用的字符集
        show variables like 'character%';
        
        
## 3.2 mysql创建表之常用数据类型
    简介：细讲常见数据类型
    
    (1)数据类型？
    数据类型是指列、存储过程参数、表达式和局部变量的数据特征，它决定了数据的存储格式，  
    代表了不同的信息类型，有一些数据是要存储为数据，数字当中有些是要存储为整数、小数、日期等等。
    
    (2)[mysql常见数据类型](https://www.runoob.com/mysql/mysql-data-types.html)

        
    
