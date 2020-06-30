#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char pergunta[500];
	char alternativa_A[250];
	char alternativa_B[250];
	char alternativa_C[250];
	char alternativa_D[250];
	int pontuacao;
	char alternativa_correta;
}Pergunta;

//vari�veis globais
char nome_arquivo_faceis[30] = "esportes_faceis.txt";
char nome_arquivo_medias[30] = "esportes_medias.txt";
char nome_arquivo_dificeis[30] = "esportes_dificeis.txt";
char nome_arquivo_muito_dificeis[40] = "esportes_muito_dificeis.txt";
Pergunta faceis[20];
Pergunta medias[20];
Pergunta dificeis[20];
Pergunta muito_dificeis[15];

void cadastrar_faceis(){
	int pontuacao = 20;
	//Pergunta 1
	strcpy(faceis[0].pergunta,"Em que ano acontece a pr�xima copa do mundo?");
	strcpy(faceis[0].alternativa_A,"2018");
	strcpy(faceis[0].alternativa_B,"2020");
	strcpy(faceis[0].alternativa_C,"2017");
	strcpy(faceis[0].alternativa_D,"2019");
	faceis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(faceis[1].pergunta,"Qual O nome da bola da Copa do mundo de 2014?");
	strcpy(faceis[1].alternativa_A,"Brazuca");
	strcpy(faceis[1].alternativa_B,"Brasileira");
	strcpy(faceis[1].alternativa_C,"Baianinha");
	strcpy(faceis[1].alternativa_D,"Brasucas");
	faceis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(faceis[2].pergunta,"Qual o atacante brasileiro do Atl�tico de Madrid que se naturalizou espanhol?");
	strcpy(faceis[2].alternativa_A,"Diego Costa");
	strcpy(faceis[2].alternativa_B,"Diego Silva");
	strcpy(faceis[2].alternativa_C,"Rodrigues");
	strcpy(faceis[2].alternativa_D,"Alex Sanchez");
	faceis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(faceis[3].pergunta,"Em que time joga o zagueiro brasileiro Tiago Silva");
	strcpy(faceis[3].alternativa_A,"PSG");
	strcpy(faceis[3].alternativa_B,"Barcelona");
	strcpy(faceis[3].alternativa_C,"Manchester United");
	strcpy(faceis[3].alternativa_D,"Arsenal");
	faceis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(faceis[4].pergunta,"Tem impedimento em cobran�as de lateral?");
	strcpy(faceis[4].alternativa_A,"N�o");
	strcpy(faceis[4].alternativa_B,"Sim");
	strcpy(faceis[4].alternativa_C,"Talvez");
	strcpy(faceis[4].alternativa_D,"Depende Do Juiz");
	faceis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(faceis[5].pergunta,"�ltima vez que o Brasil foi campe�o mundial de futebol?");
	strcpy(faceis[5].alternativa_A,"2002");
	strcpy(faceis[5].alternativa_B,"2010");
	strcpy(faceis[5].alternativa_C,"2014");
	strcpy(faceis[5].alternativa_D,"1998");
	faceis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(faceis[6].pergunta,"Quantos jogadores podem ser substitu�dos de cada time durante uma partida de futebol oficial?");
	strcpy(faceis[6].alternativa_A,"3 Jogadores");
	strcpy(faceis[6].alternativa_B,"4 Jogadores");
	strcpy(faceis[6].alternativa_C,"2 Jogadores");
	strcpy(faceis[6].alternativa_D,"5 Jogadores");
	faceis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(faceis[7].pergunta,"Qual o nome completo de Felipe Massa?");
	strcpy(faceis[7].alternativa_A,"Felipe Massa");
	strcpy(faceis[7].alternativa_B,"Felipe Santos Massa");
	strcpy(faceis[7].alternativa_C,"Felipe Souza Massa");
	strcpy(faceis[7].alternativa_D,"Felipe Massa Junior");
	faceis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(faceis[8].pergunta,"Qual a Pontua��o M�xima de uma Cesta no Basquete?");
	strcpy(faceis[8].alternativa_A,"3");
	strcpy(faceis[8].alternativa_B,"2");
	strcpy(faceis[8].alternativa_C,"4");
	strcpy(faceis[8].alternativa_D,"1");
	faceis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(faceis[9].pergunta,"Quem foi o artilheiro da copa do mundo de 2014?");
	strcpy(faceis[9].alternativa_A,"James Rodrigues");
	strcpy(faceis[9].alternativa_B,"Muller");
	strcpy(faceis[9].alternativa_C,"Messi");
	strcpy(faceis[9].alternativa_D,"Neymar");
	faceis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(faceis[10].pergunta,"Qual o atual camisa 10 da Sele��o Brasileira?");
	strcpy(faceis[10].alternativa_A,"Neymar");
	strcpy(faceis[10].alternativa_B,"Oscar");
	strcpy(faceis[10].alternativa_C,"Kak�");
	strcpy(faceis[10].alternativa_D,"Lucas Lima");
	faceis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(faceis[11].pergunta,"Qual O Melhor Jogador de Basquete Todos os tempos?");
	strcpy(faceis[11].alternativa_A,"Michael Jordan");
	strcpy(faceis[11].alternativa_B,"Kobe Bryant");
	strcpy(faceis[11].alternativa_C,"Bill Rusell");
	strcpy(faceis[11].alternativa_D,"Oscar Robertson");
	faceis[11].pontuacao = pontuacao;
	//Pergunta 13
		strcpy(faceis[12].pergunta,"Qual o time atualmente que o brasileiro Hulk joga?");
	strcpy(faceis[12].alternativa_A,"Zenit");
	strcpy(faceis[12].alternativa_B,"Porto");
	strcpy(faceis[12].alternativa_C,"CSKA");
	strcpy(faceis[12].alternativa_D,"Fenerbahce");
	faceis[12].pontuacao = pontuacao;
	//Pergunta 14
		strcpy(faceis[13].pergunta,"Qual o artilheiro do Ultimo Brasileir�o(2014)?");
	strcpy(faceis[13].alternativa_A,"Fred");
	strcpy(faceis[13].alternativa_B,"Ricardo Oliveira");
	strcpy(faceis[13].alternativa_C,"Alexandre Pato");
	strcpy(faceis[13].alternativa_D,"Lucas Pratto");
	faceis[13].pontuacao = pontuacao;
	//Pergunta 15
		strcpy(faceis[14].pergunta,"Qual o nome do esporte que se anda na corda(El�stico)?");
	strcpy(faceis[14].alternativa_A,"Slackline");
	strcpy(faceis[14].alternativa_B,"Pula Corda");
	strcpy(faceis[14].alternativa_C,"Slacline");
	strcpy(faceis[14].alternativa_D,"Slamine");
	faceis[14].pontuacao = pontuacao;
	//Pergunta 16
		strcpy(faceis[15].pergunta,"Qual o melhor nadador brasileiro atualidade?");
	strcpy(faceis[15].alternativa_A,"C�sar Cielo");
	strcpy(faceis[15].alternativa_B,"Ricardo Prado");
	strcpy(faceis[15].alternativa_C,"Gustavo Fran�a");
	strcpy(faceis[15].alternativa_D,"Thiago Machado");
	faceis[15].pontuacao = pontuacao;
	//Pergunta 17
		strcpy(faceis[16].pergunta,"Qual o nome do Maior e mais conhecido esporte praticado com cavalos?");
	strcpy(faceis[16].alternativa_A,"Hipismo");
	strcpy(faceis[16].alternativa_B,"Polo");
	strcpy(faceis[16].alternativa_C,"Bareback");
	strcpy(faceis[16].alternativa_D,"Cutiano");
	faceis[16].pontuacao = pontuacao;
	//Pergunta 18
		strcpy(faceis[17].pergunta,"Qual a idade De Cristiano Ronaldo?");
	strcpy(faceis[17].alternativa_A,"30");
	strcpy(faceis[17].alternativa_B,"29");
	strcpy(faceis[17].alternativa_C,"28");
	strcpy(faceis[17].alternativa_D,"31");
	faceis[17].pontuacao = pontuacao;
	//Pergunta 19
		strcpy(faceis[18].pergunta,"Qual dos times brasileiros tem a maior torcida?");
	strcpy(faceis[18].alternativa_A,"Flamengo");
	strcpy(faceis[18].alternativa_B,"Corinthians");
	strcpy(faceis[18].alternativa_C,"S�o Paulo");
	strcpy(faceis[18].alternativa_D,"Vasco");
	faceis[18].pontuacao = pontuacao;
	//Pergunta 20
		strcpy(faceis[19].pergunta,"Qual o Atual tecnico da sele��o Brasileira?");
	strcpy(faceis[19].alternativa_A,"Dunga");
	strcpy(faceis[19].alternativa_B,"Parreira");
	strcpy(faceis[19].alternativa_C,"Felip�o");
	strcpy(faceis[19].alternativa_D,"Mano Menezes");
	faceis[19].pontuacao = pontuacao;
	
//=====================N�O MEXER NESSE C�DIGO=====================
	FILE *p;
	p = fopen(nome_arquivo_faceis, "r+");//ABRE O ARQUIVO PARA LEITURA E ESCRITA
	if(p == NULL){
		p = fopen(nome_arquivo_faceis, "w");//CRIA O ARQUIVO CASO N�O EXISTA
		if(p == NULL){
			printf("O arquivo n�o p�de ser criado\n");
		}
	}
	fwrite(&faceis, sizeof(faceis), 1, p);
	int fechou = fclose(p);
	if(fechou != 0){
		printf("O arquivo n�o p�de ser fechado\n");
	}else{
		printf("Cadastro de perguntas f�ceis realizado com sucesso\n");
	}
//=====================N�O MEXER NESSE C�DIGO=====================
}

void cadastrar_medias(){
	int pontuacao = 50;
	//Pergunta 1
	strcpy(medias[0].pergunta,"Qual o pais sede da pr�xima copa do mundo?");
	strcpy(medias[0].alternativa_A,"R�ssia");
	strcpy(medias[0].alternativa_B,"Brasil");
	strcpy(medias[0].alternativa_C,"Qatar");
	strcpy(medias[0].alternativa_D,"Su��a");
	medias[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(medias[1].pergunta,"Qual Maior artilheiro de Copas do Mundo");
	strcpy(medias[1].alternativa_A,"Klose");
	strcpy(medias[1].alternativa_B,"Ronaldo");
	strcpy(medias[1].alternativa_C,"Pele");
	strcpy(medias[1].alternativa_D,"Maradona");
	medias[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(medias[2].pergunta,"Qual o Capit�o do Brasil no Penta?");
	strcpy(medias[2].alternativa_A,"Cafu");
	strcpy(medias[2].alternativa_B,"Ronaldo");
	strcpy(medias[2].alternativa_C,"Ronaldinho");
	strcpy(medias[2].alternativa_D,"Dunga");
	medias[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(medias[3].pergunta,"Em que lugar o Brasil terminou a copa de 2014?");
	strcpy(medias[3].alternativa_A,"4 Lugar");
	strcpy(medias[3].alternativa_B,"3 Lugar");
	strcpy(medias[3].alternativa_C,"2 Lugar");
	strcpy(medias[3].alternativa_D,"1 Lugar");
	medias[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(medias[4].pergunta,"Qual o Atual Bicampe�o do campeonato Brasileiro?");
	strcpy(medias[4].alternativa_A,"Cruzeiro");
	strcpy(medias[4].alternativa_B,"Corinthians");
	strcpy(medias[4].alternativa_C,"S�o Paulo");
	strcpy(medias[4].alternativa_D,"Gr�mio");
	medias[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(medias[5].pergunta,"Qual o nome do Jogador eleito pela FIFA como melhor do mundo na �ltima temporada?");
	strcpy(medias[5].alternativa_A,"Cristiano Ronaldo");
	strcpy(medias[5].alternativa_B,"Messi");
	strcpy(medias[5].alternativa_C,"Ronaldo");
	strcpy(medias[5].alternativa_D,"Neymar");
	medias[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(medias[6].pergunta,"Por qual clube joga atualmente o jogador gal�s Gareth Baleo?");
	strcpy(medias[6].alternativa_A,"Real Madrid");
	strcpy(medias[6].alternativa_B,"Chelsea");
	strcpy(medias[6].alternativa_C,"M�laga");
	strcpy(medias[6].alternativa_D,"PSG");
	medias[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(medias[7].pergunta,"Qual o atual campe�o do campeonato Italiano?");
	strcpy(medias[7].alternativa_A,"Juventus");
	strcpy(medias[7].alternativa_B,"Inter de Mil�o");
	strcpy(medias[7].alternativa_C,"Milan");
	strcpy(medias[7].alternativa_D,"Lazio");
	medias[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(medias[8].pergunta,"Qual o atual campe�o Ingl�s?");
	strcpy(medias[8].alternativa_A,"Chelsea");
	strcpy(medias[8].alternativa_B,"Liverpool");
	strcpy(medias[8].alternativa_C,"Arsenal");
	strcpy(medias[8].alternativa_D,"Manchester United");
	medias[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(medias[9].pergunta,"Durante uma partida de futebol quantos KM em M�dia um jogador percorre?");
	strcpy(medias[9].alternativa_A,"10 - 13");
	strcpy(medias[9].alternativa_B,"5 - 6");
	strcpy(medias[9].alternativa_C,"7 - 8");
	strcpy(medias[9].alternativa_D,"5 - 9");
	medias[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(medias[10].pergunta,"Qual Jogador mais novo a disputar uma final de Copa do Mundo?");
	strcpy(medias[10].alternativa_A,"Pele");
	strcpy(medias[10].alternativa_B,"Ronaldo");
	strcpy(medias[10].alternativa_C,"Ronaldinho");
	strcpy(medias[10].alternativa_D,"Neymar");
	medias[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(medias[11].pergunta,"Quantas vezes Ayrton Senna foi campe�o Mundial na f�rmula 1?");
	strcpy(medias[11].alternativa_A,"3");
	strcpy(medias[11].alternativa_B,"4");
	strcpy(medias[11].alternativa_C,"5");
	strcpy(medias[11].alternativa_D,"2");
	medias[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(medias[12].pergunta,"Em que Grande Pr�mio Felipe Massa conquistou sua primeira vit�ria na F�rmula 1?");
	strcpy(medias[12].alternativa_A,"GP Turquia 2006");
	strcpy(medias[12].alternativa_B,"GP Brasil 2009");
	strcpy(medias[12].alternativa_C,"GP Hungria 2006");
	strcpy(medias[12].alternativa_D,"GP Turquia 2007");
	medias[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(medias[13].pergunta,"Quais s�o os dois novos esportes que passar�o a ser disputados nos Jogos Ol�mpicos a partir de 2016?");
	strcpy(medias[13].alternativa_A,"R�gby e Golfe");
	strcpy(medias[13].alternativa_B,"Xadrez e Futebol");
	strcpy(medias[13].alternativa_C,"R�gby e Futebol");
	strcpy(medias[13].alternativa_D,"Golfe e Baisebol");
	medias[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(medias[14].pergunta,"Segundo o Comit� Ol�mpico Brasileiro, o objetivo � que o Brasil fique em que posi��o no ranking de medalhas?");
	strcpy(medias[14].alternativa_A,"10");
	strcpy(medias[14].alternativa_B,"3");
	strcpy(medias[14].alternativa_C,"2");
	strcpy(medias[14].alternativa_D,"1");
	medias[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(medias[15].pergunta,"Quando foi criado o basquete?");
	strcpy(medias[15].alternativa_A,"1891");
	strcpy(medias[15].alternativa_B,"1900");
	strcpy(medias[15].alternativa_C,"1922");
	strcpy(medias[15].alternativa_D,"1862");
	medias[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(medias[16].pergunta,"Qual jogadora de V�lei do Brasileira foi eleita duas vezes a melhor do mundo?");
	strcpy(medias[16].alternativa_A,"Paula Pequeno");
	strcpy(medias[16].alternativa_B,"Sheila");
	strcpy(medias[16].alternativa_C,"Fernanda Garay");
	strcpy(medias[16].alternativa_D,"Dani Lins");
	medias[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(medias[17].pergunta,"Qual a atual melhor jogadora de handebol do Brasil?");
	strcpy(medias[17].alternativa_A,"Duda Amorim");
	strcpy(medias[17].alternativa_B,"Hort�ncia");
	strcpy(medias[17].alternativa_C,"Alexandra Nascimento");
	strcpy(medias[17].alternativa_D,"Rebeca");
	medias[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(medias[18].pergunta,"Atualmente Qual o melhor tenista do mundo?");
	strcpy(medias[18].alternativa_A,"Novak Djokovic");
	strcpy(medias[18].alternativa_B,"Roger Federer");
	strcpy(medias[18].alternativa_C,"Andy Murray");
	strcpy(medias[18].alternativa_D,"Rafael Nadal");
	medias[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(medias[19].pergunta,"Cerca de quantos pa�ses participar�o dos Jogos Ol�mpicos de 2016?");
	strcpy(medias[19].alternativa_A,"206");
	strcpy(medias[19].alternativa_B,"180");
	strcpy(medias[19].alternativa_C,"32");
	strcpy(medias[19].alternativa_D,"64");
	medias[19].pontuacao = pontuacao;
	
//=====================N�O MEXER NESSE C�DIGO=====================
	FILE *p;
	p = fopen(nome_arquivo_medias, "r+");//ABRE O ARQUIVO PARA LEITURA E ESCRITA
	if(p == NULL){
		p = fopen(nome_arquivo_medias, "w");//CRIA O ARQUIVO CASO N�O EXISTA
		if(p == NULL){
			printf("O arquivo n�o p�de ser criado\n");
		}
	}
	fwrite(&medias, sizeof(medias), 1, p);
	int fechou = fclose(p);
	if(fechou != 0){
		printf("O arquivo n�o p�de ser fechado\n");
	}else{
		printf("Cadastro de perguntas medias realizado com sucesso\n");
	}
//=====================N�O MEXER NESSE C�DIGO=====================
}

void cadastrar_dificeis(){
	int pontuacao = 100;
	//Pergunta 1
	strcpy(dificeis[0].pergunta,"Qual A Maior goleada da hist�ria de uma copa do mundo?");
	strcpy(dificeis[0].alternativa_A,"Hungria x El Salvador(1982)");
	strcpy(dificeis[0].alternativa_B,"Brasil x Alemanha(2014)");
	strcpy(dificeis[0].alternativa_C,"Uruguai x Bol�via(1950)");
	strcpy(dificeis[0].alternativa_D,"Uruguai x Esc�cia (1954)");
	dificeis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(dificeis[1].pergunta,"- Quanto pesa a atual ta�a da copa do mundo?");
	strcpy(dificeis[1].alternativa_A,"6.17 kg");
	strcpy(dificeis[1].alternativa_B,"5 kg");
	strcpy(dificeis[1].alternativa_C,"8 kg");
	strcpy(dificeis[1].alternativa_D,"5.8 kg");
	dificeis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(dificeis[2].pergunta,"Qual o atual campe�o da Uefa Champions League?");
	strcpy(dificeis[2].alternativa_A,"Real Madrid");
	strcpy(dificeis[2].alternativa_B,"Barcelona");
	strcpy(dificeis[2].alternativa_C,"PSG");
	strcpy(dificeis[2].alternativa_D,"Bayer Munique");
	dificeis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(dificeis[3].pergunta,"Quantas t�tulos da Uefa Champions League o Real Madrid j� conquistou?");
	strcpy(dificeis[3].alternativa_A,"10");
	strcpy(dificeis[3].alternativa_B,"7");
	strcpy(dificeis[3].alternativa_C,"8");
	strcpy(dificeis[3].alternativa_D,"9");
	dificeis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(dificeis[4].pergunta,"Qual ex-jogador holand�s se tornou t�cnico de um time italiano em 2014?");
	strcpy(dificeis[4].alternativa_A,"Clarence Seedorf");
	strcpy(dificeis[4].alternativa_B,"Ruud Krol");
	strcpy(dificeis[4].alternativa_C,"Sneijder");
	strcpy(dificeis[4].alternativa_D,"Van Bastel");
	dificeis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(dificeis[5].pergunta,"Quem fez o gol que deu o t�tulo para a Espanha na Copa do Mundo de 2010?");
	strcpy(dificeis[5].alternativa_A,"Iniesta");
	strcpy(dificeis[5].alternativa_B,"Fabregas");
	strcpy(dificeis[5].alternativa_C,"David Villa");
	strcpy(dificeis[5].alternativa_D,"Pedro");
	dificeis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(dificeis[6].pergunta,"Qual a nacionalidade do meio campista Arda Turan do Atl�tico de Madrid?");
	strcpy(dificeis[6].alternativa_A,"Turco");
	strcpy(dificeis[6].alternativa_B,"Brasileiro");
	strcpy(dificeis[6].alternativa_C,"Espanhol");
	strcpy(dificeis[6].alternativa_D,"Italiano");
	dificeis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(dificeis[7].pergunta,"Como � conhecido(apelido) na Argentina o argentino Lionel Messi?");
	strcpy(dificeis[7].alternativa_A,"La Pulga");
	strcpy(dificeis[7].alternativa_B,"El Nino");
	strcpy(dificeis[7].alternativa_C,"La Fera");
	strcpy(dificeis[7].alternativa_D,"Fen�meno");
	dificeis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(dificeis[8].pergunta,"Qual equipe espanhola foi eliminada nas quartas de finais da �ltima edi��o da Uefa Champions League?");
	strcpy(dificeis[8].alternativa_A,"M�laga");
	strcpy(dificeis[8].alternativa_B,"Barcelona");
	strcpy(dificeis[8].alternativa_C,"Real Madrid");
	strcpy(dificeis[8].alternativa_D,"Sevilla");
	dificeis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(dificeis[9].pergunta,"Qual o nome do volante ex-Barcelona que atualmente joga no Manchester City?");
	strcpy(dificeis[9].alternativa_A,"Yaya Toure");
	strcpy(dificeis[9].alternativa_B,"Kolo Tour�");
	strcpy(dificeis[9].alternativa_C,"Fernandinho");
	strcpy(dificeis[9].alternativa_D,"Juan Mata");
	dificeis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(dificeis[10].pergunta,"Em que ano Ayrton Senna come�ou sua carreira?");
	strcpy(dificeis[10].alternativa_A,"1984");
	strcpy(dificeis[10].alternativa_B,"1980");
	strcpy(dificeis[10].alternativa_C,"1990");
	strcpy(dificeis[10].alternativa_D,"1985");
	dificeis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(dificeis[11].pergunta,"Quantas vezes Ayrton subiu ao p�dio?");
	strcpy(dificeis[11].alternativa_A,"80");
	strcpy(dificeis[11].alternativa_B,"78");
	strcpy(dificeis[11].alternativa_C,"65");
	strcpy(dificeis[11].alternativa_D,"88");
	dificeis[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(dificeis[12].pergunta,"Qual o nome da primeira equipe de Ayrton na form�la 1?");
	strcpy(dificeis[12].alternativa_A,"Toleman");
	strcpy(dificeis[12].alternativa_B,"Ferrari");
	strcpy(dificeis[12].alternativa_C,"McLaren");
	strcpy(dificeis[12].alternativa_D,"Honda");
	dificeis[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(dificeis[13].pergunta,"Qual piloto tinha o Campeonato de 1961 quase garantido, mas acabou morrendo na pen�ltima corrida?");
	strcpy(dificeis[13].alternativa_A,"Phil Hill");
	strcpy(dificeis[13].alternativa_B,"Ayrton Senna");
	strcpy(dificeis[13].alternativa_C,"Felipe Massa");
	strcpy(dificeis[13].alternativa_D,"Jim Clark");
	dificeis[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(dificeis[14].pergunta,"Qual o ano de nascimento de Felipe Massa?");
	strcpy(dificeis[14].alternativa_A,"1981");
	strcpy(dificeis[14].alternativa_B,"1982");
	strcpy(dificeis[14].alternativa_C,"1986");
	strcpy(dificeis[14].alternativa_D,"1979");
	dificeis[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(dificeis[15].pergunta,"O basquetebol passou a ser um esporte ol�mpico a partir dos Jogos Ol�mpicos de Ver�o de que ano?");
	strcpy(dificeis[15].alternativa_A,"1936");
	strcpy(dificeis[15].alternativa_B,"1850");
	strcpy(dificeis[15].alternativa_C,"1967");
	strcpy(dificeis[15].alternativa_D,"1956");
	dificeis[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(dificeis[16].pergunta,"Quantos esportes ser�o disputados nos Jogos Ol�mpicos de 2016?");
	strcpy(dificeis[16].alternativa_A,"28");
	strcpy(dificeis[16].alternativa_B,"32");
	strcpy(dificeis[16].alternativa_C,"48");
	strcpy(dificeis[16].alternativa_D,"64");
	dificeis[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(dificeis[17].pergunta,"Quantas medalhas ser�o distribu�das nos Jogos Ol�mpicos de 2016?");
	strcpy(dificeis[17].alternativa_A,"306");
	strcpy(dificeis[17].alternativa_B,"129");
	strcpy(dificeis[17].alternativa_C,"255");
	strcpy(dificeis[17].alternativa_D,"240");
	dificeis[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(dificeis[18].pergunta,"Quanto Pesa em M�dia Uma Bola de Basquete?");
	strcpy(dificeis[18].alternativa_A,"650 g");
	strcpy(dificeis[18].alternativa_B,"1 kg");
	strcpy(dificeis[18].alternativa_C,"700 g");
	strcpy(dificeis[18].alternativa_D,"800 g");
	dificeis[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(dificeis[19].pergunta,"Qual a quinta maior torcida do Mundo");
	strcpy(dificeis[19].alternativa_A,"Boca Juniors");
	strcpy(dificeis[19].alternativa_B,"River Plate");
	strcpy(dificeis[19].alternativa_C,"Flamengo");
	strcpy(dificeis[19].alternativa_D,"S�o Paulo");
	dificeis[19].pontuacao = pontuacao;
	
//=====================N�O MEXER NESSE C�DIGO=====================
	FILE *p;
	p = fopen(nome_arquivo_dificeis, "r+");//ABRE O ARQUIVO PARA LEITURA E ESCRITA
	if(p == NULL){
		p = fopen(nome_arquivo_dificeis, "w");//CRIA O ARQUIVO CASO N�O EXISTA
		if(p == NULL){
			printf("O arquivo n�o p�de ser criado\n");
		}
	}
	fwrite(&dificeis, sizeof(dificeis), 1, p);
	int fechou = fclose(p);
	if(fechou != 0){
		printf("O arquivo n�o p�de ser fechado\n");
	}else{
		printf("Cadastro de perguntas dif�ceis realizado com sucesso\n");
	}
//=====================N�O MEXER NESSE C�DIGO=====================
}

void cadastrar_muito_dificeis(){
	int pontuacao = 200;
	//Pergunta 1
	strcpy(muito_dificeis[0].pergunta,"De qual pa�s � Marco Reus?");
	strcpy(muito_dificeis[0].alternativa_A,"Alemanha");
	strcpy(muito_dificeis[0].alternativa_B,"Canad�");
	strcpy(muito_dificeis[0].alternativa_C,"R�ssia");
	strcpy(muito_dificeis[0].alternativa_D,"B�lgaria");
	muito_dificeis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(muito_dificeis[1].pergunta,"Quantos gols Lionel Messi j� fez, at� (agosto de 2015), pelo Barcelona?");
	strcpy(muito_dificeis[1].alternativa_A,"415");
	strcpy(muito_dificeis[1].alternativa_B,"649");
	strcpy(muito_dificeis[1].alternativa_C,"305");
	strcpy(muito_dificeis[1].alternativa_D,"576");
	muito_dificeis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(muito_dificeis[2].pergunta,"Qual era o nome original do voleibol?");
	strcpy(muito_dificeis[2].alternativa_A,"Minonette");
	strcpy(muito_dificeis[2].alternativa_B,"Manoitez");
	strcpy(muito_dificeis[2].alternativa_C,"v�lei");
	strcpy(muito_dificeis[2].alternativa_D,"Ninato");
	muito_dificeis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(muito_dificeis[3].pergunta,"Qual foi o �nico time S�rvio a ganhar o UEFA Champions League?");
	strcpy(muito_dificeis[3].alternativa_A,"Estrela Vermelha");
	strcpy(muito_dificeis[3].alternativa_B,"Partizan");
	strcpy(muito_dificeis[3].alternativa_C,"Jagodina");
	strcpy(muito_dificeis[3].alternativa_D,"Vojvodina");
	muito_dificeis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(muito_dificeis[4].pergunta,"Quem foi o campe�o do Campeonato Espanhol da temporada 2003-04?");
	strcpy(muito_dificeis[4].alternativa_A,"Valencia");
	strcpy(muito_dificeis[4].alternativa_B,"Real Madrid");
	strcpy(muito_dificeis[4].alternativa_C,"Barcelona");
	strcpy(muito_dificeis[4].alternativa_D,"Atl�tico de Madrid");
	muito_dificeis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(muito_dificeis[5].pergunta,"Qual time � o segundo maior campe�o da UEFA Champions League?");
	strcpy(muito_dificeis[5].alternativa_A,"Milan");
	strcpy(muito_dificeis[5].alternativa_B,"Real Madrid");
	strcpy(muito_dificeis[5].alternativa_C,"Ajax");
	strcpy(muito_dificeis[5].alternativa_D,"Barcelona");
	muito_dificeis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(muito_dificeis[6].pergunta,"Qual foi o primeiro campe�o da Copa Sul-Americana?");
	strcpy(muito_dificeis[6].alternativa_A,"San Lorenzo");
	strcpy(muito_dificeis[6].alternativa_B,"Velez");
	strcpy(muito_dificeis[6].alternativa_C,"Boca Juniors");
	strcpy(muito_dificeis[6].alternativa_D,"Internacional");
	muito_dificeis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(muito_dificeis[7].pergunta,"Qual � a fun��o do oposto no Voleibol?");
	strcpy(muito_dificeis[7].alternativa_A,"Atacar a Bola ");
	strcpy(muito_dificeis[7].alternativa_B,"Defender a Bola");
	strcpy(muito_dificeis[7].alternativa_C,"Bloquear a Bola ");
	strcpy(muito_dificeis[7].alternativa_D,"Levantar a Bola");
	muito_dificeis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(muito_dificeis[8].pergunta,"Qual � o maior campe�o da UEFA Europa League?");
	strcpy(muito_dificeis[8].alternativa_A,"Sevilla");
	strcpy(muito_dificeis[8].alternativa_B,"Juventus");
	strcpy(muito_dificeis[8].alternativa_C,"Liverpool");
	strcpy(muito_dificeis[8].alternativa_D,"Atl�tico de Madrid");
	muito_dificeis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(muito_dificeis[9].pergunta,"Quanto foi a partida entre �ustria e Su��a na Copa do Mundo de 1954 na Su��a?");
	strcpy(muito_dificeis[9].alternativa_A,"�ustria 7x5 Su��a");
	strcpy(muito_dificeis[9].alternativa_B,"�ustria 6x9 Su��a");
	strcpy(muito_dificeis[9].alternativa_C,"�ustria 10x5 Su��a");
	strcpy(muito_dificeis[9].alternativa_D,"�ustria 10x2 Su��a");
	muito_dificeis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(muito_dificeis[10].pergunta,"Qual a sele��o que mais vezes foi a semifinal da Copa do Mundo?");
	strcpy(muito_dificeis[10].alternativa_A,"Alemanha");
	strcpy(muito_dificeis[10].alternativa_B,"Brasil");
	strcpy(muito_dificeis[10].alternativa_C,"Argentina");
	strcpy(muito_dificeis[10].alternativa_D,"It�lia");
	muito_dificeis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(muito_dificeis[11].pergunta,"Quantos Jogos Jefferson Atual Goleiro da Sele��o, Completou Pelo Botafogo?");
	strcpy(muito_dificeis[11].alternativa_A,"400");
	strcpy(muito_dificeis[11].alternativa_B,"500");
	strcpy(muito_dificeis[11].alternativa_C,"300");
	strcpy(muito_dificeis[11].alternativa_D,"350");
	muito_dificeis[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(muito_dificeis[12].pergunta,"Quem Foi Eleito o Melhor Goleiro de 2007?");
	strcpy(muito_dificeis[12].alternativa_A,"Gianluigi Buffon");
	strcpy(muito_dificeis[12].alternativa_B,"Dida");
	strcpy(muito_dificeis[12].alternativa_C,"Iker Casillas");
	strcpy(muito_dificeis[12].alternativa_D,"Petr Cech");
	muito_dificeis[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(muito_dificeis[13].pergunta,"Quantos Gols Neymar J� fez Pelo Santos?");
	strcpy(muito_dificeis[13].alternativa_A,"138");
	strcpy(muito_dificeis[13].alternativa_B,"200");
	strcpy(muito_dificeis[13].alternativa_C,"79");
	strcpy(muito_dificeis[13].alternativa_D,"125");
	muito_dificeis[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(muito_dificeis[14].pergunta,"Qual a altura oficial da rede de voleibol para o feminino?");
	strcpy(muito_dificeis[14].alternativa_A,"2,24 metros");
	strcpy(muito_dificeis[14].alternativa_B,"2,34 metros");
	strcpy(muito_dificeis[14].alternativa_C,"2,21 metros");
	strcpy(muito_dificeis[14].alternativa_D,"2,41 metros");
	muito_dificeis[14].pontuacao = pontuacao;
	
	
//=====================N�O MEXER NESSE C�DIGO=====================
	FILE *p;
	p = fopen(nome_arquivo_muito_dificeis, "r+");//ABRE O ARQUIVO PARA LEITURA E ESCRITA
	if(p == NULL){
		p = fopen(nome_arquivo_muito_dificeis, "w");//CRIA O ARQUIVO CASO N�O EXISTA
		if(p == NULL){
			printf("O arquivo n�o p�de ser criado\n");
		}
	}
	fwrite(&muito_dificeis, sizeof(muito_dificeis), 1, p);
	int fechou = fclose(p);
	if(fechou != 0){
		printf("O arquivo n�o p�de ser fechado\n");
	}else{
		printf("Cadastro de perguntas muito dif�ceis realizado com sucesso\n");
	}
//=====================N�O MEXER NESSE C�DIGO=====================
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	cadastrar_faceis();
	cadastrar_medias();
	cadastrar_dificeis();	
	cadastrar_muito_dificeis();
	return 0;
}
