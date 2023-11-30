    - 1) Node *root =new Node(arr[0])
    - 2) q.push(root)
    - 3) once the left and right of the node is set, remove it from queue

2 POinters 
    i, j
1   2, 3, 4 5 ,N,6,N,N,7,8,9,N (Assume NULL) 

Now remove the Node standing in the front of queue


    steps:
        1) Node *temp = q.front(), q.pop()
           Node *l = new Node(arr[i])
           Node *r = mew Node(arr[j])
           temp->left = l;
           temp->right = r;
           i=i+2;
           j=j+2;
           
           push l,r (IF NOT NULL) 
