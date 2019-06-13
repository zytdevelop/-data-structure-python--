# SQL学习笔记(SQLite)

***
## 字句(clause)
>* **CREATE TABLE**
>* **INSERT INTO [tablename](colums1, colums2,..) VALUES(value1, value2, ...)
>* **SELECT**:queries data from a table [select [column name] from [table name]]
>* **ALTER TABLE**:changes an existing table[alter table[table name] add column[column name]]
>* **UPDATE**:edits a row in a table
>* **DELETE FROM**:delete rows from a table
>* **AS** 将列重命名或者整个表重命名
>* **DISTINCT** 去除重复值
>* **WHERE** 选择满足特定条件的记录
>* **LIKE** 多用于字符匹配, **BETWEEN** 多用于范围限定(包括字母范围、数值范围等)
>* **AND** 等价于交集, **OR** 等价于并集
>* **ORDER BY** 根据某一个属性进行排序 **DESC**,**ASC** 分别为降序和升序关键字
>* **LIMIT** 限定选择结果
>* **CASE** 选择不同的输出(相当于C++中if选择语句)
***
* INSERT INTO 插入新的行
* ALTER TABLE [table name] ADD COLUMN [column name] 插入新的列
