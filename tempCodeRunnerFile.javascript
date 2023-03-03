var arr = ["C++", "Java", "JS", "Python"];
     
    console.log("Original array: "+arr);
     
        // Position where from the element is
        // going to move here 'python' is moved
        var x = 3;
         
        // Position at which element is to be
        // moved here 'python' is moved to 
        // index 1 which is index of 'Java'
        var pos = 1;
     
        // Store the moved element in a temp
        // variable
        var temp = arr[x];
         
        // shift elements forward
        var i;
        for (i = x; i >= pos; i--)
            {
                arr[i] = arr[i - 1];
            }
         
        // Insert moved element at position 
        arr[pos] = temp;
     
    console.log("After move: "+arr);