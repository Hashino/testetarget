package main

import (
	"encoding/json"
	"fmt"
	"os"
)

type dados struct {
	Dia   int     `json:"dia"`
	Valor float64 `json:"valor"`
}

func main() {
	file, err := os.ReadFile("dados.json")
	if err != nil {
		panic(err)
	}

	var data []dados
	json.Unmarshal(file, &data)

	var min float32
	var max float32
	var avg float32

	var n int

	for i := 0; i < len(data); i++ {
		if i == 0 {
			min = float32(data[i].Valor)
			max = float32(data[i].Valor)
			avg = float32(data[i].Valor)
		} else {
			if data[i].Valor > 0 {
				if min > float32(data[i].Valor) {
					min = float32(data[i].Valor)
				}
				if max < float32(data[i].Valor) {
					max = float32(data[i].Valor)
				}

				avg += float32(data[i].Valor)
				n++
			}
		}
	}

	avg = avg / float32(n)

	var n_dias int

	for i := 0; i < n; i++ {
		if data[i].Valor > float64(avg) {
			n_dias++
		}
	}

	fmt.Printf("Menor valor: %.2f\n", min)
	fmt.Printf("Maior valor: %.2f\n", max)
	fmt.Printf("Média: %.2f\n", avg)
	fmt.Printf("Número de dias acima da média: %d\n", n_dias)
}
