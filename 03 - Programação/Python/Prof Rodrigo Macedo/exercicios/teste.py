movieName = input("Digite o nome do filme:\n")
movieRating = int(input("Digite quantas avaliações deseja fazer:\n"))
total = 0

for movie in range(movieRating):
    aval = int(input("Digite quantas vezes quer dar a nota:\n"))
    total += aval

if movieRating > 0:
    media = total / movieRating
else:
    media = 0

print(f"Média de avaliação do filme {movieName} é: {media:.2f}")
