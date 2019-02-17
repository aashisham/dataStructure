# Recursion
Recursion is a process of expressing a function in terms of itself. A function is said to be recursive function if it calls itself again and again. We can also define recursion as a process in which a function call itself with reduced input and has a base condition to stop the process . i.e inorder to solve a problem recursively, first the problem must be written in a recursive form and second, the problem statement must include a stopping condition.

When a function is called, the return address, the values of local and formal variable are pushed onto the stack, a block of memory of contiguous location, set aside for this purpose. Once the return statement is encountered, control comes back to the previous call by using the return value present in the stack and it substitute the return value to the call.

    long int factorial(int n) {
        if(n<=1){
            return 1;
        } else 
            return(n*factorial(n-1));
    } 
