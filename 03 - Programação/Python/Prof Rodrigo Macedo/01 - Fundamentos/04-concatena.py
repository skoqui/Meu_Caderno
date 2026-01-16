name = input("Digite o nome do filme:\n")
yearLaunch = int(input("Digite o ano de lançamento do filme:\n"))
noteMovie = float(input("Digite a nota do filme:\n"))

print("Dados do fime")
print("="*20)

# Alternativa 1
print("Nome do fime:", name)
print("Ano do lançamento:", yearLaunch)
print("Nota do filme:", noteMovie)

# Alternativa 2
print("Nome do Filme:", name, "\nAno de Lançamento:", yearLaunch, "\nNota do Filme", noteMovie)

# Alternativa 3
print(f"Nome do Filme: {name}\n"
      f"Ano do lançamento: {yearLaunch}\n"
      f"Nota do Filme: {noteMovie}\n")
