class Game:
    def __init__(self, name="", yearLaunch=0, multiplayer=0, note=0):
        self.name = name
        self.yearLaunch = yearLaunch
        self.multiplayer = multiplayer
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

class GameStudio:
    def __init__(self, name=""):
        self.name = name
        self.game = []

    def add_game(self, game):
        self.game.append(game)

    def evaluate_studio_qualty(self):
        total_notes = sum(game.note for game in self.game)
        num_games = len(self.game)
        if num_games == 0:
            print(f"O estúdio {self.name} ainda não lançou o jogo.")
        else:
            average_note = total_notes / num_games
            print(f"Avaliação média dos jogos do estúdio {self.name}: {average_note:.2f}")

studio = GameStudio("Awesome Games")
game1 = Game("The Legend of Zelda", 2017, False, 9.6)
game2 = Game("Fortnite", 2017, True, 8.0)
game3 = Game("The Last of Us II", 2020, False, 9.0)

studio.evaluate_studio_qualty()

for game in studio.game:
    game.technical_sheet()