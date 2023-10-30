# Shallow Coppy 
- 1) Shallow is not a proper coppy
- 2) Object 1 is intized and 
    Object 2= Object 1
    now when you change Object 1, 
    Object 2 will also change 

    (NOT INDEPENDENT)

# Deep Copy 
    -1) Allocate a new memory and then copy the values of object 1 to object 2


## Coppy COnstructor 
    Coppy COnstructor is used to coppy object 
    Two ways to intialize Coppy COnstructor 
    Bike b1;
    Bike b2 = b1; (Coppy constructor is called) 
    Bike b2 (b1); (COPY Constructor is called )
    // In Copy COnstructor to avoid an infinite loop (Always call by refrence)