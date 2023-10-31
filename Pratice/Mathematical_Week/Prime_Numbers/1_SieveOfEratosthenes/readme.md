# Prime Numbers
    -1) Numbers having only two factors 
        - a) Number itself 
        - b) 1
    -2) 2 is the only even prime, (Smallest Prime Number)

# Factor
    -1) If i is a factor of n, then, (n/i) is also a factor of n
    -2) If it is a perfect square (then only it is not a pair) 
    -3) Perfect Square will always have odd number of factors 
    -4) Other Composite numbers will always have even number of factors 

    Why root N ?
    - 1) 50% of the factors lie between 2 and root (n), and since factors are always in pair 
    -2) Check only 2 to root(n)


# Sieve of Erathosthenes
    -1) Draw a grind 1 to 100
    - 2) Check from 1 to root (N)
    -3 ) Let us assume 2, 
            2 is prime factor (So any mutiple of 2 will not be a prime factor)
    - 4) Check for 3, 
            3 is a prime factor mark all the multiple of 3
    - 5) if alredy marked then skip
    - 6) Mark all the multiple of 5,7