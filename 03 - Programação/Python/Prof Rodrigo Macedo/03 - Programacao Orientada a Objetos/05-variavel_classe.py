class Game:
    total_games = 0 # Variável de classe para contar o número total de jogos
    def __init__(self, name="", yearLaunch=0, multiplayer=0, note=0):
        self.name = name
        self.yearLaunch = yearLaunch
        self.multiplayer = multiplayer
        Game.total_games += 1
        self.note = note
        self.totalEvaluation = 0
        self.evaluators = 0

    def __str__(self):  # Remove o __main__.Game object at 0x00000123
        return f"Game: {self.name}"

    def technical_sheet(self):
        print("###Dados do jogo###")
        print(f"Nome do jogo: {self.name}")
        print(f"Ano de Lançamento: {self.yearLaunch}")
        print(f"Multiplayer: {self.multiplayer}")
        print(f"Nota: {self.note}\n")

    def evaluate(self, note):
        self.totalEvaluation += note
        self.evaluators += 1

    def average(self):
        print(f"Média do filme {self.name}: {self.totalEvaluation / self.evaluators}")


game1 = Game("The Legend of Zelda", 2017, False, 9.5)
game2 = Game("Fortnite", 2017, True, 8.0)
game3 = Game("Red Dead Redemption 2", 2018, False, 10.0)

game1.technical_sheet()
game2.technical_sheet()
game1.evaluate(9.0)
game1.evaluate(7.5)
game2.evaluate(7.5)
game1.evaluate(6.5)
game1.average()
game2.average()



# Exibindo um número total de jogos criados
print(f"Total de jogos criados: {Game.total_games}")