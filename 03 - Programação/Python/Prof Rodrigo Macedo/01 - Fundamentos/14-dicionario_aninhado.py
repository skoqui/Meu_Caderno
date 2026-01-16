import pprint

filmsDict = {
    "inception": {
        "yearRelease": 2010,
        "imdbRating": 8.8,
        "genre": ["Sci-fi", "Action", "Thriller"]
    },
    "Interestelar": {
        "yearRelease": 2014,
        "imdbRating": 8.6,
        "genre": ["Sci-fi", "Drama"]  
    },
    "The Dark Knight": {
        "yearRelease": 2008,
        "imdbRating": 9.0,
        "genre": ["Action", "Drama", "Crime"]
    }
}
pp = pprint.PrettyPrinter(depth=4)
pp.pprint(filmsDict)

# 1 - Buscar uma informação dentro do dicionário
print(filmsDict["Interestelar"]["genre"])

# 2 - Adicionar novo item
filmsDict["inception"]["director"] = "Christopher Nolan"
print(filmsDict["inception"])

# 3 - Excluir um dicionário
del filmsDict["The Dark Knight"]
pp.pprint(filmsDict)