# Função de potência de um número
power = lambda num: num ** 2

# Função que verifica se o número é par
is_even = lambda x: x % 2 == 0

# Função que divide um número por outro
div_num = lambda x, y: x / y

# Função que inverte uma string
reverse_string = lambda s: s[::-1]

print(power(5))
print(power(9))
print(is_even(27))
print(is_even(30))
print(div_num(10, 2))
print(div_num(6, 2))
print(reverse_string("Python"))
print(reverse_string("Javascript"))

# Funcionalidades relacionadas aos filmes
movies_list = ["Titanic", "The Godfather", "Inception", "Jurassic Park", "The Matrix"]
ratings = {
    "Titanic": [8.5, 9.0, 7.5],
    "The Godfather": [9.5, 9.8, 8.0],
    "Inception": [8.0, 7.0, 8.5],
    "Jurassic Park": [7.5, 7.0, 8.0],
    "The Matrix": [8.8, 9.2, 8.5]
}

# Função para calcular a média de avaliações de um filme
average_rating = lambda movie_name: sum(ratings[movie_name]) / len(ratings[movie_name])

# Função que verifica se um filme está na lista
check_movie = lambda movie_name: movie_name in movies_list

# Função para recomendar um filme com base na avaliação média
recomend_movie = lambda movie_name: f"Recomendo assistir {movie_name} com média de {average_rating(movie_name):.2f}"


print(f"Média de Avaliação do filme The Matrix: {average_rating("The Matrix"):.2f}")
print(f"Inception está na lista? {check_movie("Inception")}")
print(f"{recomend_movie("Titanic")}")