

```dataview
LIST 
FROM [[HTML]]
```

-----
# 🗒️ Busca por tabelas

```dataview
table file.name as Nome, file.size as Tamanho
from "02 - Cursos Cibersec"

```

-----

# 🏷️ Busca por tags
```dataview
list 
from "01 - Anotações"
where contains(file.tags, "#daily")
```

----------
# ✍️ Busca por nome

```dataview
list
from "01 - Anotações"
where file.name = "2025-08-07"
```

--------
# 🎯 Busca por nome e tags
```dataview
list
from "01 - Anotações"
where contains(file.name, "2025-08") and contains(file.tags, "#daily")
```


------
#  📆 Busca por data

```dataview
list 
from "01 - Anotações"
where data = date(2025-08-08)

```

-----
# 📁 Busca por propriedade

```dataview
list
from "02 - Cursos Cibersec"
where Professor = "Gabriel Pato"
```

```dataview
list
from "02 - Cursos Cibersec"
where contains(tags, "bugbounty")
```


```dataview
table Professor, Data, tags
from "02 - Cursos Cibersec"
where Professor
```
