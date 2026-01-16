filmInception = {
    "title": "Interception",
    "yearRelease": 2010,
    "imdbRating": 8.8,
    "genre": ["Sci-fi", "Action", "Thriller"]
}
print(filmInception)
print(len(filmInception))
print(type(filmInception))

# 1 - Recuperar um elemento do dicionário
print(filmInception["genre"])
print(filmInception.get("imdbRating"))

# 2 - Buscar apenas as chaves do dicionários
print(filmInception.keys())

# 3 - Buscar apenas os valores do dicionários
print(filmInception.values())

# 4 - Buscar itens do diconário com chave e valor
print(filmInception.items())

# 5 - Adicionar itens no dicionário
filmInception["director"] = "Christopher Nolan"
print(filmInception)

# 6 - Atualizar itens no dicionario
filmInception.update({"imdbRating": 8.7})
print(filmInception)

# 7 - Remover itens no dicionário
filmInception.pop("director")
print(filmInception)