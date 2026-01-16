moviesList = ["Titanic", "The Godfather", "Inception", "Jurassic Park"]

# 1 - Iterando valores de uma lista de filmes usando while
index = 0
while index < len(moviesList):
    print(moviesList[index])
    index += 1
print("-" * 20)

# 2 - Quando a condição for atendida, o loop será encerrado
index = 0
while index < len(moviesList):
    if moviesList[index] == "Inception":
        break
    print(moviesList[index])
    index += 1

print("-" * 20)

# 3 - Quando a condição for atendida, o loop vai para próxima iteração
index = 0
while index < len(moviesList):
    if moviesList[index] == "Inception":
        index += 1
        continue
    print(moviesList[index])
    index += 1

print("-" * 20)

# 4 - Avaliação do filme com While
movieName = input("Digite o nome do filme:\n")
movieRating = int(input("Digite quantas avaliações deseja fazer:\n"))
total = 0
count = 0

while count < movieRating:
    note = float(input("Digite a nota para o filme:\n"))
    total += note
    count += 1

if movieRating > 0:
    average = total / movieRating
else:
    average = 0

print(f"Média de avaliação do filme {movieName} é: {average:.2f}")