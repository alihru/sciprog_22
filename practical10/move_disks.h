void move_disks(int n, char source, char target, char auxiliary){

    // if only one disk needs to be moved, we are at the end of a subproblem 
    // and the smallest disk one needs to be moved to either the auxiliary rod 
    // or the target rod
    if (n == 1){
        printf("Move disk 1 from rod %c to rod %c\n", source, target);
        return;
    }   
    
    // 1) we need to move n-1 disks from the source rod to the auxiliary rod, using the 
    //    target rod as the auxiliary rod 
    move_disks(n - 1, source, auxiliary, target);
    // 2) move the heaviest disk onto the target rod from the source rod
    printf("Move disk %d from rod %c to rod %c\n", n, source, target);
    // 3) move all the other disks from the auxiliary rod onto the target, using the 
    //    original source rod as the auxiliary rod
    move_disks(n - 1, auxiliary, target, source);

}

