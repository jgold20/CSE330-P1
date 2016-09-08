#include "q.h"
#include <ucontext.h>
#include "tcb.h"


void start_thread(void (*function)(void)) {
    /*
     * Allocate a stack (use malloc) of size '8192'
     * allocate a tcb (use malloc)
     * call init_TCB with appropriate args
     * call addQ to add this TCB into the "RunQ" which is a global header pointer
     */
}

// Step 3
void run() {
    ucontext_t parent;  // Get a place to store the main context, for faking
    getcontext(&parent); // magic sauce?
    swapcontext(&parent, &(RunQ->context)); // start the first thread
}

// similar to run
void yield() {
    // rotate the run Q;
    // swap the context, from previous thread to the thread pointed to by RunQ
}