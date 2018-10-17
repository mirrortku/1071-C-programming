# 1071-C-programming
**homework**

 -  [[uva100.cpp](https://github.com/mirrortku/1071-C-programming/blob/master/homework/uva100.cpp "uva100.cpp")]
```
 Welcome to C Programming
 My name is 404416520
```
****

**w01**

 

 - [ 第一個C程式](https://github.com/mirrortku/1071-C-programming/blob/master/w01/2018.9.11-1.cpp "2018.9.11-1.cpp")
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
 - [< 選單 >](https://github.com/mirrortku/1071-C-programming/blob/master/w04/.cpp ".cpp") 畫長方形及四種直角三角形，全部沒有填滿
 

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
  -[<選單2>](https://github.com/mirrortku/1071-C-programming/blob/master/w04/menu2.cpp "menu2.cpp")畫長方形、各種直角三角形等腰三角形，有實心和空心
 
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
  - [<選單>](https://github.com/mirrortku/1071-C-programming/blob/master/w05/%E9%81%B8%E5%96%AE(1).cpp "選單(1).cpp")leap, timeconvert, add two more functions into menu
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
 
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTY4Njk0MzIyLDE5NTM0MjI4NDMsLTE4MD
U4NDI0NTMsLTE0MTU3NjQ1NDIsOTk2OTA1Njc3XX0=
-->