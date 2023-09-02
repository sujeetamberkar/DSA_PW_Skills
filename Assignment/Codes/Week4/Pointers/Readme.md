# C++ Assignments | Pointers | Week 4

## Q1 : Write a program to find the product of two numbers using pointers.

[CODE](https://github.com/sujeetamberkar/DSA_PW_Skills/tree/main/Assignment/Codes/Week4/Pointers/Q1)

## Q2 : int *p, q;

Anser: p is a pointer and q is an integer.

## Q3 : Find the output of the following code snippet.

```

int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;

```
Output:
11 10 11

[CODE](https://github.com/sujeetamberkar/DSA_PW_Skills/tree/main/Assignment/Codes/Week4/Pointers/Q3)

## Q4: Find the output of the following code snippet.
```
int a = 15, b = 20;
int *ptr = &a;
int *ptr2 = &b;
*ptr = *ptr2;

```
Answer: a gets value of b
[CODE](https://github.com/sujeetamberkar/DSA_PW_Skills/tree/main/Assignment/Codes/Week4/Pointers/Q4)

## Q5:Is the following program snippet correct?
```
int a = 10, b = 20;
int *ptr;
*ptr = 5;
```
[CODE](https://github.com/sujeetamberkar/DSA_PW_Skills/tree/main/Assignment/Codes/Week4/Pointers/Q5)
### NO,

In this code, you are creating two variables 'a' and 'b'.

int a=10, int b=20

Assigns the respective value to 'a' and 'b'

int *ptr, Here we are not assigning any value to the created interger pointer

We should assign some value, or set it as NULL

*ptr = 5, This statement makes no sense, because the ptr can be pointing to any garbage location