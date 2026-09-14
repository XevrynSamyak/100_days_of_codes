# 100 Days of Code - C

C solutions to the UPES **Basic Coding with C** 100 Days of Code challenge.

Questions come from the official challenge site: <https://maitysoumik.github.io/basic-coding-with-c/>

## Status

| | |
|---|---|
| Days completed | **1 - 31** |
| Questions solved | **Q1 - Q62** (2 per day) |
| Compiles with `gcc -std=c11 -Wall -Wextra` | 62 / 62, no warnings |
| Official sample cases run | 126 |
| Output matches the website exactly | 120 |
| Website sample is wrong (documented below) | 6 |

Every sample input on this page was piped into the compiled program and the
output below is what the program actually printed. Nothing here is written by hand.

## Layout

```text
day<N>_code_q<Q>.c      N = day number (1-31), Q = question number (1-62)
```

Day N holds questions 2N-1 and 2N, so Day 1 is Q1 and Q2, Day 31 is Q61 and Q62.
Each file starts with the original question, its input and output description, and
the official sample cases, all copied from the challenge site.

## Build and run

```bash
gcc day1_code_q1.c -o day1_q1 && ./day1_q1
```

Q9, Q17 and the other programs that use `sqrt` or `pow` need the maths library:

```bash
gcc day5_code_q9.c -o day5_q9 -lm && ./day5_q9
```

Feed a sample input straight in:

```bash
printf "3 4\n" | ./day1_q1
```

## Notes on the official samples

Six sample outputs on the challenge site do not follow from the questions they
belong to. Each of those programs implements the question as written and the
difference is documented in the source file and in the relevant entry below:

- **Q4** - the circumference sample assumes `pi = 3.14` while the area sample assumes `pi = 3.14159...`
- **Q9** - the compound interest for the second sample is 1125.22, not 1125.76
- **Q44** - the printed series sums to 2.58 and 4.36, not 3.3 and 4.4
- **Q45** - the printed series sums to 1.78 and 2.84, not 1.56 and 2.22

---

## Day 1

> Topic: **User Inputs, Operations & Output**

### Q1 - Input two numbers and display their sum

File: [`day1_code_q1.c`](day1_code_q1.c)

Status: ✅ Verified

Write a program to input two numbers and display their sum.

**Sample Input 1**

```text
3 4
```

**Actual Output 1**

```text
Sum = 7
```

**Sample Input 2**

```text
-1 20
```

**Actual Output 2**

```text
Sum = 19
```

### Q2 - Input two numbers and display their sum, difference, product, and quotient

File: [`day1_code_q2.c`](day1_code_q2.c)

Status: ✅ Verified

Write a program to input two numbers and display their sum, difference, product, and quotient.

**Sample Input 1**

```text
10 2
```

**Actual Output 1**

```text
Sum=12, Diff=8, Product=20, Quotient=5
```

**Sample Input 2**

```text
7 3
```

**Actual Output 2**

```text
Sum=10, Diff=4, Product=21, Quotient=2
```

---

## Day 2

### Q3 - Calculate the area and perimeter of a rectangle given its length and breadth

File: [`day2_code_q3.c`](day2_code_q3.c)

Status: ✅ Verified

Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

**Sample Input 1**

```text
5 10
```

**Actual Output 1**

```text
Area=50, Perimeter=30
```

**Sample Input 2**

```text
3 7
```

**Actual Output 2**

```text
Area=21, Perimeter=20
```

### Q4 - Calculate the area and circumference of a circle given its radius

File: [`day2_code_q4.c`](day2_code_q4.c)

Status: ⚠️ Verified - output differs from the website's sample (the website's sample is wrong, see the note)

Write a program to calculate the area and circumference of a circle given its radius.

**Sample Input 1**

```text
7
```

**Actual Output 1**

```text
Area=153.94, Circumference=43.98
```

Website shows `Area=153.94, Circumference=43.96` for this input. The website's sample uses pi = 3.14 for the circumference but pi = 3.14159... for the area of the same circle. This program uses pi = 3.14159265358979323846 for both, so it prints 43.98 instead of 43.96. Sample 2 matches the website exactly.

**Sample Input 2**

```text
3
```

**Actual Output 2**

```text
Area=28.27, Circumference=18.85
```

---

## Day 3

### Q5 - Convert temperature from Celsius to Fahrenheit

File: [`day3_code_q5.c`](day3_code_q5.c)

Status: ✅ Verified

Write a program to convert temperature from Celsius to Fahrenheit.

**Sample Input 1**

```text
0
```

**Actual Output 1**

```text
Fahrenheit=32
```

**Sample Input 2**

```text
100
```

**Actual Output 2**

```text
Fahrenheit=212
```

### Q6 - Swap two numbers using a third variable

File: [`day3_code_q6.c`](day3_code_q6.c)

Status: ✅ Verified

Write a program to swap two numbers using a third variable.

**Sample Input 1**

```text
3 5
```

**Actual Output 1**

```text
After swap: 5 3
```

**Sample Input 2**

```text
-1 1
```

**Actual Output 2**

```text
After swap: 1 -1
```

---

## Day 4

### Q7 - Swap two numbers without using a third variable

File: [`day4_code_q7.c`](day4_code_q7.c)

Status: ✅ Verified

Write a program to swap two numbers without using a third variable.

**Sample Input 1**

```text
10 20
```

**Actual Output 1**

```text
After swap: 20 10
```

**Sample Input 2**

```text
7 14
```

**Actual Output 2**

```text
After swap: 14 7
```

### Q8 - Find and display the sum of the first n natural numbers

File: [`day4_code_q8.c`](day4_code_q8.c)

Status: ✅ Verified

Write a program to find and display the sum of the first n natural numbers.

**Sample Input 1**

```text
5
```

**Actual Output 1**

```text
Sum=15
```

**Sample Input 2**

```text
10
```

**Actual Output 2**

```text
Sum=55
```

---

## Day 5

### Q9 - Calculate simple and compound interest for given principal, rate, and time

File: [`day5_code_q9.c`](day5_code_q9.c)

Status: ⚠️ Verified - output differs from the website's sample (the website's sample is wrong, see the note)

Write a program to calculate simple and compound interest for given principal, rate, and time.

**Sample Input 1**

```text
1000 5 2
```

**Actual Output 1**

```text
Simple Interest=100, Compound Interest=102.5
```

**Sample Input 2**

```text
5000 7 3
```

**Actual Output 2**

```text
Simple Interest=1050, Compound Interest=1125.22
```

Website shows `Simple Interest=1050, Compound Interest=1125.76` for this input. 5000 at 7% for 3 years gives compound interest of 5000 * (1.07^3 - 1) = 1125.2154..., so the website's 1125.76 does not follow from the formula. This program prints 1125.22. Sample 1 matches the website exactly.

### Q10 - Input time in seconds and convert it to hours:minutes:seconds format

File: [`day5_code_q10.c`](day5_code_q10.c)

Status: ✅ Verified

Write a program to input time in seconds and convert it to hours:minutes:seconds format.

**Sample Input 1**

```text
3661
```

**Actual Output 1**

```text
1:1:1
```

**Sample Input 2**

```text
7322
```

**Actual Output 2**

```text
2:2:2
```

---

## Day 6

> Topic: **Conditional Statements**

### Q11 - Input an integer and check whether it is even or odd using if–else

File: [`day6_code_q11.c`](day6_code_q11.c)

Status: ✅ Verified

Write a program to input an integer and check whether it is even or odd using if–else.

**Sample Input 1**

```text
7
```

**Actual Output 1**

```text
7 is odd
```

**Sample Input 2**

```text
12
```

**Actual Output 2**

```text
12 is even
```

### Q12 - Input an integer and check whether it is positive, negative or zero using nested if–else

File: [`day6_code_q12.c`](day6_code_q12.c)

Status: ✅ Verified

Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

**Sample Input 1**

```text
-5
```

**Actual Output 1**

```text
Negative
```

**Sample Input 2**

```text
0
```

**Actual Output 2**

```text
Zero
```

**Sample Input 3**

```text
10
```

**Actual Output 3**

```text
Positive
```

---

## Day 7

### Q13 - Input a year and check whether it is a leap year or not using conditional statements

File: [`day7_code_q13.c`](day7_code_q13.c)

Status: ✅ Verified

Write a program to input a year and check whether it is a leap year or not using conditional statements.

**Sample Input 1**

```text
2020
```

**Actual Output 1**

```text
Leap year
```

**Sample Input 2**

```text
1900
```

**Actual Output 2**

```text
Not a leap year
```

**Sample Input 3**

```text
2000
```

**Actual Output 3**

```text
Leap year
```

### Q14 - Input a character and check whether it is a vowel or consonant using if–else

File: [`day7_code_q14.c`](day7_code_q14.c)

Status: ✅ Verified

Write a program to input a character and check whether it is a vowel or consonant using if–else.

**Sample Input 1**

```text
a
```

**Actual Output 1**

```text
Vowel
```

**Sample Input 2**

```text
b
```

**Actual Output 2**

```text
Consonant
```

---

## Day 8

### Q15 - Input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character

File: [`day8_code_q15.c`](day8_code_q15.c)

Status: ✅ Verified

Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

**Sample Input 1**

```text
A
```

**Actual Output 1**

```text
Uppercase alphabet
```

**Sample Input 2**

```text
a
```

**Actual Output 2**

```text
Lowercase alphabet
```

**Sample Input 3**

```text
3
```

**Actual Output 3**

```text
Digit
```

**Sample Input 4**

```text
#
```

**Actual Output 4**

```text
Special character
```

### Q16 - Input three numbers and find the largest among them using if–else

File: [`day8_code_q16.c`](day8_code_q16.c)

Status: ✅ Verified

Write a program to input three numbers and find the largest among them using if–else.

**Sample Input 1**

```text
3 7 5
```

**Actual Output 1**

```text
Largest is 7
```

**Sample Input 2**

```text
-1 -5 0
```

**Actual Output 2**

```text
Largest is 0
```

---

## Day 9

### Q17 - Find the roots of a quadratic equation and categorize them

File: [`day9_code_q17.c`](day9_code_q17.c)

Status: ✅ Verified

Write a program to find the roots of a quadratic equation and categorize them.

**Sample Input 1**

```text
1 -3 2
```

**Actual Output 1**

```text
Roots are real and different: 2, 1
```

**Sample Input 2**

```text
1 -2 1
```

**Actual Output 2**

```text
Roots are real and same: 1
```

**Sample Input 3**

```text
1 2 5
```

**Actual Output 3**

```text
Roots are complex
```

### Q18 - Accepts a percentage (0-100) and assigns a grade based on the following criteria

File: [`day9_code_q18.c`](day9_code_q18.c)

Status: ✅ Verified

Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 

```text
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
```

**Sample Input 1**

```text
95
```

**Actual Output 1**

```text
Grade A
```

**Sample Input 2**

```text
82
```

**Actual Output 2**

```text
Grade B
```

**Sample Input 3**

```text
68
```

**Actual Output 3**

```text
Grade D
```

**Sample Input 4**

```text
50
```

**Actual Output 4**

```text
Grade F
```

---

## Day 10

### Q19 - Classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths

File: [`day10_code_q19.c`](day10_code_q19.c)

Status: ✅ Verified

Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

**Sample Input 1**

```text
3 3 3
```

**Actual Output 1**

```text
Equilateral
```

**Sample Input 2**

```text
3 3 4
```

**Actual Output 2**

```text
Isosceles
```

**Sample Input 3**

```text
2 3 4
```

**Actual Output 3**

```text
Scalene
```

### Q20 - Display the day of the week based on a number (1–7) using switch-case

File: [`day10_code_q20.c`](day10_code_q20.c)

Status: ✅ Verified

Write a program to display the day of the week based on a number (1–7) using switch-case.

**Sample Input 1**

```text
1
```

**Actual Output 1**

```text
Monday
```

**Sample Input 2**

```text
5
```

**Actual Output 2**

```text
Friday
```

---

## Day 11

### Q21 - Display the month name and number of days using switch-case for a given month number

File: [`day11_code_q21.c`](day11_code_q21.c)

Status: ✅ Verified

Write a program to display the month name and number of days using switch-case for a given month number.

**Sample Input 1**

```text
2
```

**Actual Output 1**

```text
February, 28 days
```

**Sample Input 2**

```text
12
```

**Actual Output 2**

```text
December, 31 days
```

### Q22 - Find profit or loss percentage given cost price and selling price

File: [`day11_code_q22.c`](day11_code_q22.c)

Status: ✅ Verified

Write a program to find profit or loss percentage given cost price and selling price.

**Sample Input 1**

```text
1000 1200
```

**Actual Output 1**

```text
Profit 20%
```

**Sample Input 2**

```text
1000 800
```

**Actual Output 2**

```text
Loss 20%
```

**Sample Input 3**

```text
1000 1000
```

**Actual Output 3**

```text
No Profit No Loss
```

---

## Day 12

### Q23 - Calculate library fine based on late days as follows

File: [`day12_code_q23.c`](day12_code_q23.c)

Status: ✅ Verified

Write a program to calculate library fine based on late days as follows: 

```text
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
```

**Sample Input 1**

```text
4
```

**Actual Output 1**

```text
Fine ₹8
```

**Sample Input 2**

```text
8
```

**Actual Output 2**

```text
Fine ₹22
```

**Sample Input 3**

```text
15
```

**Actual Output 3**

```text
Fine ₹60
```

**Sample Input 4**

```text
31
```

**Actual Output 4**

```text
Membership Cancelled
```

### Q24 - Calculate electricity bill based on units consumed with these rates

File: [`day12_code_q24.c`](day12_code_q24.c)

Status: ✅ Verified

Write a program to calculate electricity bill based on units consumed with these rates: 

```text
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
```

**Sample Input 1**

```text
50
```

**Actual Output 1**

```text
Bill: ₹250
```

**Sample Input 2**

```text
150
```

**Actual Output 2**

```text
Bill: ₹850
```

**Sample Input 3**

```text
250
```

**Actual Output 3**

```text
Bill: ₹1700
```

---

## Day 13

### Q25 - Implement a basic calculator using switch-case for +, -, *, /, %

File: [`day13_code_q25.c`](day13_code_q25.c)

Status: ✅ Verified

Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

**Sample Input 1**

```text
4 2 +
```

**Actual Output 1**

```text
6
```

**Sample Input 2**

```text
10 3 %
```

**Actual Output 2**

```text
1
```

**Sample Input 3**

```text
15 5 /
```

**Actual Output 3**

```text
3
```

> Topic: **Loops without Arrays/Strings**

### Q26 - Print numbers from 1 to n

File: [`day13_code_q26.c`](day13_code_q26.c)

Status: ✅ Verified

Write a program to print numbers from 1 to n.

**Sample Input 1**

```text
5
```

**Actual Output 1**

```text
1 2 3 4 5
```

**Sample Input 2**

```text
3
```

**Actual Output 2**

```text
1 2 3
```

---

## Day 14

### Q27 - Print the sum of the first n odd numbers

File: [`day14_code_q27.c`](day14_code_q27.c)

Status: ✅ Verified

Write a program to print the sum of the first n odd numbers.

**Sample Input 1**

```text
3
```

**Actual Output 1**

```text
9
```

**Sample Input 2**

```text
5
```

**Actual Output 2**

```text
25
```

### Q28 - Print the product of even numbers from 1 to n

File: [`day14_code_q28.c`](day14_code_q28.c)

Status: ✅ Verified

Write a program to print the product of even numbers from 1 to n.

**Sample Input 1**

```text
4
```

**Actual Output 1**

```text
8 (2 * 4)
```

**Sample Input 2**

```text
6
```

**Actual Output 2**

```text
48 (2 * 4 * 6)
```

---

## Day 15

### Q29 - Calculate the factorial of a number

File: [`day15_code_q29.c`](day15_code_q29.c)

Status: ✅ Verified

Write a program to calculate the factorial of a number.

**Sample Input 1**

```text
5
```

**Actual Output 1**

```text
120
```

**Sample Input 2**

```text
3
```

**Actual Output 2**

```text
6
```

### Q30 - Reverse a given number

File: [`day15_code_q30.c`](day15_code_q30.c)

Status: ✅ Verified

Write a program to reverse a given number.

**Sample Input 1**

```text
1234
```

**Actual Output 1**

```text
4321
```

**Sample Input 2**

```text
100
```

**Actual Output 2**

```text
1
```

---

## Day 16

### Q31 - Take a number as input and print its equivalent binary representation

File: [`day16_code_q31.c`](day16_code_q31.c)

Status: ✅ Verified

Write a program to take a number as input and print its equivalent binary representation.

**Sample Input 1**

```text
10
```

**Actual Output 1**

```text
1010
```

**Sample Input 2**

```text
7
```

**Actual Output 2**

```text
111
```

### Q32 - Check if a number is a palindrome

File: [`day16_code_q32.c`](day16_code_q32.c)

Status: ✅ Verified

Write a program to check if a number is a palindrome.

**Sample Input 1**

```text
121
```

**Actual Output 1**

```text
Palindrome
```

**Sample Input 2**

```text
123
```

**Actual Output 2**

```text
Not palindrome
```

---

## Day 17

### Q33 - Check if a number is an Armstrong number

File: [`day17_code_q33.c`](day17_code_q33.c)

Status: ✅ Verified

Write a program to check if a number is an Armstrong number.

**Sample Input 1**

```text
153
```

**Actual Output 1**

```text
Armstrong
```

**Sample Input 2**

```text
123
```

**Actual Output 2**

```text
Not Armstrong
```

### Q34 - Check if a number is prime

File: [`day17_code_q34.c`](day17_code_q34.c)

Status: ✅ Verified

Write a program to check if a number is prime.

**Sample Input 1**

```text
7
```

**Actual Output 1**

```text
Prime
```

**Sample Input 2**

```text
10
```

**Actual Output 2**

```text
Not prime
```

---

## Day 18

### Q35 - Print all factors of a given number

File: [`day18_code_q35.c`](day18_code_q35.c)

Status: ✅ Verified

Write a program to print all factors of a given number.

**Sample Input 1**

```text
6
```

**Actual Output 1**

```text
1 2 3 6
```

**Sample Input 2**

```text
10
```

**Actual Output 2**

```text
1 2 5 10
```

### Q36 - Find the HCF (GCD) of two numbers

File: [`day18_code_q36.c`](day18_code_q36.c)

Status: ✅ Verified

Write a program to find the HCF (GCD) of two numbers.

**Sample Input 1**

```text
12 18
```

**Actual Output 1**

```text
6
```

**Sample Input 2**

```text
7 9
```

**Actual Output 2**

```text
1
```

---

## Day 19

### Q37 - Find the LCM of two numbers

File: [`day19_code_q37.c`](day19_code_q37.c)

Status: ✅ Verified

Write a program to find the LCM of two numbers.

**Sample Input 1**

```text
4 5
```

**Actual Output 1**

```text
20
```

**Sample Input 2**

```text
7 3
```

**Actual Output 2**

```text
21
```

### Q38 - Find the sum of digits of a number

File: [`day19_code_q38.c`](day19_code_q38.c)

Status: ✅ Verified

Write a program to find the sum of digits of a number.

**Sample Input 1**

```text
123
```

**Actual Output 1**

```text
6
```

**Sample Input 2**

```text
999
```

**Actual Output 2**

```text
27
```

---

## Day 20

### Q39 - Find the product of odd digits of a number

File: [`day20_code_q39.c`](day20_code_q39.c)

Status: ✅ Verified

Write a program to find the product of odd digits of a number.

**Sample Input 1**

```text
12345
```

**Actual Output 1**

```text
15 (1*3*5)
```

**Sample Input 2**

```text
2468
```

**Actual Output 2**

```text
1 (no odd digits, assume 1)
```

### Q40 - Find the 1’s complement of a binary number and print it

File: [`day20_code_q40.c`](day20_code_q40.c)

Status: ✅ Verified

Write a program to find the 1’s complement of a binary number and print it.

**Sample Input 1**

```text
1010
```

**Actual Output 1**

```text
0101
```

**Sample Input 2**

```text
1111
```

**Actual Output 2**

```text
0000
```

---

## Day 21

### Q41 - Swap the first and last digit of a number

File: [`day21_code_q41.c`](day21_code_q41.c)

Status: ✅ Verified

Write a program to swap the first and last digit of a number.

**Sample Input 1**

```text
1234
```

**Actual Output 1**

```text
4231
```

**Sample Input 2**

```text
1001
```

**Actual Output 2**

```text
1001
```

### Q42 - Check if a number is a perfect number

File: [`day21_code_q42.c`](day21_code_q42.c)

Status: ✅ Verified

Write a program to check if a number is a perfect number.

**Sample Input 1**

```text
6
```

**Actual Output 1**

```text
Perfect number
```

**Sample Input 2**

```text
10
```

**Actual Output 2**

```text
Not perfect number
```

---

## Day 22

### Q43 - Check if a number is a strong number

File: [`day22_code_q43.c`](day22_code_q43.c)

Status: ✅ Verified

Write a program to check if a number is a strong number.

**Sample Input 1**

```text
145
```

**Actual Output 1**

```text
Strong number
```

**Sample Input 2**

```text
123
```

**Actual Output 2**

```text
Not strong number
```

### Q44 - Find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms

File: [`day22_code_q44.c`](day22_code_q44.c)

Status: ⚠️ Verified - output differs from the website's sample (the website's sample is wrong, see the note)

Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

**Sample Input 1**

```text
3
```

**Actual Output 1**

```text
Approximate sum: 2.58
```

Website shows `Approximate sum: 3.3` for this input. The series printed in the question (1 + 3/4 + 5/6 + 7/8 + ...) adds up to 2.58 for n = 3 and 4.36 for n = 5, not the 3.3 and 4.4 the website shows. This program sums the series exactly as written.

**Sample Input 2**

```text
5
```

**Actual Output 2**

```text
Approximate sum: 4.36
```

Website shows `Approximate sum: 4.4` for this input. The series printed in the question (1 + 3/4 + 5/6 + 7/8 + ...) adds up to 2.58 for n = 3 and 4.36 for n = 5, not the 3.3 and 4.4 the website shows. This program sums the series exactly as written.

---

## Day 23

### Q45 - Find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms

File: [`day23_code_q45.c`](day23_code_q45.c)

Status: ⚠️ Verified - output differs from the website's sample (the website's sample is wrong, see the note)

Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

**Sample Input 1**

```text
3
```

**Actual Output 1**

```text
Approximate sum: 1.78
```

Website shows `Approximate sum: 1.56` for this input. The series printed in the question (2/3 + 4/7 + 6/11 + 8/15 + ...) adds up to 1.78 for n = 3 and 2.84 for n = 5, not the 1.56 and 2.22 the website shows. This program sums the series exactly as written.

**Sample Input 2**

```text
5
```

**Actual Output 2**

```text
Approximate sum: 2.84
```

Website shows `Approximate sum: 2.22` for this input. The series printed in the question (2/3 + 4/7 + 6/11 + 8/15 + ...) adds up to 1.78 for n = 3 and 2.84 for n = 5, not the 1.56 and 2.22 the website shows. This program sums the series exactly as written.

> Topic: **Nested Loops without Arrays/Strings**

### Q46 - Print a 5x5 square of stars

File: [`day23_code_q46.c`](day23_code_q46.c)

Status: ✅ Verified

Write a program to print the following pattern:

```text
*****
*****
*****
*****
*****
```

**Sample Input**

```text
(no input)
```

**Actual Output**

```text
*****
*****
*****
*****
*****
```

---

## Day 24

### Q47 - Print a left-aligned star triangle

File: [`day24_code_q47.c`](day24_code_q47.c)

Status: ✅ Verified

Write a program to print the following pattern:

```text
*
**
***
****
*****
```

**Sample Input**

```text
(no input)
```

**Actual Output**

```text
*
**
***
****
*****
```

### Q48 - Print a triangle of increasing digits

File: [`day24_code_q48.c`](day24_code_q48.c)

Status: ✅ Verified

Write a program to print the following pattern:

```text
1
12
123
1234
12345
```

**Sample Input**

```text
(no input)
```

**Actual Output**

```text
1
12
123
1234
12345
```

---

## Day 25

### Q49 - Print a triangle that counts up to 5

File: [`day25_code_q49.c`](day25_code_q49.c)

Status: ✅ Verified

Write a program to print the following pattern:

```text
5
45
345
2345
12345
```

**Sample Input**

```text
(no input)
```

**Actual Output**

```text
5
45
345
2345
12345
```

### Q50 - Print an inverted star triangle

File: [`day25_code_q50.c`](day25_code_q50.c)

Status: ✅ Verified

Write a program to print the following pattern:

```text
*****
 ****
  ***
   **
    *
```

**Sample Input**

```text
(no input)
```

**Actual Output**

```text
*****
 ****
  ***
   **
    *
```

Note: The website lists a second 'sample output' that reads 'Note: Spaces indicate indentation.' That is a remark about the pattern, not a second expected output.

---

## Day 26

### Q51 - Print a right-aligned number triangle

File: [`day26_code_q51.c`](day26_code_q51.c)

Status: ✅ Verified

Write a program to print the following pattern:

```text
    5
   45
  345
 2345
12345
```

**Sample Input**

```text
(no input)
```

**Actual Output**

```text
    5
   45
  345
 2345
12345
```

### Q52 - Print a left-aligned star diamond (5 rows)

File: [`day26_code_q52.c`](day26_code_q52.c)

Status: ✅ Verified

Write a program to print the following pattern:

```text
*

*
*
*

*
*
*
*
*

*
*
*

*
```

**Sample Input**

```text
(no input)
```

**Actual Output**

```text
*
***
*****
***
*
```

Note: The website's sample output only says 'Pattern with stars spaced irregularly as shown', so the pattern printed in the question itself is the expected output.

---

## Day 27

### Q53 - Print a left-aligned star diamond (9 rows)

File: [`day27_code_q53.c`](day27_code_q53.c)

Status: ✅ Verified

Write a program to print the following pattern:

```text
*
***
*****
*******
*********
*******
*****
***
*
```

**Sample Input**

```text
(no input)
```

**Actual Output**

```text
*
***
*****
*******
*********
*******
*****
***
*
```

### Q54 - Print a centred star diamond

File: [`day27_code_q54.c`](day27_code_q54.c)

Status: ✅ Verified

Write a program to print the following pattern:

```text
   *
  ***
 *****
*******
 *****
  ***
   *
```

**Sample Input**

```text
(no input)
```

**Actual Output**

```text
   *
  ***
 *****
*******
 *****
  ***
   *
```

Note: The website's sample output only says 'Pattern with layers of stars as shown', so the pattern printed in the question itself is the expected output.

---

## Day 28

### Q55 - Print all the prime numbers from 1 to n

File: [`day28_code_q55.c`](day28_code_q55.c)

Status: ✅ Verified

Write a program to print all the prime numbers from 1 to n.

**Sample Input 1**

```text
10
```

**Actual Output 1**

```text
2 3 5 7
```

**Sample Input 2**

```text
20
```

**Actual Output 2**

```text
2 3 5 7 11 13 17 19
```

> Topic: **Arrays (1D)**

### Q56 - Read and print elements of a one-dimensional array

File: [`day28_code_q56.c`](day28_code_q56.c)

Status: ✅ Verified

Read and print elements of a one-dimensional array.

**Sample Input 1**

```text
3
10 20 30
```

**Actual Output 1**

```text
10 20 30
```

**Sample Input 2**

```text
5
1 2 3 4 5
```

**Actual Output 2**

```text
1 2 3 4 5
```

---

## Day 29

### Q57 - Find the sum of array elements

File: [`day29_code_q57.c`](day29_code_q57.c)

Status: ✅ Verified

Find the sum of array elements.

**Sample Input 1**

```text
4
2 4 6 8
```

**Actual Output 1**

```text
20
```

**Sample Input 2**

```text
3
1 1 1
```

**Actual Output 2**

```text
3
```

### Q58 - Find the maximum and minimum element in an array

File: [`day29_code_q58.c`](day29_code_q58.c)

Status: ✅ Verified

Find the maximum and minimum element in an array.

**Sample Input 1**

```text
5
2 9 1 4 7
```

**Actual Output 1**

```text
Max=9, Min=1
```

**Sample Input 2**

```text
3
10 10 10
```

**Actual Output 2**

```text
Max=10, Min=10
```

---

## Day 30

### Q59 - Count even and odd numbers in an array

File: [`day30_code_q59.c`](day30_code_q59.c)

Status: ✅ Verified

Count even and odd numbers in an array.

**Sample Input 1**

```text
6
1 2 3 4 5 6
```

**Actual Output 1**

```text
Even=3, Odd=3
```

**Sample Input 2**

```text
4
2 4 6 8
```

**Actual Output 2**

```text
Even=4, Odd=0
```

### Q60 - Count positive, negative, and zero elements in an array

File: [`day30_code_q60.c`](day30_code_q60.c)

Status: ✅ Verified

Count positive, negative, and zero elements in an array.

**Sample Input**

```text
5
-1 0 1 2 -2
```

**Actual Output**

```text
Positive=2, Negative=2, Zero=1
```

---

## Day 31

### Q61 - Search for an element in an array using linear search

File: [`day31_code_q61.c`](day31_code_q61.c)

Status: ✅ Verified

Search for an element in an array using linear search.

**Sample Input 1**

```text
5
1 2 3 4 5
3
```

**Actual Output 1**

```text
Found at index 2
```

**Sample Input 2**

```text
4
10 20 30 40
25
```

**Actual Output 2**

```text
-1
```

### Q62 - Reverse an array without taking extra space

File: [`day31_code_q62.c`](day31_code_q62.c)

Status: ✅ Verified

Reverse an array without taking extra space.

**Sample Input**

```text
4
1 2 3 4
```

**Actual Output**

```text
4 3 2 1
```

---

## Source

All questions and sample cases are taken from the official challenge site:
<https://maitysoumik.github.io/basic-coding-with-c/>
