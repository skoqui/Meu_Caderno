# 1 - Função para imprimir um nome completo
def full_name(first_name, last_name):
    print(f"Nome é: {first_name} {last_name}")

full_name("Eduardo", "Scoqui")

# 2 - Função para somar dois números
def sum_number(a, b):
    return a + b

print(f"A soma é: {sum_number(10, 50)}")

# 3 - Função com parâmetro default
def address(country="Brasil"):
    print(f"Eu moro em: {country}")

address()
address("Portugal")

# 4 - Função para avaliar um filme
def rate_movie(num_ratings, movie_name):
    total = 0
    for i in range(num_ratings):
        note = float(input("Digite qual a nota do filme:\n"))
        total += note

    if num_ratings > 0:
        average = total / num_ratings
    else:
        average = 0

    print(f"Média de avaliação do filme: {movie_name} é: {average:.2f}")

rate_movie(2, "Sonic")
