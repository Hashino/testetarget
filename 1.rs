fn main() {
    let indice = 13;
    let mut soma = 0;
    let mut k = 0;

    while k < indice {
        k += 1;
        soma += k;
    }

    println!(
        "A soma dos {} primeiros números inteiros é: {}",
        indice, soma
    );
}
