package main

import (
	"bufio"
	"fmt"
	"os"
	"time"
)

var (
	writer *bufio.Writer = bufio.NewWriter(os.Stdout)
	reader *bufio.Reader = bufio.NewReader(os.Stdin)
)

func printf(f string, a ...interface{}) {
	fmt.Fprintf(writer, f, a...)
}

func scanf(f string, a ...interface{}) {
	fmt.Fscanf(reader, f, a...)
}

func main() {
	defer writer.Flush()
	var (
		N int
	)
	t, err := time.Parse("2006-01-02", "2014-04-02")
	if err != nil {
		panic(err)
	}
	scanf("%d", &N)
	N -= 1
	printf("%v", t.AddDate(0, 0, N).Format("2006-01-02"))
}
