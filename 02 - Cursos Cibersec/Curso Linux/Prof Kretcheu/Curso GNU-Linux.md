---
Curso: GNU/Linux
Professor: Paulo Kretcheu
Plataforma:
  - Youtube
Data início: 2025-09-15
Data término:
tags:
  - "#pentest"
  - linux
Status: false
---
---

# 🔹Aula 01
### Softwares Livres
↳ É qualquer software cuja licença garanta as 4 liberdades essenciais.

Segundo a **Free Software Foundation (FSF)**, um programa é considerado livre quando garante **4 liberdades**:

1. **Liberdade 0** → executar o programa para qualquer finalidade.
2. **Liberdade 1** → estudar como o programa funciona e adaptá-lo (o código-fonte precisa estar disponível).
3. **Liberdade 2** → redistribuir cópias para ajudar outras pessoas.
4. **Liberdade 3** → melhorar o programa e liberar as melhorias para toda a comunidade.

Ou seja, não é só "não pagar". O foco é **ter controle sobre o software** e não ficar preso a uma empresa.

### Diferença entre **Software Livre** e **Código Aberto**
- **Software Livre (Free Software)** → foco na **liberdade do usuário**.
- **Open Source (Código Aberto)** → foco na **colaboração técnica**.  

⚠️ Nem todo código aberto é necessariamente "livre" (exemplo: pode permitir leitura mas restringir modificações).

### Exemplos no Linux
O Linux em si é um grande exemplo de software livre.  
Alguns softwares livres muito usados no ecossistema Linux:
- **Kernel Linux** (GPL – GNU General Public License)
- **GNU Coreutils** (ls, cat, echo, etc.)
- **Bash** (interpretador de comandos)
- **LibreOffice** (alternativa ao Microsoft Office)
- **Firefox** (navegador livre)
- **GIMP** (editor de imagens, alternativa ao Photoshop)
- **VLC** (reprodutor de mídia)
- **Inkscape** (edição de vetores, alternativa ao Illustrator)

### Exemplos de **não-livres** (proprietários)
- **Google Chrome** (não é livre, apesar de baseado no Chromium que é).
- **Microsoft Teams**, **Skype**, **Spotify** (versões oficiais são proprietárias).
- **Drivers de hardware proprietários** (ex.: NVIDIA, em alguns casos).

### Resumindo
**Software livre no Linux** significa que você pode **usar, estudar, modificar e compartilhar** o programa.  
Isso dá **transparência, segurança e independência** do fabricante.

---

## O que é GNU?
- **GNU** significa **"GNU's Not Unix"**.
- É um **projeto iniciado em 1983** por **Richard Stallman** com o objetivo de criar um **sistema operacional totalmente livre** (respeitando as 4 liberdades do software).
- A ideia era ter um **Unix livre**, porque na época os sistemas eram todos proprietários.

O projeto desenvolveu várias partes essenciais de um sistema operacional:
- **Compilador GCC** (GNU Compiler Collection)
- **GNU Coreutils** (comandos básicos como `ls`, `cp`, `rm`, etc.)
- **Bash** (um dos shells mais usados no Linux)
- **Bibliotecas e ferramentas**

### Relação com o Linux
- O GNU criou praticamente todo o sistema operacional, mas **não tinha um [[kernel]]** estável.
- Em 1991, **Linus Torvalds** lançou o kernel **Linux**.
- A junção do **GNU + Linux** formou o que usamos hoje e que chamamos de **GNU/Linux**.

### Resumo:
O **[[GNU]]** é um projeto que criou ferramentas livres para formar um sistema operacional completo.  
Quando juntamos o **GNU** com o **Linux (kernel)**, temos o que chamamos de **GNU/Linux**, que é a base da maioria das distribuições (Ubuntu, Debian, Arch, Fedora etc.).

---

## O que é UNIX?
- **UNIX** é um **sistema operacional criado em 1969** nos laboratórios Bell Labs (AT&T) por **Ken Thompson, Dennis Ritchie e outros**.
- Foi projetado para ser **simples, portátil, multitarefa e multiusuário**.
- A filosofia UNIX é baseada em **fazer programas pequenos, que façam bem uma única tarefa, e combiná-los**.
- Ele inspirou ou deu origem a muitos sistemas que usamos até hoje.

### Características principais
- **Multitarefa**: executa vários processos ao mesmo tempo.
- **Multiusuário**: vários usuários podem usar o sistema simultaneamente.
- **Portabilidade**: escrito em **C** (criado por Dennis Ritchie), o que facilitou portar para outras máquinas.
- **Hierarquia de arquivos**: tudo é tratado como arquivo (inclusive dispositivos).

### Exemplos de sistemas baseados em UNIX
- **BSD** (FreeBSD, OpenBSD, NetBSD)
- **macOS** (baseado em Darwin, que vem do BSD)
- **Solaris** (da Sun Microsystems)
- **AIX** (IBM)
- **HP-UX** (HP)

### Relação com Linux
- O **Linux** não é UNIX, mas é um **"Unix-like"** → um sistema inspirado na filosofia e padrões do UNIX.
- Por isso, comandos no Linux são muito parecidos com os do UNIX original.

O nome **GNU** significa “GNU’s Not Unix” porque, apesar de ser compatível e parecido com o [[UNIX]], ele foi criado justamente para **não ser UNIX** (por ser livre). O Linux entra como o kernel que completa o sistema GNU.

---

## Comandos
### Informações do sistema

| Comando                   | Descrição                                     |
| ------------------------- | --------------------------------------------- |
| `uname -a`                | mostra a versão do kernel atual.              |
| `lsb_release -a`          | mostra a versão do Debian e codinome.         |
| `cat /etc/debian_version` | versão exata do Debian.                       |
| `hostnamectl`             | informações sobre hostname, SO e kernel.      |
| `uptime`                  | mostra há quanto tempo o sistema está ligado. |
| `free -h`                 | uso da memória RAM.                           |
| `df -h`                   | uso do disco (em GB/MB).                      |
| `du -sh *`                | tamanho das pastas do diretório atual.        |

### Pacotes e repositórios

| Comandos               | Descrição                                                          |
| ---------------------- | ------------------------------------------------------------------ |
| `apt update`           | atualiza lista de pacotes.                                         |
| `apt upgrade`          | atualiza pacotes.                                                  |
| `apt full-upgrade`     | atualiza pacotes e resolve dependências (pode instalar ou remover) |
| `apt install nome`     | instala pacote.                                                    |
| `apt remove nome`      | remove pacote (mantém configs).                                    |
| `apt purge nome`       | remove pacote e configs.                                           |
| `apt search nome`      | busca pacote.                                                      |
| `apt show nome`        | mostra detalhes do pacote.                                         |
| `dpkg -l \| grep nome` | verifica se pacote está instalado.                                 |
| `dpkg -i pacote.deb`   | instala `.deb` manualmente.                                        |
| `apt autoremove`       | remove pacotes não usados.                                         |

### Usuários e permissões

| Comandos       | Descrição                  |
| -------------- | -------------------------- |
| `whoami`       | mostra o usuário atual.    |
| `id`           | mostra UID, GID e grupos.  |
| `adduser nome` | cria usuário.              |
| `passwd nome`  | altera senha.              |
| `groups nome`  | mostra grupos do usuário.  |
| `su - nome`    | troca para outro usuário.  |
| `sudo comando` | executa comando como root. |

### Processos e serviços

| Comandos                         | Descrição                    |
| -------------------------------- | ---------------------------- |
| `ps aux \| grep nome`            | lista de processos.          |
| `top` ou `htop`                  | monitoramento em tempo real. |
| `kill -9 PID`                    | encerra processos pelo PID.  |
| `systemactl status nome.service` | status de um serviço.        |
| `systemctl enable nome.service`  | inicia serviço do boot.      |
| `system disable nome.service`    | desabilita no boot.          |
| `journalctl -xe`                 | logs do sistema.             |

### Redes

| Comandos                          | Descrição                  |
| --------------------------------- | -------------------------- |
| `ip a`                            | mostra interfaces e IPs.   |
| `ping -c 4 site.com`              | testa conexão.             |
| `ss -tulnp`                       | portas abertas e serviços. |
| `curl ifconfig.me`                | mostra IP público.         |
| `wget URL`                        | baixa arquivos.            |
| `scp arquivos user@host:/caminho` | copia arquivos via ssh.    |

### Arquivos e negação

| Comandos               | Descrição                             |
| ---------------------- | ------------------------------------- |
| `ls -lh`               | lista arquivos com tamanhos legíveis. |
| `find / -name nome`    | procura arquivos.                     |
| `grep "texto" arquivo` | busca dentro de arquivo.              |

### Segurança e root

| Comandos                   | Descrição             |
| -------------------------- | --------------------- |
| `sudo -i`                  | abre shell como root. |
| `chmod 755 arquivo`        | altera permissão.     |
| `chown user:grupo arquivo` | muda dono             |

---

# 🔹Aula 02
## Branches (ramificações do Debian)
O Debian mantém **três ramos principais** (branches) de desenvolvimento:
- **Stable**
	- Versão estável, foco em estabilidade e segurança.
	- Atualizações apenas de segurança e correções críticas.
	- Exemplo atual: **Debian 12 "Bookworm"**

- **Testing**
	- Onde o próximo "Stable" é preparado.
	- Recebe pacotes que já passaram pelo "Unstable" mas ainda estão em teste.
	- Boa opção para usuário que querem software mais novo, mas sem ser bleeding-edge.

- **Unstable (Sid)**
	- Sempre chamado de **Sid** (não tem codinome como os outros).
	- É o branch onde os pacotes entram primeiro, o mais "cortante".
	- Indicado para devs, entusiastas hardcore ou quem curte consertar o sistema.

>Extra: Existe ainda o **Experimental**, que não é exatamente um branch de uso normal, mas um repositório onde pacotes muito novos ou instáveis ficam antes de ir para o **Unstable**.

---

## DFSG (Debian Free Software Guidelines)
Esse é o **coração filosófico do Debian**.
São as **Diretrizes de Software Livre do Debian**, que definem o que é considerado "livre o suficiente" para entrar no **Debian Main** (o repositório principal).

Alguns pontos importantes:
- **Liberdade de redistribuir.**
- **Código-fonte deve estar disponível.**
- **Integridade do código-fonte** (patches podem ser aplicados, mas o original deve estar preservado).
- **Sem discriminação contra pessoas, grupos ou áreas de atuação.**

O DFSG serviu de inspiração para a **Open Source Definition** da OSI.  
Por causa dele, pacotes que não são totalmente livres vão para **Non-Free** ou **Contrib**.

---

## Seções do Debian (Main, Contrib e Non-Free)
Os pacotes do Debian são divididos em **seções**, dependendo da conformidade com o DFSG:

- **Main**
	- 100% livre segundo o DFSG.
	- Pacotes oficiais do Debian vêm daqui.

- **Contrib**
	- Pacotes livres, mas que **dependem de algo não-livre.**
	- Exemplo: programas livres que precisam de firmware proprietário para funcionar.

- **Non-Free**
	- Pacotes que **não atendem ao DFSG.**
	- Inclui drives proprietários, firmwares e softwares sem código aberto.
	- Desde o Debian 12, firmwares proprietários necessários para o boot já estão incluídos por padrão (antes eram opcionais).

----

# 🔹Aula 03
## Ciclo de lançamentos
O Debian não tem uma data fixa como Ubuntu ou Fedora. Normalmente, a cada **2 anos** sai uma versão estável.
Cada versão Stable recebe **5 anos de suporte oficial + 2 anos de LTS** por voluntários (algumas até 5 anos extras pelo **ELTS,** para servidores).

---

## Filosofia & Comunidade
O Debian é totalmente **comunitário** e não pertence a nenhuma empresa.
Governança feita por devs:
- **Debian Project Leader (DPL)** - eleito anualmente.
- **Debian Developers (DD)** - têm direito a voto e manutenção oficial de pacotes.
- **Debian Maintainers (DM)** - podem manter pacotes mas com limitações.

---

## Sessões e Conferências
- **DebConf** - conferência anual da comunidade Debian.
- **MiniDebConf** - eventos locais em países ou regiões.
- **BoFs (Birds of a Feather)** - sessões de discussão temáticas.

---

## Curiosidades
- **Codinomes:** cada versão estável recebe o nome de um personagem do filme *Toy Story.*
- **APT:** gerenciador de pacotes clássico, mas o Debian também mantém o `dpkg` como núcleo.
- **Política Debian (Debian Policy Manual):** define como os pacotes devem ser construídos e organizados.
- **Debian Social Contract:** documento fundamental que expressa os compromissos do projeto com o software livre e com seus usuários.


---

# 🔹Aula 04
## Sistema Operacional (SO) e Instalação Debian

### O que é um SO
- O **Sistema Operacional (SO)** é o software que gerencia o hardware e fornece uma interface para o usuário e aplicativos.  
- Exemplos: Linux (Debian, Ubuntu), Windows, macOS, Android.  
- É a camada que controla memória, processos, drivers, dispositivos de entrada/saída e redes.  

### Quando posso dizer que instalei o SO
- Quando o **kernel** e os **arquivos de sistema** estão corretamente gravados no disco.  
- O computador consegue **inicializar (boot)** no SO sem depender de outro sistema auxiliar.  
- O processo de instalação inclui:  
  - Copiar arquivos do SO para o disco.  
  - Configurar o gerenciador de boot (GRUB, systemd-boot, etc).  
  - Definir partições e sistema de arquivos.  

### Como acontece (cópia de arquivos do SO)
1. O instalador carrega em memória (via pendrive/DVD).  
2. O usuário define partições, sistemas de arquivos (ext4, swap, EFI).  
3. O instalador copia os arquivos do SO para a partição root (`/`).  
4. Configura o bootloader (ex.: GRUB) para que a máquina saiba iniciar o Debian.  
5. Instala pacotes básicos do sistema (kernel, shell, utilitários).  

---

### Passos para instalar o Debian

#### 1. Escolher a Imagem
- **Netinst**: imagem mínima (~300 MB), baixa pacotes pela internet durante a instalação.  
- **DVD / Live**: maior, já vem com mais pacotes incluídos.  
- **Arquitetura**:  
	  - `amd64` → PCs e notebooks modernos (64 bits, mesmo em Intel).  
	  - `i386` → PCs antigos de 32 bits (cada vez mais obsoletos).  
	  - `arm64` / `armhf` → dispositivos ARM (Raspberry Pi, etc).  

#### 2. Preparar Pendrive com `dd`
No Linux:  
```bash
# CUIDADO! Substitua /dev/sdX pelo seu pendrive (confira com lsblk)
sudo dd if=debian-12.6.0-amd64-netinst.iso of=/dev/sdX bs=4M status=progress oflag=sync
```
	- if= → input file (ISO do Debian).
	- of= → output file (dispositivo USB).
	- bs=4M → define tamanho de bloco para cópia mais rápida.
	- status=progress → mostra progresso.
	- oflag=sync → garante que os dados sejam gravados corretamente.

3. Boot pelo Pendrive
	- Acesse a BIOS/UEFI (DEL, F2, F12, etc).
	- Selecione o pendrive como primeiro dispositivo de boot.

4. Instalação
	- Selecionar idioma e teclado.
	- Configurar rede (caso use Netinst).
	- Definir partições (manuais ou automáticas).
	- Instalar sistema básico.
	- Escolher ambiente gráfico (XFCE, GNOME, KDE, etc).
	- Instalar GRUB no disco principal (ex.: /dev/sda).

3. Finalização
	- Reiniciar, remover o pendrive.
	- O Debian deve iniciar pelo GRUB.

Resumo:
- Um SO é o software que gerencia o computador.
- A instalação ocorre quando o kernel, sistema base e bootloader estão configurados no disco.
- Para instalar Debian: escolha a ISO correta (amd64 para PCs atuais), grave no pendrive com dd, faça boot, configure partições, instale pacotes e GRUB.