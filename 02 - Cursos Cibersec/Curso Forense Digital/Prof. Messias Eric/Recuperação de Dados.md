 ------
 
## 🔹Comandos Bash
#softwares 

```bash

foremost -i Imagem.iso.img -t pdf,jpg,jpeg -o saida_foremost
mmls windows.img # Serve para ver partições
fdisk -l # A mesma coisa do mmls
strings WindowsEV01-DUMP.img | grep "%PDF"
hexedit WindowsEV01-DUMP.img

```


> O nome do arquivo em teste é **`WindowsEV01-DUMP.img`**


Ao executar o **`fdisk -l WindowsEV01-DUMP.img`**:
```bash
Dispositivo             Início      Fim  Setores Tamanho Tipo
WindowsEV01-DUMP.img1     2048   206847   204800    100M Sistema EFI
WindowsEV01-DUMP.img2   206848   239615    32768     16M Microsoft reservado
WindowsEV01-DUMP.img3   239616 82791642 82552027   39,4G Microsoft dados básico
WindowsEV01-DUMP.img4 82792448 83881983  1089536    532M Windows ambiente de rec
```


### Foremost:



