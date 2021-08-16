# Java基础学习

## Java语言概述

### 常用的命令行指令

1. md-make directory	创建新文件夹

2. cd-change directory   切换文件夹目录位置，即进入子文件夹

3. dir    列出当前文件夹下的所有文件

4. rd     删除目录

5. del    删除文件

6. cd..   退出上一层

7. cd\   退到根目录

   

### JAVA语言的特点

1. 面向对象

   1. 类和对象
   2. 封装、继承、多态

2. 健壮性

   1. 相比起c和c++来说，删去了指针，增加了相对安全的内存管理机制和访问机制

3. 跨平台性

   1. write once run anywhere .
   2. 原理：只要在需要运行java的操作系统上安装一个Java虚拟机，在虚拟机上运行Java程序，即JVM（Java Virtual Machine）

   

###  java语言运行机制及运行过程

1. Java虚拟机
2. 垃圾回收机制

### java语言的环境搭建

1. JDK（java Development Kit）Java开发工具包，其中包括了JRE（java Runtime Environment）java运行环境

![image-20210726112202864](C:\Users\HUAWEI\AppData\Roaming\Typora\typora-user-images\image-20210726112202864.png)

### java的注释

1. 单行注释  //

2. 多行注释  /*  */  不能嵌套使用

3. 文档注释 注释内容可以被JDK提供的工具Javadoc所解析，生成一套一网页形式体现的该程序的说明文档

   /**

   @author xxx

   @version v1.0
   */

   

   ### java程序编写、编译、执行的过程

   编写：将Java代码保存在以.Java  结尾的源文件中

   编译：使用javac.exe命令编译我们的Java源文件。格式：javac 源文件名.java

   执行：使用Java.exe命令解释运行的字节码文件。格式：Java 类名 （不需要加文件后缀）

   在一个Java源文件中可以声明多个class。但是最多只能有一个类声明为public，并且要是与文件名同名的类前面

   程序入口是main（）方法。格式是固定的:public static void main (String [] args)

    输出语句：

   System.out.println():先输出数据，然后换行

   System.out.print():只是输出数据

   为什么要配环境变量，目的是为了在任何路径下都可以执行java或javac指令

   软件就是一系列按照特定顺序组织的计算机指令和数据的集合。

人机交互方式：图形化界面   、   命令行方式

应用程序 = 算法 + 数据结构

path环境变量的配置

path环境变量：window操作系统执行命令时索要搜寻的路径

配置path的目的：希望java的开发工具（javac.exe，Java.exe）在任何路径下都能执行 

Java API文档：

API：application programming interface   将语言提供的类库都称为api

凡是可以自己起名的地方都叫标识符

标识符的合法规则：

1. 由26个英文字母大小写，0-9，_或$组成
2. 不能以数字开头
3. 不可以使用关键字和保留字，但是可以包含关键字和保留字
4. Java中严格区分大小写，长度没有限制
5. 标识符不能包含空格

包名：多单词组成时所有字母都小写 xxxyyyzzz

类名接口名：多单词组成时所有单词的首字母大写 XxxYxxZzz

变量名、方法名：多单词组成时，第一个单词首字母小写，第二个单词开始每个单词首字母大写：xxxYyyZzz

常量名：所有字母都大写。多单词时每个单词都用下划线连接：XXX_YYY_ZZZ

### 变量的使用

1. java定义变量的格式： 数据类型   变量名  =  变量值；
2. 变量必须先声明后使用
3. 变量都定义在其作用域内，在作用域（一个大括号内就是一个作用域 ）内，它是有效的，如果超出作用域则无效，例如在方法中定义的变量无法在main方法中使用。
4. 同一个作用域内不能声明两个同名的变量

### 变量的分类

![image-20210727092450200](C:\Users\HUAWEI\AppData\Roaming\Typora\typora-user-images\image-20210727092450200.png)

对于每一种数据都定义了明确的具体数据类型（称为强类型语言），在内存中分配了不同大小的内存空间

整型：byte（1字节=8bit）short（2字节）int（4字节）long（8字节）

byte的范围为-128到127

声明long型变量的时候必须以L或l结尾，在输出时不会显示

通常在定义整型变量时使用int

浮点型：float（4字节）、double（8字节）

定义float类型时结尾要以F或f结尾

通常定义浮点型变量时使用double型

字符型：char（1字符 = 2字节）

定义char型变量，通常使用一对''，内部只能写一个字符（各种语言都可以）也可以表示转义字符也可以直接使用unicode的值来表示字符型常量

自动类型提升：当容量小的数据类型变量和容量大的数据类型变量作运算时，需要用容量大的类型去接受

大小范围的排序：

byte , char , short -----> int -----> long ------>double 

强制类型转换，自动类型提升运算的逆运算。int i1 = (int)d1;该操作可能造成精度损失

整型常量，默认类型为int型

浮点型常量，默认为double型

### 字符串类型string

string类型不是基本数据类型，是引用数据类型

声明string类型时使用一对""

string类型可以和8种数据类型做运算，但是只能做连接运算（+）。

只要运算中由string类型则所有都做连接运算

### 运算符：

1. & 和 && 的关系

   ​	相同点：& 和 &&的运算结果相同，在符号左边为true时，二者都会执行符号左边的运算

   ​	不同点：当符号左边是flase时，&继续执行符号右边的运算。&&不再执行符号右边的运算。