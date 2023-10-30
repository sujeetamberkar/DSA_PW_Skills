# Multilevel Inheritence
    A ---- > B ---- > C

    Be careful with what type is comming from  A to B (In what form )

# Multiple Inherience 
    (2 Bap)

## Diamond Problem 
    - 1) When two instance of base class are present in the base classes are present in the derived class 

    - 2)  A    ----> B , C
    - 3)  B,C  ----> D    (D has two instance of A)

                A
              /   \
            /      \
           B        C
            \      /
              \   /
               \/
               D


