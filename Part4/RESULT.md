What I discovered by running all the scripts was that neither of them showed the same value.
I also tried running them individually several times in a row, and the result was not the same.
This is because one of the threads does not get to finish before the other one starts.
So essentially function one is incrementing, and before it completes all 1m increments, the other function starts. 
This also happened with the goroutine.The values varied between -100k to +100k. However, if I for instance put 
increment() and then go decrement(). I would get 0 as the answer, which is what you would get if both functions completed.
+1m -1m = 0. However, if I did go increment() and then decrement(), I the outs would vary.