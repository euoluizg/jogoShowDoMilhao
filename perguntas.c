#include <string.h>
#include "perguntas.h"

void carregarPerguntas(int categoria, Pergunta perguntas[]) {
    if (categoria == 1) { 
        // Conhecimentos Gerais
        strcpy(perguntas[0].pergunta, "Qual é o maior oceano do planeta?");
        strcpy(perguntas[0].opcoes[0], "Atlântico");
        strcpy(perguntas[0].opcoes[1], "Índico");
        strcpy(perguntas[0].opcoes[2], "Ártico");
        strcpy(perguntas[0].opcoes[3], "Pacífico");
        perguntas[0].correta = 3;

        strcpy(perguntas[1].pergunta, "Qual é a capital da Austrália?");
        strcpy(perguntas[1].opcoes[0], "Sydney");
        strcpy(perguntas[1].opcoes[1], "Melbourne");
        strcpy(perguntas[1].opcoes[2], "Canberra");
        strcpy(perguntas[1].opcoes[3], "Brisbane");
        perguntas[1].correta = 2;

        strcpy(perguntas[2].pergunta, "Quem pintou a Mona Lisa?");
        strcpy(perguntas[2].opcoes[0], "Van Gogh");
        strcpy(perguntas[2].opcoes[1], "Leonardo da Vinci");
        strcpy(perguntas[2].opcoes[2], "Michelangelo");
        strcpy(perguntas[2].opcoes[3], "Rafael");
        perguntas[2].correta = 1;

        strcpy(perguntas[3].pergunta, "Qual é o elemento químico do ouro?");
        strcpy(perguntas[3].opcoes[0], "Go");
        strcpy(perguntas[3].opcoes[1], "Ag");
        strcpy(perguntas[3].opcoes[2], "Au");
        strcpy(perguntas[3].opcoes[3], "Pt");
        perguntas[3].correta = 2;

        strcpy(perguntas[4].pergunta, "Qual é o país mais populoso do mundo?");
        strcpy(perguntas[4].opcoes[0], "Índia");
        strcpy(perguntas[4].opcoes[1], "Estados Unidos");
        strcpy(perguntas[4].opcoes[2], "Indonésia");
        strcpy(perguntas[4].opcoes[3], "China");
        perguntas[4].correta = 0;

        strcpy(perguntas[5].pergunta, "Quantos continentes existem?");
        strcpy(perguntas[5].opcoes[0], "5");
        strcpy(perguntas[5].opcoes[1], "6");
        strcpy(perguntas[5].opcoes[2], "7");
        strcpy(perguntas[5].opcoes[3], "8");
        perguntas[5].correta = 2;

        strcpy(perguntas[6].pergunta, "Qual é o idioma mais falado no mundo?");
        strcpy(perguntas[6].opcoes[0], "Inglês");
        strcpy(perguntas[6].opcoes[1], "Chinês mandarim");
        strcpy(perguntas[6].opcoes[2], "Espanhol");
        strcpy(perguntas[6].opcoes[3], "Hindi");
        perguntas[6].correta = 1;

        strcpy(perguntas[7].pergunta, "Quem escreveu 'Dom Quixote'?");
        strcpy(perguntas[7].opcoes[0], "Machado de Assis");
        strcpy(perguntas[7].opcoes[1], "José Saramago");
        strcpy(perguntas[7].opcoes[2], "Miguel de Cervantes");
        strcpy(perguntas[7].opcoes[3], "Gabriel García Márquez");
        perguntas[7].correta = 2;

        strcpy(perguntas[8].pergunta, "Qual é o maior país em extensão territorial?");
        strcpy(perguntas[8].opcoes[0], "Canadá");
        strcpy(perguntas[8].opcoes[1], "China");
        strcpy(perguntas[8].opcoes[2], "Estados Unidos");
        strcpy(perguntas[8].opcoes[3], "Rússia");
        perguntas[8].correta = 3;

        strcpy(perguntas[9].pergunta, "Que país é conhecido como o berço da democracia?");
        strcpy(perguntas[9].opcoes[0], "Itália");
        strcpy(perguntas[9].opcoes[1], "Egito");
        strcpy(perguntas[9].opcoes[2], "Grécia");
        strcpy(perguntas[9].opcoes[3], "França");
        perguntas[9].correta = 2;

        strcpy(perguntas[10].pergunta, "Em que continente está o Egito?");
        strcpy(perguntas[10].opcoes[0], "Ásia");
        strcpy(perguntas[10].opcoes[1], "África");
        strcpy(perguntas[10].opcoes[2], "Europa");
        strcpy(perguntas[10].opcoes[3], "América");
        perguntas[10].correta = 1;

        strcpy(perguntas[11].pergunta, "Quem foi o primeiro homem a pisar na Lua?");
        strcpy(perguntas[11].opcoes[0], "Buzz Aldrin");
        strcpy(perguntas[11].opcoes[1], "Neil Armstrong");
        strcpy(perguntas[11].opcoes[2], "Yuri Gagarin");
        strcpy(perguntas[11].opcoes[3], "Alan Shepard");
        perguntas[11].correta = 1;

        strcpy(perguntas[12].pergunta, "Qual o maior animal terrestre?");
        strcpy(perguntas[12].opcoes[0], "Elefante-africano");
        strcpy(perguntas[12].opcoes[1], "Hipopótamo");
        strcpy(perguntas[12].opcoes[2], "Girafa");
        strcpy(perguntas[12].opcoes[3], "Urso-pardo");
        perguntas[12].correta = 0;

        strcpy(perguntas[13].pergunta, "Qual é a fórmula da água?");
        strcpy(perguntas[13].opcoes[0], "H2");
        strcpy(perguntas[13].opcoes[1], "O2");
        strcpy(perguntas[13].opcoes[2], "CO2");
        strcpy(perguntas[13].opcoes[3], "H2O");
        perguntas[13].correta = 3;

        strcpy(perguntas[14].pergunta, "Em que país se localiza a Torre Eiffel?");
        strcpy(perguntas[14].opcoes[0], "Itália");
        strcpy(perguntas[14].opcoes[1], "Inglaterra");
        strcpy(perguntas[14].opcoes[2], "França");
        strcpy(perguntas[14].opcoes[3], "Alemanha");
        perguntas[14].correta = 2;

        strcpy(perguntas[15].pergunta, "Quantos segundos tem uma hora?");
        strcpy(perguntas[15].opcoes[0], "360");
        strcpy(perguntas[15].opcoes[1], "3600");
        strcpy(perguntas[15].opcoes[2], "6000");
        strcpy(perguntas[15].opcoes[3], "60");
        perguntas[15].correta = 1;

        strcpy(perguntas[16].pergunta, "Qual o nome do rio mais extenso do mundo?");
        strcpy(perguntas[16].opcoes[0], "Amazonas");
        strcpy(perguntas[16].opcoes[1], "Nilo");
        strcpy(perguntas[16].opcoes[2], "Yangtzé");
        strcpy(perguntas[16].opcoes[3], "Mississipi");
        perguntas[16].correta = 0;

        strcpy(perguntas[17].pergunta, "Qual é o maior planeta do sistema solar?");
        strcpy(perguntas[17].opcoes[0], "Terra");
        strcpy(perguntas[17].opcoes[1], "Júpiter");
        strcpy(perguntas[17].opcoes[2], "Saturno");
        strcpy(perguntas[17].opcoes[3], "Netuno");
        perguntas[17].correta = 1;

        strcpy(perguntas[18].pergunta, "Em que continente está o Brasil?");
        strcpy(perguntas[18].opcoes[0], "África");
        strcpy(perguntas[18].opcoes[1], "América do Norte");
        strcpy(perguntas[18].opcoes[2], "América do Sul");
        strcpy(perguntas[18].opcoes[3], "Europa");
        perguntas[18].correta = 2;

        strcpy(perguntas[19].pergunta, "Qual animal é símbolo da paz?");
        strcpy(perguntas[19].opcoes[0], "Cavalo");
        strcpy(perguntas[19].opcoes[1], "Pomba");
        strcpy(perguntas[19].opcoes[2], "Leão");
        strcpy(perguntas[19].opcoes[3], "Águia");
        perguntas[19].correta = 1;
    } else if (categoria == 2) { 
        // Ciências
        strcpy(perguntas[0].pergunta, "Qual é o planeta mais próximo do Sol?");
        strcpy(perguntas[0].opcoes[0], "Mercúrio");
        strcpy(perguntas[0].opcoes[1], "Vênus");
        strcpy(perguntas[0].opcoes[2], "Terra");
        strcpy(perguntas[0].opcoes[3], "Marte");
        perguntas[0].correta = 0;

        strcpy(perguntas[1].pergunta, "O que é H2SO4?");
        strcpy(perguntas[1].opcoes[0], "Ácido clorídrico");
        strcpy(perguntas[1].opcoes[1], "Ácido sulfúrico");
        strcpy(perguntas[1].opcoes[2], "Ácido nítrico");
        strcpy(perguntas[1].opcoes[3], "Ácido acético");
        perguntas[1].correta = 1;

        strcpy(perguntas[2].pergunta, "Qual órgão humano é responsável pela filtração do sangue?");
        strcpy(perguntas[2].opcoes[0], "Fígado");
        strcpy(perguntas[2].opcoes[1], "Pulmão");
        strcpy(perguntas[2].opcoes[2], "Rim");
        strcpy(perguntas[2].opcoes[3], "Estômago");
        perguntas[2].correta = 2;

        strcpy(perguntas[3].pergunta, "Qual é o gás mais abundante na atmosfera da Terra?");
        strcpy(perguntas[3].opcoes[0], "Oxigênio");
        strcpy(perguntas[3].opcoes[1], "Nitrogênio");
        strcpy(perguntas[3].opcoes[2], "Gás Carbônico");
        strcpy(perguntas[3].opcoes[3], "Hidrogênio");
        perguntas[3].correta = 1;

        strcpy(perguntas[4].pergunta, "Qual desses é um mamífero?");
        strcpy(perguntas[4].opcoes[0], "Tubarão");
        strcpy(perguntas[4].opcoes[1], "Polvo");
        strcpy(perguntas[4].opcoes[2], "Golfinho");
        strcpy(perguntas[4].opcoes[3], "Pinguim");
        perguntas[4].correta = 2;

        strcpy(perguntas[5].pergunta, "Qual é a unidade de medida da força?");
        strcpy(perguntas[5].opcoes[0], "Joule");
        strcpy(perguntas[5].opcoes[1], "Watt");
        strcpy(perguntas[5].opcoes[2], "Newton");
        strcpy(perguntas[5].opcoes[3], "Ampère");
        perguntas[5].correta = 2;

        strcpy(perguntas[6].pergunta, "Qual é o símbolo químico do sódio?");
        strcpy(perguntas[6].opcoes[0], "Na");
        strcpy(perguntas[6].opcoes[1], "So");
        strcpy(perguntas[6].opcoes[2], "Sd");
        strcpy(perguntas[6].opcoes[3], "Sn");
        perguntas[6].correta = 0;

        strcpy(perguntas[7].pergunta, "Quem propôs a teoria da relatividade?");
        strcpy(perguntas[7].opcoes[0], "Isaac Newton");
        strcpy(perguntas[7].opcoes[1], "Galileu Galilei");
        strcpy(perguntas[7].opcoes[2], "Albert Einstein");
        strcpy(perguntas[7].opcoes[3], "Stephen Hawking");
        perguntas[7].correta = 2;

        strcpy(perguntas[8].pergunta, "Qual planeta tem os anéis mais visíveis?");
        strcpy(perguntas[8].opcoes[0], "Netuno");
        strcpy(perguntas[8].opcoes[1], "Urano");
        strcpy(perguntas[8].opcoes[2], "Júpiter");
        strcpy(perguntas[8].opcoes[3], "Saturno");
        perguntas[8].correta = 3;

        strcpy(perguntas[9].pergunta, "Qual é a função dos glóbulos vermelhos?");
        strcpy(perguntas[9].opcoes[0], "Combater infecções");
        strcpy(perguntas[9].opcoes[1], "Transportar oxigênio");
        strcpy(perguntas[9].opcoes[2], "Coagular o sangue");
        strcpy(perguntas[9].opcoes[3], "Produzir hormônios");
        perguntas[9].correta = 1;

        strcpy(perguntas[10].pergunta, "O que é DNA?");
        strcpy(perguntas[10].opcoes[0], "Hormônio");
        strcpy(perguntas[10].opcoes[1], "Proteína");
        strcpy(perguntas[10].opcoes[2], "Ácido nucleico");
        strcpy(perguntas[10].opcoes[3], "Enzima");
        perguntas[10].correta = 2;

        strcpy(perguntas[11].pergunta, "Qual desses animais é um réptil?");
        strcpy(perguntas[11].opcoes[0], "Sapo");
        strcpy(perguntas[11].opcoes[1], "Jacaré");
        strcpy(perguntas[11].opcoes[2], "Golfinho");
        strcpy(perguntas[11].opcoes[3], "Andorinha");
        perguntas[11].correta = 1;

        strcpy(perguntas[12].pergunta, "Quantos cromossomos tem um ser humano?");
        strcpy(perguntas[12].opcoes[0], "44");
        strcpy(perguntas[12].opcoes[1], "46");
        strcpy(perguntas[12].opcoes[2], "48");
        strcpy(perguntas[12].opcoes[3], "50");
        perguntas[12].correta = 1;

        strcpy(perguntas[13].pergunta, "Qual é o nome do estado da matéria entre sólido e gasoso?");
        strcpy(perguntas[13].opcoes[0], "Plasma");
        strcpy(perguntas[13].opcoes[1], "Líquido");
        strcpy(perguntas[13].opcoes[2], "Vapor");
        strcpy(perguntas[13].opcoes[3], "Condensado");
        perguntas[13].correta = 1;

        strcpy(perguntas[14].pergunta, "A fotossíntese ocorre em qual organela?");
        strcpy(perguntas[14].opcoes[0], "Mitocôndria");
        strcpy(perguntas[14].opcoes[1], "Núcleo");
        strcpy(perguntas[14].opcoes[2], "Cloroplasto");
        strcpy(perguntas[14].opcoes[3], "Lisossomo");
        perguntas[14].correta = 2;

        strcpy(perguntas[15].pergunta, "Qual é a velocidade da luz no vácuo?");
        strcpy(perguntas[15].opcoes[0], "150.000 km/s");
        strcpy(perguntas[15].opcoes[1], "200.000 km/s");
        strcpy(perguntas[15].opcoes[2], "300.000 km/s");
        strcpy(perguntas[15].opcoes[3], "500.000 km/s");
        perguntas[15].correta = 2;

        strcpy(perguntas[16].pergunta, "Qual é o principal gás causador do efeito estufa?");
        strcpy(perguntas[16].opcoes[0], "O2");
        strcpy(perguntas[16].opcoes[1], "H2");
        strcpy(perguntas[16].opcoes[2], "CO2");
        strcpy(perguntas[16].opcoes[3], "N2");
        perguntas[16].correta = 2;

        strcpy(perguntas[17].pergunta, "Qual desses não é um estado físico da matéria?");
        strcpy(perguntas[17].opcoes[0], "Sólido");
        strcpy(perguntas[17].opcoes[1], "Líquido");
        strcpy(perguntas[17].opcoes[2], "Gás");
        strcpy(perguntas[17].opcoes[3], "Ácido");
        perguntas[17].correta = 3;

        strcpy(perguntas[18].pergunta, "Qual é o menor osso do corpo humano?");
        strcpy(perguntas[18].opcoes[0], "Fêmur");
        strcpy(perguntas[18].opcoes[1], "Estribo");
        strcpy(perguntas[18].opcoes[2], "Tíbia");
        strcpy(perguntas[18].opcoes[3], "Ulna");
        perguntas[18].correta = 1;

        strcpy(perguntas[19].pergunta, "Qual planeta é conhecido como planeta vermelho?");
        strcpy(perguntas[19].opcoes[0], "Marte");
        strcpy(perguntas[19].opcoes[1], "Vênus");
        strcpy(perguntas[19].opcoes[2], "Júpiter");
        strcpy(perguntas[19].opcoes[3], "Terra");
        perguntas[19].correta = 0;
    } else if (categoria == 3) { 
        // História
        strcpy(perguntas[0].pergunta, "Em que ano ocorreu a Proclamação da República no Brasil?");
        strcpy(perguntas[0].opcoes[0], "1888");
        strcpy(perguntas[0].opcoes[1], "1889");
        strcpy(perguntas[0].opcoes[2], "1890");
        strcpy(perguntas[0].opcoes[3], "1822");
        perguntas[0].correta = 1;

        strcpy(perguntas[1].pergunta, "Quem foi o líder da Alemanha nazista durante a Segunda Guerra Mundial?");
        strcpy(perguntas[1].opcoes[0], "Joseph Stalin");
        strcpy(perguntas[1].opcoes[1], "Benito Mussolini");
        strcpy(perguntas[1].opcoes[2], "Adolf Hitler");
        strcpy(perguntas[1].opcoes[3], "Winston Churchill");
        perguntas[1].correta = 2;

        strcpy(perguntas[2].pergunta, "Qual civilização construiu as pirâmides de Gizé?");
        strcpy(perguntas[2].opcoes[0], "Astecas");
        strcpy(perguntas[2].opcoes[1], "Maias");
        strcpy(perguntas[2].opcoes[2], "Egípcios");
        strcpy(perguntas[2].opcoes[3], "Incas");
        perguntas[2].correta = 2;

        strcpy(perguntas[3].pergunta, "Em que ano o Brasil foi 'descoberto' pelos portugueses?");
        strcpy(perguntas[3].opcoes[0], "1500");
        strcpy(perguntas[3].opcoes[1], "1492");
        strcpy(perguntas[3].opcoes[2], "1521");
        strcpy(perguntas[3].opcoes[3], "1530");
        perguntas[3].correta = 0;

        strcpy(perguntas[4].pergunta, "Quem foi Tiradentes?");
        strcpy(perguntas[4].opcoes[0], "Imperador do Brasil");
        strcpy(perguntas[4].opcoes[1], "Líder da Inconfidência Mineira");
        strcpy(perguntas[4].opcoes[2], "Bandeirante");
        strcpy(perguntas[4].opcoes[3], "Rei de Portugal");
        perguntas[4].correta = 1;

        strcpy(perguntas[5].pergunta, "O que marcou o fim da Idade Média?");
        strcpy(perguntas[5].opcoes[0], "Descobrimento da América");
        strcpy(perguntas[5].opcoes[1], "Revolução Francesa");
        strcpy(perguntas[5].opcoes[2], "Queda de Constantinopla");
        strcpy(perguntas[5].opcoes[3], "Peste Negra");
        perguntas[5].correta = 2;

        strcpy(perguntas[6].pergunta, "Quem foi o primeiro presidente do Brasil?");
        strcpy(perguntas[6].opcoes[0], "Marechal Deodoro da Fonseca");
        strcpy(perguntas[6].opcoes[1], "Getúlio Vargas");
        strcpy(perguntas[6].opcoes[2], "Dom Pedro II");
        strcpy(perguntas[6].opcoes[3], "Campos Sales");
        perguntas[6].correta = 0;

        strcpy(perguntas[7].pergunta, "Quem comandou a Revolução Russa de 1917?");
        strcpy(perguntas[7].opcoes[0], "Lenin");
        strcpy(perguntas[7].opcoes[1], "Stalin");
        strcpy(perguntas[7].opcoes[2], "Trotsky");
        strcpy(perguntas[7].opcoes[3], "Gorbachev");
        perguntas[7].correta = 0;

        strcpy(perguntas[8].pergunta, "Em que país nasceu Napoleão Bonaparte?");
        strcpy(perguntas[8].opcoes[0], "França");
        strcpy(perguntas[8].opcoes[1], "Itália");
        strcpy(perguntas[8].opcoes[2], "Alemanha");
        strcpy(perguntas[8].opcoes[3], "Áustria");
        perguntas[8].correta = 0;

        strcpy(perguntas[9].pergunta, "O que foi o Muro de Berlim?");
        strcpy(perguntas[9].opcoes[0], "Uma muralha chinesa na Alemanha");
        strcpy(perguntas[9].opcoes[1], "Divisão entre EUA e URSS");
        strcpy(perguntas[9].opcoes[2], "Barreira entre Alemanha Oriental e Ocidental");
        strcpy(perguntas[9].opcoes[3], "Fortificação medieval");
        perguntas[9].correta = 2;

        strcpy(perguntas[10].pergunta, "Qual era o nome do navio que trouxe D. João VI ao Brasil?");
        strcpy(perguntas[10].opcoes[0], "Caravela Real");
        strcpy(perguntas[10].opcoes[1], "Nau Príncipe Real");
        strcpy(perguntas[10].opcoes[2], "Navio Almirante");
        strcpy(perguntas[10].opcoes[3], "Santa Maria");
        perguntas[10].correta = 1;

        strcpy(perguntas[11].pergunta, "Qual império foi governado por César?");
        strcpy(perguntas[11].opcoes[0], "Império Grego");
        strcpy(perguntas[11].opcoes[1], "Império Romano");
        strcpy(perguntas[11].opcoes[2], "Império Egípcio");
        strcpy(perguntas[11].opcoes[3], "Império Persa");
        perguntas[11].correta = 1;

        strcpy(perguntas[12].pergunta, "Em que ano terminou a Segunda Guerra Mundial?");
        strcpy(perguntas[12].opcoes[0], "1944");
        strcpy(perguntas[12].opcoes[1], "1945");
        strcpy(perguntas[12].opcoes[2], "1946");
        strcpy(perguntas[12].opcoes[3], "1950");
        perguntas[12].correta = 1;

        strcpy(perguntas[13].pergunta, "Qual era a capital do Império Bizantino?");
        strcpy(perguntas[13].opcoes[0], "Roma");
        strcpy(perguntas[13].opcoes[1], "Atenas");
        strcpy(perguntas[13].opcoes[2], "Constantinopla");
        strcpy(perguntas[13].opcoes[3], "Istambul");
        perguntas[13].correta = 2;

        strcpy(perguntas[14].pergunta, "Quem assinou a Lei Áurea?");
        strcpy(perguntas[14].opcoes[0], "Dom Pedro I");
        strcpy(perguntas[14].opcoes[1], "Princesa Isabel");
        strcpy(perguntas[14].opcoes[2], "Marechal Deodoro");
        strcpy(perguntas[14].opcoes[3], "Getúlio Vargas");
        perguntas[14].correta = 1;

        strcpy(perguntas[15].pergunta, "Qual país foi o principal inimigo da Inglaterra na Primeira Guerra?");
        strcpy(perguntas[15].opcoes[0], "França");
        strcpy(perguntas[15].opcoes[1], "Alemanha");
        strcpy(perguntas[15].opcoes[2], "Itália");
        strcpy(perguntas[15].opcoes[3], "Rússia");
        perguntas[15].correta = 1;

        strcpy(perguntas[16].pergunta, "Qual era o nome da política de colonização portuguesa no Brasil?");
        strcpy(perguntas[16].opcoes[0], "Feudos");
        strcpy(perguntas[16].opcoes[1], "Capitanias Hereditárias");
        strcpy(perguntas[16].opcoes[2], "Sesmarias");
        strcpy(perguntas[16].opcoes[3], "Colônias Livres");
        perguntas[16].correta = 1;

        strcpy(perguntas[17].pergunta, "O que foi a Revolução Industrial?");
        strcpy(perguntas[17].opcoes[0], "Movimento político");
        strcpy(perguntas[17].opcoes[1], "Transição para produção mecanizada");
        strcpy(perguntas[17].opcoes[2], "Revolta de trabalhadores");
        strcpy(perguntas[17].opcoes[3], "Processo de independência dos EUA");
        perguntas[17].correta = 1;

        strcpy(perguntas[18].pergunta, "Onde ocorreu a Revolução Francesa?");
        strcpy(perguntas[18].opcoes[0], "Alemanha");
        strcpy(perguntas[18].opcoes[1], "Itália");
        strcpy(perguntas[18].opcoes[2], "França");
        strcpy(perguntas[18].opcoes[3], "Rússia");
        perguntas[18].correta = 2;

        strcpy(perguntas[19].pergunta, "Quem descobriu o caminho marítimo para as Índias?");
        strcpy(perguntas[19].opcoes[0], "Cristóvão Colombo");
        strcpy(perguntas[19].opcoes[1], "Pedro Álvares Cabral");
        strcpy(perguntas[19].opcoes[2], "Fernão de Magalhães");
        strcpy(perguntas[19].opcoes[3], "Vasco da Gama");
        perguntas[19].correta = 3;
    } else if (categoria == 4) { 
        // Geografia
        strcpy(perguntas[0].pergunta, "Qual é o maior país do mundo em extensão territorial?");
        strcpy(perguntas[0].opcoes[0], "China");
        strcpy(perguntas[0].opcoes[1], "Estados Unidos");
        strcpy(perguntas[0].opcoes[2], "Rússia");
        strcpy(perguntas[0].opcoes[3], "Canadá");
        perguntas[0].correta = 2;

        strcpy(perguntas[1].pergunta, "Qual é o rio mais extenso do mundo?");
        strcpy(perguntas[1].opcoes[0], "Rio Nilo");
        strcpy(perguntas[1].opcoes[1], "Rio Amazonas");
        strcpy(perguntas[1].opcoes[2], "Rio Mississipi");
        strcpy(perguntas[1].opcoes[3], "Rio Yangtzé");
        perguntas[1].correta = 1;

        strcpy(perguntas[2].pergunta, "Qual é o maior deserto do mundo?");
        strcpy(perguntas[2].opcoes[0], "Deserto do Saara");
        strcpy(perguntas[2].opcoes[1], "Deserto de Gobi");
        strcpy(perguntas[2].opcoes[2], "Deserto da Antártida");
        strcpy(perguntas[2].opcoes[3], "Deserto do Atacama");
        perguntas[2].correta = 2;

        strcpy(perguntas[3].pergunta, "Qual é o país com a maior população do mundo?");
        strcpy(perguntas[3].opcoes[0], "Índia");
        strcpy(perguntas[3].opcoes[1], "Estados Unidos");
        strcpy(perguntas[3].opcoes[2], "China");
        strcpy(perguntas[3].opcoes[3], "Indonésia");
        perguntas[3].correta = 0;

        strcpy(perguntas[4].pergunta, "Qual é o oceano que banha a costa leste do Brasil?");
        strcpy(perguntas[4].opcoes[0], "Oceano Pacífico");
        strcpy(perguntas[4].opcoes[1], "Oceano Índico");
        strcpy(perguntas[4].opcoes[2], "Oceano Glacial Antártico");
        strcpy(perguntas[4].opcoes[3], "Oceano Atlântico");
        perguntas[4].correta = 3;

        strcpy(perguntas[5].pergunta, "Qual é a capital do Canadá?");
        strcpy(perguntas[5].opcoes[0], "Toronto");
        strcpy(perguntas[5].opcoes[1], "Vancouver");
        strcpy(perguntas[5].opcoes[2], "Montreal");
        strcpy(perguntas[5].opcoes[3], "Ottawa");
        perguntas[5].correta = 3;

        strcpy(perguntas[6].pergunta, "Qual é a montanha mais alta do mundo?");
        strcpy(perguntas[6].opcoes[0], "Monte Fuji");
        strcpy(perguntas[6].opcoes[1], "Monte Everest");
        strcpy(perguntas[6].opcoes[2], "Monte Kilimanjaro");
        strcpy(perguntas[6].opcoes[3], "Monte Aconcágua");
        perguntas[6].correta = 1;

        strcpy(perguntas[7].pergunta, "Qual é o bioma predominante na região Norte do Brasil?");
        strcpy(perguntas[7].opcoes[0], "Cerrado");
        strcpy(perguntas[7].opcoes[1], "Mata Atlântica");
        strcpy(perguntas[7].opcoes[2], "Caatinga");
        strcpy(perguntas[7].opcoes[3], "Floresta Amazônica");
        perguntas[7].correta = 3;

        strcpy(perguntas[8].pergunta, "Qual continente é banhado pelo Oceano Glacial Ártico?");
        strcpy(perguntas[8].opcoes[0], "Ásia");
        strcpy(perguntas[8].opcoes[1], "Europa");
        strcpy(perguntas[8].opcoes[2], "América do Norte");
        strcpy(perguntas[8].opcoes[3], "Todos os anteriores");
        perguntas[8].correta = 3;

        strcpy(perguntas[9].pergunta, "O Monte Everest está localizado em qual cordilheira?");
        strcpy(perguntas[9].opcoes[0], "Andes");
        strcpy(perguntas[9].opcoes[1], "Rocosas");
        strcpy(perguntas[9].opcoes[2], "Himalaia");
        strcpy(perguntas[9].opcoes[3], "Alpes");
        perguntas[9].correta = 2;

        strcpy(perguntas[10].pergunta, "Qual destes países não é cortado pela linha do Equador?");
        strcpy(perguntas[10].opcoes[0], "Brasil");
        strcpy(perguntas[10].opcoes[1], "Indonésia");
        strcpy(perguntas[10].opcoes[2], "Equador");
        strcpy(perguntas[10].opcoes[3], "Argentina");
        perguntas[10].correta = 3;

        strcpy(perguntas[11].pergunta, "Qual é a capital da Austrália?");
        strcpy(perguntas[11].opcoes[0], "Sydney");
        strcpy(perguntas[11].opcoes[1], "Melbourne");
        strcpy(perguntas[11].opcoes[2], "Canberra");
        strcpy(perguntas[11].opcoes[3], "Perth");
        perguntas[11].correta = 2;

        strcpy(perguntas[12].pergunta, "Qual é o menor país do mundo em território?");
        strcpy(perguntas[12].opcoes[0], "Mônaco");
        strcpy(perguntas[12].opcoes[1], "Malta");
        strcpy(perguntas[12].opcoes[2], "Vaticano");
        strcpy(perguntas[12].opcoes[3], "San Marino");
        perguntas[12].correta = 2;

        strcpy(perguntas[13].pergunta, "Em qual continente fica o deserto do Saara?");
        strcpy(perguntas[13].opcoes[0], "Ásia");
        strcpy(perguntas[13].opcoes[1], "América");
        strcpy(perguntas[13].opcoes[2], "África");
        strcpy(perguntas[13].opcoes[3], "Oceania");
        perguntas[13].correta = 2;

        strcpy(perguntas[14].pergunta, "Qual é a capital da África do Sul?");
        strcpy(perguntas[14].opcoes[0], "Cidade do Cabo");
        strcpy(perguntas[14].opcoes[1], "Pretória");
        strcpy(perguntas[14].opcoes[2], "Joanesburgo");
        strcpy(perguntas[14].opcoes[3], "Durban");
        perguntas[14].correta = 1;

        strcpy(perguntas[15].pergunta, "Quais são os continentes totalmente no Hemisfério Sul?");
        strcpy(perguntas[15].opcoes[0], "Antártica e Austrália");
        strcpy(perguntas[15].opcoes[1], "África e América do Sul");
        strcpy(perguntas[15].opcoes[2], "Ásia e Oceania");
        strcpy(perguntas[15].opcoes[3], "Europa e África");
        perguntas[15].correta = 0;

        strcpy(perguntas[16].pergunta, "Qual é a capital do Japão?");
        strcpy(perguntas[16].opcoes[0], "Kyoto");
        strcpy(perguntas[16].opcoes[1], "Osaka");
        strcpy(perguntas[16].opcoes[2], "Tóquio");
        strcpy(perguntas[16].opcoes[3], "Hiroshima");
        perguntas[16].correta = 2;

        strcpy(perguntas[17].pergunta, "Qual oceano fica entre a África e a Austrália?");
        strcpy(perguntas[17].opcoes[0], "Atlântico");
        strcpy(perguntas[17].opcoes[1], "Pacífico");
        strcpy(perguntas[17].opcoes[2], "Índico");
        strcpy(perguntas[17].opcoes[3], "Ártico");
        perguntas[17].correta = 2;

        strcpy(perguntas[18].pergunta, "Qual estado brasileiro tem o maior número de municípios?");
        strcpy(perguntas[18].opcoes[0], "São Paulo");
        strcpy(perguntas[18].opcoes[1], "Minas Gerais");
        strcpy(perguntas[18].opcoes[2], "Bahia");
        strcpy(perguntas[18].opcoes[3], "Rio Grande do Sul");
        perguntas[18].correta = 1;

        strcpy(perguntas[19].pergunta, "Quantos estados tem o Brasil?");
        strcpy(perguntas[19].opcoes[0], "24");
        strcpy(perguntas[19].opcoes[1], "25");
        strcpy(perguntas[19].opcoes[2], "26");
        strcpy(perguntas[19].opcoes[3], "27");
        perguntas[19].correta = 2;
    } else if (categoria == 5) { 
        // Tecnologia
        strcpy(perguntas[0].pergunta, "Qual foi o primeiro computador pessoal a ser lançado?");
        strcpy(perguntas[0].opcoes[0], "Apple I");
        strcpy(perguntas[0].opcoes[1], "Commodore 64");
        strcpy(perguntas[0].opcoes[2], "IBM PC");
        strcpy(perguntas[0].opcoes[3], "Altair 8800");
        perguntas[0].correta = 0;

        strcpy(perguntas[1].pergunta, "Qual é a linguagem de programação mais usada no desenvolvimento de aplicativos para iOS?");
        strcpy(perguntas[1].opcoes[0], "Swift");
        strcpy(perguntas[1].opcoes[1], "Java");
        strcpy(perguntas[1].opcoes[2], "C++");
        strcpy(perguntas[1].opcoes[3], "Python");
        perguntas[1].correta = 0;

        strcpy(perguntas[2].pergunta, "Quem é considerado o pai da computação?");
        strcpy(perguntas[2].opcoes[0], "Alan Turing");
        strcpy(perguntas[2].opcoes[1], "Charles Babbage");
        strcpy(perguntas[2].opcoes[2], "Bill Gates");
        strcpy(perguntas[2].opcoes[3], "Steve Jobs");
        perguntas[2].correta = 1;

        strcpy(perguntas[3].pergunta, "O que é o HTML?");
        strcpy(perguntas[3].opcoes[0], "Uma linguagem de programação");
        strcpy(perguntas[3].opcoes[1], "Uma linguagem de marcação");
        strcpy(perguntas[3].opcoes[2], "Um sistema operacional");
        strcpy(perguntas[3].opcoes[3], "Um banco de dados");
        perguntas[3].correta = 1;

        strcpy(perguntas[4].pergunta, "Qual dessas empresas é responsável pelo sistema operacional Android?");
        strcpy(perguntas[4].opcoes[0], "Microsoft");
        strcpy(perguntas[4].opcoes[1], "Google");
        strcpy(perguntas[4].opcoes[2], "Apple");
        strcpy(perguntas[4].opcoes[3], "IBM");
        perguntas[4].correta = 1;

        strcpy(perguntas[5].pergunta, "Qual é o maior site de vídeos do mundo?");
        strcpy(perguntas[5].opcoes[0], "Vimeo");
        strcpy(perguntas[5].opcoes[1], "YouTube");
        strcpy(perguntas[5].opcoes[2], "Dailymotion");
        strcpy(perguntas[5].opcoes[3], "Twitch");
        perguntas[5].correta = 1;

        strcpy(perguntas[6].pergunta, "Qual empresa desenvolveu o processador Intel Pentium?");
        strcpy(perguntas[6].opcoes[0], "AMD");
        strcpy(perguntas[6].opcoes[1], "Intel");
        strcpy(perguntas[6].opcoes[2], "NVIDIA");
        strcpy(perguntas[6].opcoes[3], "Qualcomm");
        perguntas[6].correta = 1;

        strcpy(perguntas[7].pergunta, "Em que ano foi lançado o primeiro iPhone?");
        strcpy(perguntas[7].opcoes[0], "2005");
        strcpy(perguntas[7].opcoes[1], "2007");
        strcpy(perguntas[7].opcoes[2], "2008");
        strcpy(perguntas[7].opcoes[3], "2010");
        perguntas[7].correta = 1;

        strcpy(perguntas[8].pergunta, "O que significa a sigla 'CPU' em um computador?");
        strcpy(perguntas[8].opcoes[0], "Central Programming Unit");
        strcpy(perguntas[8].opcoes[1], "Central Processing Unit");
        strcpy(perguntas[8].opcoes[2], "Central Power Unit");
        strcpy(perguntas[8].opcoes[3], "Computer Processing Unit");
        perguntas[8].correta = 1;

        strcpy(perguntas[9].pergunta, "Qual é o sistema operacional mais utilizado no mundo?");
        strcpy(perguntas[9].opcoes[0], "Linux");
        strcpy(perguntas[9].opcoes[1], "Windows");
        strcpy(perguntas[9].opcoes[2], "MacOS");
        strcpy(perguntas[9].opcoes[3], "Android");
        perguntas[9].correta = 1;

        strcpy(perguntas[10].pergunta, "Qual é o principal protocolo utilizado para a comunicação entre dispositivos na internet?");
        strcpy(perguntas[10].opcoes[0], "HTTP");
        strcpy(perguntas[10].opcoes[1], "FTP");
        strcpy(perguntas[10].opcoes[2], "IP");
        strcpy(perguntas[10].opcoes[3], "TCP/IP");
        perguntas[10].correta = 3;

        strcpy(perguntas[11].pergunta, "O que é o JavaScript?");
        strcpy(perguntas[11].opcoes[0], "Uma linguagem de banco de dados");
        strcpy(perguntas[11].opcoes[1], "Uma linguagem de programação");
        strcpy(perguntas[11].opcoes[2], "Uma ferramenta de edição de vídeo");
        strcpy(perguntas[11].opcoes[3], "Uma plataforma de desenvolvimento de jogos");
        perguntas[11].correta = 1;

        strcpy(perguntas[12].pergunta, "Qual dessas redes sociais foi fundada por Mark Zuckerberg?");
        strcpy(perguntas[12].opcoes[0], "Twitter");
        strcpy(perguntas[12].opcoes[1], "Instagram");
        strcpy(perguntas[12].opcoes[2], "Facebook");
        strcpy(perguntas[12].opcoes[3], "LinkedIn");
        perguntas[12].correta = 2;

        strcpy(perguntas[13].pergunta, "Qual é o maior provedor de buscas na internet?");
        strcpy(perguntas[13].opcoes[0], "Yahoo!");
        strcpy(perguntas[13].opcoes[1], "Bing");
        strcpy(perguntas[13].opcoes[2], "Google");
        strcpy(perguntas[13].opcoes[3], "DuckDuckGo");
        perguntas[13].correta = 2;

        strcpy(perguntas[14].pergunta, "Qual foi o nome do primeiro vírus de computador conhecido?");
        strcpy(perguntas[14].opcoes[0], "ILOVEYOU");
        strcpy(perguntas[14].opcoes[1], "Morris Worm");
        strcpy(perguntas[14].opcoes[2], "Stuxnet");
        strcpy(perguntas[14].opcoes[3], "Melissa");
        perguntas[14].correta = 1;

        strcpy(perguntas[15].pergunta, "Qual é a principal função de um roteador?");
        strcpy(perguntas[15].opcoes[0], "Armazenar dados");
        strcpy(perguntas[15].opcoes[1], "Gerenciar tráfego de internet");
        strcpy(perguntas[15].opcoes[2], "Proteger a rede contra vírus");
        strcpy(perguntas[15].opcoes[3], "Fornecer conexão sem fio");
        perguntas[15].correta = 1;

        strcpy(perguntas[16].pergunta, "Quem fundou a Microsoft?");
        strcpy(perguntas[16].opcoes[0], "Steve Jobs");
        strcpy(perguntas[16].opcoes[1], "Bill Gates");
        strcpy(perguntas[16].opcoes[2], "Larry Page");
        strcpy(perguntas[16].opcoes[3], "Mark Zuckerberg");
        perguntas[16].correta = 1;

        strcpy(perguntas[17].pergunta, "O que significa a sigla 'USB'?");
        strcpy(perguntas[17].opcoes[0], "Universal Serial Bus");
        strcpy(perguntas[17].opcoes[1], "Universal Service Bus");
        strcpy(perguntas[17].opcoes[2], "User Serial Bus");
        strcpy(perguntas[17].opcoes[3], "User Service Bus");
        perguntas[17].correta = 0;

        strcpy(perguntas[18].pergunta, "Em que ano foi lançado o primeiro modelo do Xbox?");
        strcpy(perguntas[18].opcoes[0], "1999");
        strcpy(perguntas[18].opcoes[1], "2001");
        strcpy(perguntas[18].opcoes[2], "2003");
        strcpy(perguntas[18].opcoes[3], "2005");
        perguntas[18].correta = 1;

        strcpy(perguntas[19].pergunta, "Qual é a principal função do sistema operacional?");
        strcpy(perguntas[19].opcoes[0], "Gerenciar a memória");
        strcpy(perguntas[19].opcoes[1], "Gerenciar o hardware do computador");
        strcpy(perguntas[19].opcoes[2], "Fazer cálculos");
        strcpy(perguntas[19].opcoes[3], "Armazenar arquivos");
        perguntas[19].correta = 1;
    }
}
