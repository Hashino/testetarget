fn invert_string(string: &str) -> String {
    let mut inverted = String::new();
    for c in string.chars().rev() {
        inverted.push(c);
    }
    inverted
}

fn main() {
    println!("Digite uma string:");
    let mut input = String::new();

    std::io::stdin()
        .read_line(&mut input)
        .expect("Falha ao ler a entrada");

    let trimmed_input = input.trim();
    let inverted = invert_string(trimmed_input);
    println!("String invertida: {}", inverted);
}
