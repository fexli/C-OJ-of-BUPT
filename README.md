# C-OJ-of-BUPT  
** C++ Class of BUPT 2020 Student OJ Test **  
11.01 本次更新包含Task 1167 1173 1200 1502 1503 1509 1510 1513  
11.27 本次更新包含Task 1519 1548 1548 1570 1523 1524 1526 1527 1525 1571 1574 1568  
12.17 本次更新包含Task 1562 1563 1437  
2020年11月27日18:13:26 本周Task更新完毕(新增了4个题确实实属意外，不过那四道题比前面八道题简单很多的)   
2020年12月17日10:35:02 因为老师已经在群里面发了答案了(gitee上好像也更新这三次的答案了) 所以不是很着急更新...但是有些代码**并没有**按照题目要求规范编写，所以我就稍稍写了写，大家可以随便看看
  
  
# 解释  
### 关于头文件  
在我的程序中基本都附加了stdio.h和iostream,但是并非每个程序都必须含有stdio.h，我只是懒得改了(真的是懒！)  
iostream是负责输入输出流的，需要就是需要加using namespace std;那个。cout和cin是它负责的，  
而stdio.h是标准输入输出，它负责的是printf和scanf等函数部分。具体可以百度一下看看  
### 关于CHEAT  
首先要声明一下：我**不建议**使用欺骗平台的方式来通过测试，尽管有些部分对于程序编写以及输出要求非常严格。我会为**不需要输入即可输出**的程序编写对应的CHEAT程序，但是也请看看就好，尽量不要学。  
### 关于OJ平台  
暂时可以认为OJ平台使用的是gcc(g++)进行编译并将输出结果与预定结果进行匹配性检查  
### 关于代码格式/规范  
oj平台不识别void main(){}这样的主函数编写方式，因此一定要使用int main(){return 0;}这样的形式,网上的说法是  
`C语言的标准语法是不允许void main()的，只允许int main()，void main主函数没有返回值，main 默认为int 型，即 int main()， 返回整数。注意，新标准不允许使用默认返回值，即int不能省，而且对应main函数不再支持void型返回值，因此为了使程序有很好的移植性，强烈建议使用`   
    int main()  
    {  
        return 0; /* 新标准主函数的返回值这条语句可以省略 */  
    }  
  
# 常见错误  
### 编译错误  
当程序运行或编译遇到错误时会显示编译错误，可以点击编辑错误查看具体信息。一般编译错误为多写/少写了分号、没写括号等。请在VS编译器编译通过后再上传。请注意，由于编译器原因**请将scanf_s()改回scanf()后进行上传**  
### 请重新提交  
又不是咱的问题，等10秒后重新提交吧  
### 格式错误  
请检查是否多了空格" "或回车"\n"，输出必须按照题目的输出规范，**一点都不能差**(不够人性化 没办法 斜眼)  
### 答案错误  
看看是不是写错了、少编译了一种方法？按照题目给的输入和预期输出进行测试。  
**注意：题目中给的输入输出并非最终测试时的输入和输出！**  
  
