# 1071-C-programming
**homework**
 -  [[uva100](https://github.com/mirrortku/1071-C-programming/blob/master/homework/uva100.cpp "uva100.cpp")]
```
1  10
1  10  20
100  200
100  200  125
201  210
201  210  89
900  1000
900  1000  174
```
- [uva488](https://github.com/mirrortku/1071-C-programming/blob/master/homework/uva488.cpp "uva488.cpp")
```
1
3
2
1
22
333
22
1

1
22
333
22
1
```
- [uva913](https://github.com/mirrortku/1071-C-programming/blob/master/homework/uva913.cpp "uva913.cpp")
```
3
15
5
45
7
87
```
[uva10055](https://github.com/mirrortku/1071-C-programming/blob/master/homework/uva10055.cpp "uva10055.cpp")
```
10 12
2
14 10
4
100 200
100
```
[uva10071](https://github.com/mirrortku/1071-C-programming/blob/master/homework/uva10071.cpp "uva10071.cpp")
```
60 2
120
```

***
**first_test**

- [test1](https://github.com/mirrortku/1071-C-programming/blob/master/first_test/test1.cpp "test1.cpp") 
輸入兩個整數，請列出加、減、乘、除、%(取餘數)的運算。
```
 Enter two integers: 25 10
 25 + 10 = 35
 25–10 = 15
 25 * 10 = 250
 25 / 10 = 2
 25 % 10 = 5
```
- [test2](https://github.com/mirrortku/1071-C-programming/blob/master/first_test/test2.cpp "test2.cpp")
 請寫一個迴圈，輸入兩個高度 h1, h2，要能列出由 h1 ~ h2 的 BMI 標準體 重範圍，數字要切齊。
```
Enter height (-1 to exit): 170 175
170 cm: 53.5 ~ 69.4 (kg)
171 cm: 54.1 ~ 70.2 (kg)
172 cm: 54.7 ~ 71.0 (kg)
173 cm: 55.4 ~ 71.8 (kg)
174 cm: 56.0 ~ 72.7 (kg)
175 cm: 56.7 ~ 73.5 (kg)

Enter height (-1 to exit): -1 -1
Bye! Coding by your_ID
```
- [test3](https://github.com/mirrortku/1071-C-programming/blob/master/first_test/test3.cpp "test3.cpp") 
輸入高度，畫出 2 個直角三角形
```
Enter height (-1 to exit): 5
     * *
    ** **
   *** ***
  **** ****
 ***** ***** 
 
Enter height (-1 to exit): -1 
Bye! coding by yourID
```
- [test4](https://github.com/mirrortku/1071-C-programming/blob/master/first_test/test4.cpp "test4.cpp") 
寫 2 個 function, encode(n) 能夠將一個四位數的整數 n 編碼，decode(n) 能夠將之解碼。編碼規則如下：千位數加 5 取餘數後和十位數對調，百位數和個位數 對調。
```
Enter N (-1 to exit): 1234
encode(1234) = 3462
decode(3462) = 1234
Enter N (-1 to exit): 8391
encode(8391) = 9133
decode(9133) = 8391

Enter N (-1 to exit): -1
Bye! coding by yourID
```
- [text5](https://github.com/mirrortku/1071-C-programming/blob/master/first_test/text5.cpp "text5.cpp")
 寫一個選單，共有 5 個選項如下，前 3 個選項分別對應到前 3 題，第 4, 5 個選 項對應到第 4 題。
```
(1) Arithmetic Computation
(2) List BMI ranges 
(3) Draw Four Vertical Triangles 
(4) encode(n) 
(5) decode(n) 
(6) Exit
```
***
**second_test**
- [test1](https://github.com/mirrortku/1071-C-programming/blob/master/second_test/test1.cpp "test1.cpp")
寫一個functionprime(n)用來判斷整數n是否為質數，假設n>=2。所有輸入輸出寫在main()中。
```
Enter N: 23
23 is a prime.
Continue(Y/N)? Y

Enter N: 21
21 is not a prime.
Continue (Y/N)? N

Coding by your_ID_name
```
- [test2](https://github.com/mirrortku/1071-C-programming/blob/master/second_test/test2.cpp "test2.cpp")
a.function findPrimes(data,n1,n2)，其中data是一維陣列，n1<=n2。用來記錄所有n1~n2的所有質數，該function會回傳有多少個質數。
b.stats(data,occurrences),其中data[MAX],occurrences都是一維陣列，occurrences[10]會記錄最後數字出現的頻率，回傳值是occurrences[10]次數最高的值
```
Enter n1 and n2: 5 70
16 primes between 5 and 70. 
7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67

Statistics:
Last digit 7 has the most frequent 5 occurrences between 5 to 70.

[1]=4, [11,31,41,61]
[3]=4, [13,23,43,53]
[7]=5, [07,127,37,47,67]
[9]=3, [19,29,59]
Continue (Y/N)? N

Coding by your_ID_name
```

- [test3](https://github.com/mirrortku/1071-C-programming/blob/master/second_test/test3.cpp "test3.cpp")
判斷是否有正整數平方根
```
Enter N:25
Yes. 25 = 5 x 5
Continue (Y/N):y
Enter N:30
No.
Continue (Y/N):n
Coding by your_ID_name
```
- [test4](https://github.com/mirrortku/1071-C-programming/blob/master/second_test/test4.cpp "test4.cpp")
- [test5](https://github.com/mirrortku/1071-C-programming/blob/master/second_test/test5.cpp "test5.cpp")
***
**w01**

 - [ 第一個C程式](https://github.com/mirrortku/1071-C-programming/blob/master/w01/2018.9.11-1.cpp "2018.9.11-1.cpp")
```
  Welcome to C Programming
  My name is 404416520
```
 - [攝氏華氏溫度轉換](https://github.com/mirrortku/1071-C-programming/blob/master/w01/2018.9.12-2.cpp "2018.9.12-2.cpp")
```
  Enter temperature in C: 20.5
  20.5 C = 68.9
  F Enter temperature in F: 80.5
  80.5 F = 26.9 C
```
 - [尋找二元一次方程式](https://github.com/mirrortku/1071-C-programming/blob/master/w01/2018.9.12.cpp "2018.9.12.cpp")
```
 Enter a b c: 2 -3 1
 For equation 2 x^2 -3 x + 1 =0, two roots are 
 x1 = 1.0 
 x2 = 0.5
  ```
****
**w02**

 - [Leap year](https://github.com/mirrortku/1071-C-programming/blob/master/w02/2018-09-18-2.cpp "2018-09-18-2.cpp")

```
 Enter year: 2000
 Year 2000 is a leap year.
 
 Enter year: 2018
 Year 2018 is not a leap year.

 Enter year: 2020
 Year 2020 is a leap year.

 Enter year: 2100
 Year 2100 is not a leap year.
```

 - [Input a seconds, convert to hh:mm:ss](https://github.com/mirrortku/1071-C-programming/blob/master/w02/2018-09-18-3.cpp "2018-09-18-3.cpp")
```
 Enter seconds: 20000 
 20000 seconds = 05:33:20
```
****
**w03**
 - [Leap year using while loop](https://github.com/mirrortku/1071-C-programming/blob/master/w03/leap%20year(while).cpp "leap year(while).cpp")
```
 Enter year: 2000
 Year 2000 is a leap year.
 Enter year: 2018 
 Year 2018 is not a leap year.
 Enter year: 2020
 Year 2020 is a leap year. 
 Enter year: 2100 
 Year 2100 is not a leap year.
 Enter year: -1
```
 - [Convert seconds using while loop](https://github.com/mirrortku/1071-C-programming/blob/master/w03/sec%E6%8F%9B%E7%AE%97(while).cpp "sec換算(while).cpp")
```
 Enter seconds: 20000
 20000 seconds = 05:33:20
 Enter seconds: 10000
 10000 seconds = 02:46:40
 Enter seconds: 30000
 30000 seconds = 08:20:00 
 Enter seconds: 100000 
 100000 seconds = 27:46:40 
 Enter seconds: -1
```
 - [BMI using while](https://github.com/mirrortku/1071-C-programming/blob/master/w03/BMI%E8%A8%88%E7%AE%97.cpp "BMI計算.cpp")
```
 身高(m):1.55
 體重(kg):52
 正常範圍
```
 - [sum(n1,n2)](https://github.com/mirrortku/1071-C-programming/blob/master/w03/sum(n1%2Cn2).cpp "sum(n1,n2).cpp")
```
 Enter n1 n2: 1 10
 sum(1,10) = 55
 Enter n1 n2: 5 10
 sum(5,10) = 45
 Enter n1 n2: 10 100
 sum(10,100) = 5005
 Enter n1 n2: 50 100
 sum(50,100) = 3825
 Enter n1 n2: -1 -1
```
****
**w04**
 - [< 選單 >](https://github.com/mirrortku/1071-C-programming/blob/master/w04/.cpp ".cpp") 
 畫長方形及四種直角三角形，全部沒有填滿
 

 ```
  Main Menu 
  1. Rectangle 
  2. Vertical Triangle 
  3. Exit => 1 
  Enter height and width: 5 8 
  ******** 
  *      *
  *      * 
  *      * 
  ******** 
  Main Menu 
  4. Rectangle 
  5. Vertical Triangle
  6.  3. Exit => 2
  7.  Enter height and type: 5 1
  * 
  ** 
  * * 
  *  *
  *****
  Main Menu 
  1. Rectangle
  2. Vertical Triangle
  3. Exit => 2 
  Enter height and type: 5 2
      *  
     **
    * *
   *  * 
  *****
   Main Menu 
  1. Rectangle 
  2. Vertical Triangle
  3. Exit => 2 
  Enter height and type: 5 3
  *****
   *  * 
    * *
     ** 
      * 
  Main Menu 
  1. Rectangle 
  2. Vertical Triangle
  3. Exit => 2 
  Enter height and type: 5 4 
  ***** 
  *  * 
  * * 
  ** 
  *  
  Main Menu 
  1. Rectangle 
  2. Vertical  Triangle 
  3. Exit => 3
 ```
  -[<選單2>](https://github.com/mirrortku/1071-C-programming/blob/master/w04/menu2.cpp "menu2.cpp")
  畫長方形、各種直角三角形等腰三角形，有實心和空心
 
 For Rectangle
  ```
  Main Menu
   1. Rectangle
   2. Vertical Triangle
   3. Tsosceles Triangle
   4. Exit 
   => 1 
   Enter height, width, filled: 5 8 0 
   ********
   *      * 
   *      * 
   *      * 
   *      * 
   ******** 
   Main Menu 
   1. Rectangle 
   2. Vertical Triangle 
   3. Tsosceles Triangle 
   4. Exit
   => 1 Enter height, width, filled: 5 8 1 
   ******** 
   ******** 
   ******** 
   ******** 
   ******** 
   Main Menu
   1. Rectangle
   2. Vertical Triangle
   3. Tsosceles Triangle
   4. Exit
   =>
  ```
  For Vertical Triangle
 ```
   Main Menu 
   1. Rectangle
   2. Vertical Triangle
   3. Tsosceles Triangle 
   4. Exit 
   => 2 
   Enter height, type, filled: 6 1 0
   * 
   ** 
   * *
   *  * 
   *****
   Main Menu
   1. Rectangle 
   2. Vertical Triangle 
   3. Tsosceles Triangle
   4. Exit
   => 2 
   Enter height, type, filled: 6 1 1
   *  
   **
   ***
   ****
   *****
   ****** 
   Main Menu 
   1. Rectangle 
   2. Vertical Triangle 
   3. Tsosceles Triangle 
   4. Exit 
   5. =>
  ```
  For Isosceles Triangle
  ```
 Main Menu 
 1. Rectangle
 2. Vertical Triangle
 3. Tsosceles Triangle
 4. Exit
 => 3 
 Enter height, type, filled: 6 1 0
       * 
      * * 
     *   * 
    *     * 
   *       *
  *********** 
 Main Menu 
 1. Rectangle 
 2. Vertical Triangle 
 3. Tsosceles Triangle
 4. Exit 
 => 3 
 Enter height, type, filled: 6 2 1 
 *********** 
   *********
    *******
     *****
      *** 
       * 
 Main Menu 
 1. Rectangle 
 2. Vertical Triangle 
 3. Tsosceles Triangle
 4. Exit 
 =>
  ```
****
**w05**
  - [<選單>](https://github.com/mirrortku/1071-C-programming/blob/master/w05/%E9%81%B8%E5%96%AE(1).cpp "選單(1).cpp")
  leap, timeconvert, add two more functions into menu
For leap:
 ```
 Main Menu
  1. leap 
  2. 2. timeconvert 
  3. 3. Exit 
  => 1 
  Enter year: 2000 
  Year 2000 is a leap year. 
  Main Menu
  4. leap 
  5. 2. timeconvert 
  6. 3. 
  Exit 
  => 1 
  Enter year: 2018 
  Year 2018 is not a leap year. 
  Main Menu 
  1. leap 
  2. timeconvert
  3. Exit 
  => 1 
  Enter year: 2020 
  Year 2020 is a leap year.
  Main Menu 
  1. leap 
  2. timeconvert
  3. Exit 
  => 1 
  Enter year: 2100 
  Year 2100 is not a leap year. 
  Main Menu 
  1. leap 
  2. timeconvert 
  3. Exit 
  =>
 ```
 For timeconvert
 ```
  Main Menu 
  1. leap
  2. timeconvert
  3. Exit
  => 2 
  Enter hh:mm:ss 10:10:10
  10:10:10 = 36610 seconds
  Main Menu
  1. leap
  2. timeconvert
  3. Exit 
  => 2 
  Enter hh:mm:ss 0:30:10 
  00:30:10 = 1810 seconds 
  Main Menu
 1. leap
 2. timeconvert
 3. Exit =>
 ```
 ****
 **w06**
 - [days passed since Jan 1 of specific year](https://github.com/mirrortku/1071-C-programming/blob/master/w06/days.cpp "days.cpp")
 ```
 Enter year:
 2018 Enter month and day: 10 16 
 289 days passed since 1/1/2018
 Continue (Y/N)? y
 Enter year: 2020
 Enter month and day: 3 1 
 61 days passed since 1/1/2020
 Continue (Y/N)? y 
 Enter year: 2100 
 Enter month and day: 3 1 
 60 days passed since 1/1/2100
 Continue (Y/N)? n 

 Process returned 0 (0x0) execution time : 57.581 s 
 Press any key to continue.
 ```
 - [sorting an array](https://github.com/mirrortku/1071-C-programming/blob/master/w06/sort.cpp "sort.cpp")
 ```
 original: 34 78 12 9 87 66 88 99 56 11
 sorting : 9 11 12 34 56 66 78 87 88 99
 ```
 ****
 **w07**
 [sum recursive](https://github.com/mirrortku/1071-C-programming/blob/master/w07/sum().cpp "sum().cpp")
 ```
 Enter n: 10
 sum(10)=55
 10
 9
 8
 7
 6
 5
 4
 3
 2
 1
 rsum(10)=55
 ```
 [oddsum recursive](https://github.com/mirrortku/1071-C-programming/blob/master/w07/oddsum.cpp "oddsum.cpp")
 ```
 Enter n: 9
 sumodd1(9) = 81;
 sumodd2(9) = 25;
 ```
 
[fib](https://github.com/mirrortku/1071-C-programming/blob/master/w07/fib.cpp "fib.cpp") 
```
fib(3) = 2
fib(9) = 55
fib(30) = 832040
```
[gcd](https://github.com/mirrortku/1071-C-programming/blob/master/w07/gcd.cpp "gcd.cpp")
```
rgcd(48,126) = 6 gcd(48,126) = 6
rgcd(48,128) = 16 gcd(48,128) = 16
rgcd(48,144) = 48 gcd(48,144) = 48
rgcd(48,48) = 48 gcd(48,48) = 48
```
[tower](https://github.com/mirrortku/1071-C-programming/blob/master/w07/tower.cpp "tower.cpp")
```
tower1(n,from,aux,to)
A -> C 
A -> B
C -> B 
A -> C 
B -> A 
B -> C 
A -> C 
tower2(n,to,aux,from) 
C -> A 
C -> B 
A -> B 
C -> A 
B -> C 
B -> A 
C -> A 
tower3(n,from,to,aux) 
A -> B 
A -> C 
B -> C 
A -> B 
C -> A 
C -> B 
A -> B 
tower4(n,to,from,aux) 
B -> A 
B -> C 
A -> C 
B -> A 
C -> B 
C -> A 
B -> A 
tower5(n,aux,from,to) 
B -> C 
B -> A 
C -> A 
B -> C 
A -> B 
A -> C 
B -> C 
tower6(n,aux,to,from) 
C -> B 
C -> A 
B -> A 
C -> B 
A -> C 
A -> B 
C -> B
```
**w08**
- [magic](https://github.com/mirrortku/1071-C-programming/blob/master/w08/magic.cpp "magic.cpp")
```
Diagonal Move
 11  18  25   2   9  
 10  12  19  21   3 
  4   6  13  20  22 
 23   5   7  14  16 
 17  24   1   8  15 
 
Knight Move 
 17   6  25  14   3 
 11   5  19   8  22 
 10  24  13   2  16 
 4   18   7  21  15 
 23  12   1  20   9
```
****
 ## Thanks for watching
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTI4MzU4NzgxNiwyMTM5NDU0NDA4LC0xND
A0NDg0NjA4LC04ODM3MDIyMDQsLTE1MzI3MjY2NzcsOTUwOTE4
MTMsLTEwMjg3NzUxNDEsLTY4Njk0MzIyLDE5NTM0MjI4NDMsLT
E4MDU4NDI0NTMsLTE0MTU3NjQ1NDIsOTk2OTA1Njc3XX0=
-->