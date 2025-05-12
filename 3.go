package main

import (
	"encoding/json"
	"fmt"
	"os"
)

func check(e error) {
	if e != nil {
		panic(e)
	}
}

type dados struct {
	Dia   int     `json:"dia"`
	Valor float64 `json:"valor"`
}

func main() {
	data, err := os.ReadFile("dados.json")
	check(err)

	var jdata []dados
	json.Unmarshal(data, &jdata)

	var min float32
	var max float32
	var avg float32

	var n int

	for i := 0; i < len(jdata); i++ {
		if i == 0 {
			min = float32(jdata[i].Valor)
			max = float32(jdata[i].Valor)
			avg = float32(jdata[i].Valor)
		} else {
			if jdata[i].Valor > 0 {
				if min > float32(jdata[i].Valor) {
					min = float32(jdata[i].Valor)
				}
				if max < float32(jdata[i].Valor) {
					max = float32(jdata[i].Valor)
				}

				avg += float32(jdata[i].Valor)
				n++
			}
		}
	}

	avg = avg / float32(n)

	var n_dias int

	for i := 0; i < n; i++ {
		if jdata[i].Valor > float64(avg) {
			n_dias++
		}
	}

	fmt.Printf("Menor valor: %.2f\n", min)
	fmt.Printf("Maior valor: %.2f\n", max)
	fmt.Printf("Média: %.2f\n", avg)
	fmt.Printf("Número de dias acima da média: %d\n", n_dias)
}
