int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;        
    //arr is constant pointer and we can't change data in symbol table
    cout << *ptr << endl;