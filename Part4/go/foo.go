// Use `go run foo.go` to run your program

package main

import (
    . "fmt"
    "runtime"
    "time"
)

var i = 0

func incrementing() {
    for k :=0; k<1000000; k++{
      i++;
    }
}

func decrementing() {
  for k :=0; k<1000000; k++{
    i--;
  }
}

func main() {
    runtime.GOMAXPROCS(runtime.NumCPU())
    go incrementing()
    go decrementing()

    time.Sleep(100*time.Millisecond)
    Println("The magic number is:", i)
}
