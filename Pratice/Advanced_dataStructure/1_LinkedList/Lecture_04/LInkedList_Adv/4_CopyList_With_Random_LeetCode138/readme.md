
# Question
    -1) Every Node is pointing to the next node and a random NODE
    -2) We need to create a deep copy such that the same random adress is coppied 

# Solution 
    - 1) Create a deep copy with random connections 
    - 2) AS OF NOW Random of all nodes -> NULL 
    - 3) Create ALTERNATE CONNECTION

            Use a dummy NODE to create cross (Duplicate, OG)

    -4 ) Now set the random Pointers of the Duplicate
            Duplicate->random = OG->random->next

    -5 ) Remove Connections (Seorate the connections )
