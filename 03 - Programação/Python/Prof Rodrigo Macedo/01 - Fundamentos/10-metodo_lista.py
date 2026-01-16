filmsList = ["Inception", "The Shawshank Redemption", 
             "The Dark Kgnith", "Pulp Fiction", "Interstellar"]

# 1 - Tamanho da lista
print(len(filmsList))

# 2 - Recuperar um item da lista pelo índice pelo nome
print(filmsList.index("Interstellar"))

# 3 - Adicionar item ao final da lista
filmsList.append("The Lord of The Rings")
print(filmsList)

# 4 - Ordenando a lista
filmsList.sort()
print(filmsList)

# 5 - Copiar os itens de uma lista para outra
filmCopy = filmsList.copy()
filmCopy.remove("Pulp Fiction")
print(filmCopy)

# 6 - Remove todos os itens da lista
filmsList.clear()
print(filmsList)