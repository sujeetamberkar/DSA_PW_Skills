Cyclic Sort
## Speciality of Cyclic Sort 
    
    - 1) Bubble Sort, Selection Sort , Insertion Sort  ---- > O (n^2)
    - 2) Merge Sort, Quick Sort                       ----> O (n log n)
    - 3) Similarly Cyclic Sort ( Special Case )       ----> O (n)


## Algorithm 
    - 1) It looks useless 
         a = {5,1,2,4,3}
    
    - 2) Dry Run
                0   1   2   3   4   
        a = {   5   1   2   4   3   }
            {  (5)   1   2   4   3   }

            Put 5 in its correct Position and Swap 
            a = {   3   1   2   4   5   }  
            a = { (3)   1   2   4   5   }

            Put 3 in its correct position and Swap 
            a = {  2   1   3   4   5   }
            a = { (2)   1   3   4   5   }

            Put 2 in its correct Position 
            a = {   1   2   3   4   5   }


                0   1   2   3   4   5
        a = {   5   1   6   4   4   2   }

            Put 5 in its proer place 
            a = {4  1   6   3   5   2}

            Put 4 in its Proper place 
            a ={3   1   6   4   5   2}

            Put 3 in its proper place
            a={6    1   3   4   5   2}

            Put 6 in its proper place 
            a={2    1   3   4   5   6}

            Put 2 in its proper place 
            a={1    2   3   4   5   6}

