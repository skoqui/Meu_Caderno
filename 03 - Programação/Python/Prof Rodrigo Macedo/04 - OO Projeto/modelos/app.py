from biblioteca import Biblioteca


biblioteca_cidade = Biblioteca("Biblioteca da Cidade")
biblioteca_shopping = Biblioteca("Biblioteca do Shopping")

biblioteca_cidade.alterna_estado()


def main():
    Biblioteca.listar_bibliotecas()

if __name__ == "__main__":
    main()