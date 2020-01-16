# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 > Concurrency is when two tasks can start, run and complete at the same time. Parallelism is when two tasks when happens at the same time. 
 The difference is that concurrency means dealing with several tasks at the same time and parallelism means doing several tasks at the same time. You could have concurrency and not parallism for instant, which means you are able to process multiple tasks at the same time, but not execute them at the same time. Moreover, if you have parallelism, but not concurrency, you can execute multiple tasks at the same time, but not process them at the same time.  
 
 ### Why have machines become increasingly multicore in the past decade?
 > Machines have become increasingly multicore in the past decade because technology has come so far that we are reaching physical limits of how many transistors/gates we can push into a limited space in the processor. This means that to increase clock speed further we need more cores to achieve parallelism.
 
 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 > Concurrent execution helps solving problems which happens in real-time where you are dependant that different routines does not happen at the same time. Example of a problem like this would be a cassette player, elevator and traffic system with lights.
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > Concurrent programs could make the life easier for the programmer in the sense of the possibility to track all inputs to the system. However, dealing with all the inputs is where it makes it harder.
 
 ### What are the differences between processes, threads, green threads, and coroutines?
 > A process is an executing part of an instance. A thread is a path of execution within a process, or simply a line of control within a program.
The difference is that the process is the state of the program pluss the states of all the threads that are executing within the program.
A thread is an entity within a process that can be scheduled for execution. A green thread is thread that is scheduled by a runtime library or Virtual machine.
 
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 > pthread_create() is a function that starts a new thread in a calling process. threading.Thread() also creates threads, which makes it possible to run multiple tasks and function calls at the same time. 
 Go routines are functions or methods that run concurrently with other functions or methods. They are less costly than threads and can be thought of as light weight threads.
 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > GIL makes it so that the Threads in python cannot execute at the same time. With GIL used in the interpreters only one thread is allowed to execute at a time.
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > *Your answer here*
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > *Your answer here*
