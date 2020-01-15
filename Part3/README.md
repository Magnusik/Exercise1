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
 > test
 
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 > *Your answer here*
 
 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > *Your answer here*
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > *Your answer here*
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > *Your answer here*
