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
char nome_arquivo_faceis[30] = "gerais_faceis.txt";
char nome_arquivo_medias[30] = "gerais_medias.txt";
char nome_arquivo_dificeis[30] = "gerais_dificeis.txt";
char nome_arquivo_muito_dificeis[40] = "gerais_muito_dificeis.txt";
Pergunta faceis[20];
Pergunta medias[20];
Pergunta dificeis[20];
Pergunta muito_dificeis[15];

void cadastrar_faceis(){
	int pontuacao = 20;
	//Pergunta 1
	strcpy(faceis[0].pergunta,"Qual foi o estopim (fato que deu in�cio) da Primeira Guerra Mundial?");
	strcpy(faceis[0].alternativa_A,"O assassinato de Francisco Ferdinando, pr�ncipe do Imp�rio Austro-H�ngaro");
	strcpy(faceis[0].alternativa_B,"A invas�o da Pol�nia pelo ex�rcito alem�o");
	strcpy(faceis[0].alternativa_C,"A forma��o do bloco militar composto por Alemanha, It�lia e Fran�a");
	strcpy(faceis[0].alternativa_D,"A disputa por territ�rio no continente americano, principalmente entre Alemanha e It�lia.");
	faceis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(faceis[1].pergunta,"Sobre o fim da Primeira Guerra Mundial � correto afirmar que:");
	strcpy(faceis[1].alternativa_A,"Os pa�ses da Tr�plice Alian�a sa�ram derrotados e foram for�ados a assinarem o Tratado de Versalhes, que imp�s severas puni��es e restri��es aos derrotados, principalmente � Alemanha.");
	strcpy(faceis[1].alternativa_B,"Embora derrotados, Alemanha e Imp�rio Austro-H�ngaro n�o sofreram puni��es e restri��es militares.");
	strcpy(faceis[1].alternativa_C,"Os pa�ses da Tr�plice Alian�a venceram o conflito e retomaram o controle de diversos territ�rios na Europa, �sia e �frica.");
	strcpy(faceis[1].alternativa_D,"Com a derrota na Primeira Guerra Mundial, os pa�ses da Tr�plice Entente, principalmente R�ssia e Gr�-Bretanha, sofreram com uma forte crise econ�mica nas tr�s d�cadas seguintes.");
	faceis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(faceis[2].pergunta,"Podemos apontar como uma das principais causas da Segunda Guerra Mundial:");
	strcpy(faceis[2].alternativa_A,"O surgimento e fortalecimento, na d�cada de 1930, de governos totalit�rios na Europa, com objetivos expansionistas e militaristas.");
	strcpy(faceis[2].alternativa_B,"A rivalidade pol�tica e militar entre Alemanha e It�lia no final da d�cada de 1930.");
	strcpy(faceis[2].alternativa_C,"A pol�tica expansionista da Fran�a, que invadiu e conquistou v�rios territ�rios na Europa e na �frica no final da d�cada de 1930.");
	strcpy(faceis[2].alternativa_D,"A alian�a militar estabelecida por It�lia, Alemanha e Estados Unidos no come�o da d�cada de 1930");
	faceis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(faceis[3].pergunta,"Qual das alternativas abaixo aponta o marco inicial da Segunda Guerra Mundial?");
	strcpy(faceis[3].alternativa_A,"A invas�o da Pol�nia pelas for�as armadas da Alemanha em 1� de setembro de 1939.");
	strcpy(faceis[3].alternativa_B,"O ataque do Jap�o � base militar norte-americana de Pearl Harbor.");
	strcpy(faceis[3].alternativa_C,"Os diversos bombardeios brit�nicos a v�rias cidades alem�s.");
	strcpy(faceis[3].alternativa_D,"O estabelecimento de acordos militares entre Alemanha, It�lia e Jap�o.");
	faceis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(faceis[4].pergunta,"Sobre a crise de 29, marque a alternativa que responde qual pais ficou seriamente afetado e chegou a acusar um certo grupo por ser o culpado da crise.");
	strcpy(faceis[4].alternativa_A,"Alemanha");
	strcpy(faceis[4].alternativa_B,"Inglaterra");
	strcpy(faceis[4].alternativa_C,"Fran�a");
	strcpy(faceis[4].alternativa_D,"EUA");
	faceis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(faceis[5].pergunta,"Complete: Hiroshima e ___ foram as duas cidades atacadas por bombas at�micas.");
	strcpy(faceis[5].alternativa_A,"Nagasaki");
	strcpy(faceis[5].alternativa_B,"Montreal");
	strcpy(faceis[5].alternativa_C,"Han�ver");
	strcpy(faceis[5].alternativa_D,"Daegu");
	faceis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(faceis[6].pergunta,"Civiliza��o cujos governantes eram conhecidos como fara�s?");
	strcpy(faceis[6].alternativa_A,"Eg�pciai");
	strcpy(faceis[6].alternativa_B,"Indiana");
	strcpy(faceis[6].alternativa_C,"Grega");
	strcpy(faceis[6].alternativa_D,"Ass�ria");
	faceis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(faceis[7].pergunta,"Quem eram os rivais na guerra fria?");
	strcpy(faceis[7].alternativa_A,"EUA X URSS");
	strcpy(faceis[7].alternativa_B,"Inglaterra X Brasil");
	strcpy(faceis[7].alternativa_C,"EUA X Jap�o");
	strcpy(faceis[7].alternativa_D,"Fran�a X URSS");
	faceis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(faceis[8].pergunta,"O que foi a Guerra Fria?");
	strcpy(faceis[8].alternativa_A,"Momento de tens�o entre os EUA e a URSS depois da 2� Guerra Mundial");
	strcpy(faceis[8].alternativa_B,"A vingan�a dos Judeus");
	strcpy(faceis[8].alternativa_C,"Disputa pela Als�cia Lorena entre a Alemanha e a Fran�a");
	strcpy(faceis[8].alternativa_D,"Acerto de contas dos EUA com a Inglaterra");
	faceis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(faceis[9].pergunta,"Por que o nome 'Guerra Fria'?");
	strcpy(faceis[9].alternativa_A,"Porque foi um momento de tens�o, entretanto sem combates");
	strcpy(faceis[9].alternativa_B,"Porque onde eles se confrontavam era muito gelado");
	strcpy(faceis[9].alternativa_C,"Porque, geralmente, os combatentes morriam de frio");
	strcpy(faceis[9].alternativa_D,"Porque aconteceu na R�ssia onde � frio");
	faceis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(faceis[10].pergunta,"O que foi a Corrida Armamentista?");
	strcpy(faceis[10].alternativa_A,"Desenvolvimento de armas entre as duas pot�ncias (URSS e EUA)");
	strcpy(faceis[10].alternativa_B,"Corrida feita pelos norte-americanos do M�xico at� o norte do Canad� com armas");
	strcpy(faceis[10].alternativa_C,"Foi a principal guerra entre os paises");
	strcpy(faceis[10].alternativa_D,"Explos�o de bombas nucleares");
	faceis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(faceis[11].pergunta,"Na guerra fria quem estava no lado socialista?");
	strcpy(faceis[11].alternativa_A,"Uni�o Sovi�tica, China e Cuba");
	strcpy(faceis[11].alternativa_B,"Uni�o Sovi�tica, China e Brasil");
	strcpy(faceis[11].alternativa_C,"Brasil, Paraguai e Argentina");
	strcpy(faceis[11].alternativa_D,"Uni�o Sovi�tica, China e EUA");
	faceis[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(faceis[12].pergunta,"Na guerra fria quem estava no lado capitalista?");
	strcpy(faceis[12].alternativa_A,"EUA, Am�rica Latina e Jap�o");
	strcpy(faceis[12].alternativa_B,"Fran�a, Coreia do Norte e Inglaterra");
	strcpy(faceis[12].alternativa_C,"Am�rica Latina, URSS e Coreia do Sul");
	strcpy(faceis[12].alternativa_D,"EUA, Brasil e Cuba");
	faceis[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(faceis[13].pergunta,"O nazismo � uma ideologia anticomunista que al�m de odiarem os negros e os judeus, tamb�m odiava:");
	strcpy(faceis[13].alternativa_A,"Os homossexuais e estrangeiros");
	strcpy(faceis[13].alternativa_B,"Os fascistas e os estrangeiros");
	strcpy(faceis[13].alternativa_C,"A ra�a ariana e as mulheres");
	strcpy(faceis[13].alternativa_D,"Os homossexuais e os sovi�ticos");
	faceis[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(faceis[14].pergunta,"A persegui��o e elimina��o dos judeus nos campos de concentra��o ficou conhecido como:");
	strcpy(faceis[14].alternativa_A,"O holocausto");
	strcpy(faceis[14].alternativa_B,"A elimina��o");
	strcpy(faceis[14].alternativa_C,"O exterm�nio");
	strcpy(faceis[14].alternativa_D,"A purifica��o");
	faceis[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(faceis[15].pergunta,"Na mitologia grega quem abaixo n�o era considerado um deus?");
	strcpy(faceis[15].alternativa_A,"Medusa");
	strcpy(faceis[15].alternativa_B,"Cronos");
	strcpy(faceis[15].alternativa_C,"Gaia");
	strcpy(faceis[15].alternativa_D,"Eros");
	faceis[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(faceis[16].pergunta,"Segundo a mitologia grega quem governa o mundo dos mortos?");
	strcpy(faceis[16].alternativa_A,"Hades");
	strcpy(faceis[16].alternativa_B,"Cronos");
	strcpy(faceis[16].alternativa_C,"Gaia");
	strcpy(faceis[16].alternativa_D,"Eros");
	faceis[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(faceis[17].pergunta,"Em que pa�s foi aplicado o nazismo?");
	strcpy(faceis[17].alternativa_A,"Alemanha");
	strcpy(faceis[17].alternativa_B,"Fran�a");
	strcpy(faceis[17].alternativa_C,"Inglaterra");
	strcpy(faceis[17].alternativa_D,"�ustria");
	faceis[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(faceis[18].pergunta,"Quem liderou o nazismo?");
	strcpy(faceis[18].alternativa_A,"Adolf Hitler");
	strcpy(faceis[18].alternativa_B,"Czar Nicolau II");
	strcpy(faceis[18].alternativa_C,"Get�lio Vargas");
	strcpy(faceis[18].alternativa_D,"Em�lio Garrastazu M�dici");
	faceis[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(faceis[19].pergunta,"Complete: A hist�ria do Brasil compreende, tradicionalmente, a chegada dos ___.");
	strcpy(faceis[19].alternativa_A,"Portugueses");
	strcpy(faceis[19].alternativa_B,"Chineses");
	strcpy(faceis[19].alternativa_C,"Espanh�is");
	strcpy(faceis[19].alternativa_D,"Alem�es");
	faceis[19].pontuacao = pontuacao;
	//...
	//Pergunta 20
	
	
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
	strcpy(medias[0].pergunta,"Um dos Pais Fundadores dos Estados Unidos, ele foi o autor da Declara��o de Independ�ncia e o terceiro presidente da na��o");
	strcpy(medias[0].alternativa_A,"Thomas Jefferson");
	strcpy(medias[0].alternativa_B,"John Adams ");
	strcpy(medias[0].alternativa_C,"James Madison");
	strcpy(medias[0].alternativa_D,"George Washington");
	medias[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(medias[1].pergunta,"F�sico, matem�tico e astr�nomo que, no contexto da revolu��o cient�fica da Renascen�a, defendeu a teoria do Heliocentrismo, elaborada antes por Nicolau Cop�rnico. Tamb�m descobriu as fases de V�nus e as quatro maiores luas de J�piter");
	strcpy(medias[1].alternativa_A,"Galileu Galilei");
	strcpy(medias[1].alternativa_B,"Tycho Brahe");
	strcpy(medias[1].alternativa_C,"Isaac Newton");
	strcpy(medias[1].alternativa_D,"Johannes Kepler");
	medias[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(medias[2].pergunta,"Considerado um dos presidentes mais autorit�rios da ditadura brasileira, ele acionou o Ato Institucional Cinco, reprimindo opositores com medidas violentas");
	strcpy(medias[2].alternativa_A,"Costa e Silva");
	strcpy(medias[2].alternativa_B,"Castelo Branco");
	strcpy(medias[2].alternativa_C,"Figueiredo");
	strcpy(medias[2].alternativa_D,"Geisel");
	medias[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(medias[3].pergunta,"Qual era o Deus que os eg�pcios acreditavam que era respons�vel por conduzir os seres humanos ap�s a morte ?");
	strcpy(medias[3].alternativa_A,"An�bis");
	strcpy(medias[3].alternativa_B,"�sis");
	strcpy(medias[3].alternativa_C,"R�");
	strcpy(medias[3].alternativa_D,"Amon");
	medias[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(medias[4].pergunta,"Nome da escrita utilizada pelos eg�pcios para registra textos:");
	strcpy(medias[4].alternativa_A,"Hier�glifos");
	strcpy(medias[4].alternativa_B,"Desenhos");
	strcpy(medias[4].alternativa_C,"Amurabis");
	strcpy(medias[4].alternativa_D,"Letras");
	medias[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(medias[5].pergunta,"Complete: As ___ foram as primeiras c�maras mortu�rias do Egito");
	strcpy(medias[5].alternativa_A,"Mastabas");
	strcpy(medias[5].alternativa_B,"Pir�mides");
	strcpy(medias[5].alternativa_C,"Sarc�fagos");
	strcpy(medias[5].alternativa_D,"Mosteiros");
	medias[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(medias[6].pergunta,"Dentre as alternativas a seguir, qual representa a mesma guerra?");
	strcpy(medias[6].alternativa_A,"Guerra da Secess�o/Guerra Civil Americana.");
	strcpy(medias[6].alternativa_B,"Guerra dos Cem Anos/Guerra Armada Neo-Ucraniana");
	strcpy(medias[6].alternativa_C,"Segunda Guerra Mundial/Guerra �talo-Germ�nica");
	strcpy(medias[6].alternativa_D,"Guerra de Canudos/Combate Independente Mineiro");
	medias[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(medias[7].pergunta,"Indique a alternativa correta:");
	strcpy(medias[7].alternativa_A,"A batalha dos Trezentos e Trinta e Cinco anos foi a maior batalha da hist�ria, contudo, n�o ouve um disparo de qualquer tipo de armas.");
	strcpy(medias[7].alternativa_B,"A batalha dos Cem Anos foi a maior batalha da hist�ria, e tamb�m a mais sangrenta. Registram-se 90 milh�es de mortos");
	strcpy(medias[7].alternativa_C,"A Primeira Guerra Mundial j� tinha Hitler como um dos maiores comandantes, n�o chegando a ser presidente (ainda).");
	strcpy(medias[7].alternativa_D,"A Guerra de Troia foi definitivamente a maior guerra da hist�ria, durando aproximadamente quatrocentos anos, e matando 38 milh�es de pessoas.");
	medias[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(medias[8].pergunta,"Quem construi o farol de alexandria?");
	strcpy(medias[8].alternativa_A,"Ptolomeu");
	strcpy(medias[8].alternativa_B,"Alexandre, o grande");
	strcpy(medias[8].alternativa_C,"J�lio Cesar");
	strcpy(medias[8].alternativa_D,"Davi");
	medias[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(medias[9].pergunta,"Com que objetivo foram constru�dos os jardins suspensos?");
	strcpy(medias[9].alternativa_A,"Para homenagear a mulher de Nabucodonosor II");
	strcpy(medias[9].alternativa_B,"Para homenagear o rei");
	strcpy(medias[9].alternativa_C,"Para proclamar o poder do rei");
	strcpy(medias[9].alternativa_D,"Para lucrar com turistas ");
	medias[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(medias[10].pergunta,"Que frase representa melhor a lei de Tali�o?");
	strcpy(medias[10].alternativa_A,"Olho por olho, dente por dente");
	strcpy(medias[10].alternativa_B,"Escreveu n�o leu, pau comeu");
	strcpy(medias[10].alternativa_C,"A tua inveja � a prova do meu sucesso");
	strcpy(medias[10].alternativa_D,"Urubu come milho, piriquito leva a culpa");
	medias[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(medias[11].pergunta,"Qual � a �nica institui��o do Imp�rio Romano que continua existindo at� hoje?");
	strcpy(medias[11].alternativa_A,"A Igreja Cat�lica");
	strcpy(medias[11].alternativa_B,"O Calcio");
	strcpy(medias[11].alternativa_C,"A corrida de bigas");
	strcpy(medias[11].alternativa_D,"O Coliseu");
	medias[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(medias[12].pergunta,"Que cidade da Am�rica foi a capital de um imp�rio colonial?");
	strcpy(medias[12].alternativa_A,"Rio de Janeiro");
	strcpy(medias[12].alternativa_B,"Buenos Aires");
	strcpy(medias[12].alternativa_C,"Salvador");
	strcpy(medias[12].alternativa_D,"Cartagena");
	medias[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(medias[13].pergunta,"Quem � conhecido por ter formulado as tr�s leis fundamentais da mec�nica celeste, conhecidas como Leis de '(seu sobrenome)'? Viveu (1571-1630)");
	strcpy(medias[13].alternativa_A,"Johannes Kepler");
	strcpy(medias[13].alternativa_B,"Tycho Brahe");
	strcpy(medias[13].alternativa_C,"Galileu Galilei");
	strcpy(medias[13].alternativa_D,"John Napier");
	medias[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(medias[14].pergunta,"'A mudan�a de movimento � proporcional � for�a motora imprimida, e � produzida na dire��o de linha reta na qual aquela for�a � imprimida'. Qual das ' Tr�s Leis de Newton' � essa?");
	strcpy(medias[14].alternativa_A,"Segunda - Princ�pio Fundamental da Din�mica");
	strcpy(medias[14].alternativa_B,"Terceira - Motoriza��o Vaporizada");
	strcpy(medias[14].alternativa_C,"Segunda - A��o e Rea��o");
	strcpy(medias[14].alternativa_D,"Terceira - Princ�pio Fundamental da Din�mica");
	medias[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(medias[15].pergunta,"Para qual Filosofo Grego o �tomo era o menor componente de toda a mat�ria existente. Sendo, ent�o, imposs�vel dividi-lo em partes menores? Viveu (VII-VI a.C)");
	strcpy(medias[15].alternativa_A,"Dem�crito");
	strcpy(medias[15].alternativa_B,"Pit�goras");
	strcpy(medias[15].alternativa_C,"Plat�o");
	strcpy(medias[15].alternativa_D,"Socr�tes");
	medias[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(medias[16].pergunta,"Qual � 'A Equa��o mais famosa do mundo'?");
	strcpy(medias[16].alternativa_A,"E=mc�");
	strcpy(medias[16].alternativa_B,"E=mc�");
	strcpy(medias[16].alternativa_C,"E=em�");
	strcpy(medias[16].alternativa_D,"E=mc");
	medias[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(medias[17].pergunta,"Segundo a 'Royal Society', quem � o 'MAIOR CIENTISTA DE TODOS OS TEMPOS'?");
	strcpy(medias[17].alternativa_A,"Sir Isaac Newton");
	strcpy(medias[17].alternativa_B,"Galileu Galilei");
	strcpy(medias[17].alternativa_C,"Albert Einstein");
	strcpy(medias[17].alternativa_D,"Sir Francis Bacon");
	medias[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(medias[18].pergunta,"Quem foi o primeiro a demonstrar que os movimentos de objetos, tanto na Terra como em outros corpos celestes, s�o governados pelo mesmo conjunto de leis naturais? Viveu (1643-1727)");
	strcpy(medias[18].alternativa_A,"Sir Isaac Newton");
	strcpy(medias[18].alternativa_B,"Albert Einstein");
	strcpy(medias[18].alternativa_C,"Sir Francis Bacon");
	strcpy(medias[18].alternativa_D,"Sir Charlies Darwin");
	medias[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(medias[19].pergunta,"O que significa Filosofia?");
	strcpy(medias[19].alternativa_A,"Amor � sabedoria");
	strcpy(medias[19].alternativa_B,"Amor � liberdade");
	strcpy(medias[19].alternativa_C,"Amor ao amigo");
	strcpy(medias[19].alternativa_D,"Amor � paz");
	medias[19].pontuacao = pontuacao;
	//...
	//Pergunta 20
	
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
	strcpy(dificeis[0].pergunta,"Qual o nome do projeto que trabalhou no mapeamento do DNA humano, em 2001?");
	strcpy(dificeis[0].alternativa_A,"Projeto Genoma Humano");
	strcpy(dificeis[0].alternativa_B,"Projeto XX e XY");
	strcpy(dificeis[0].alternativa_C,"Projeto Vida");
	strcpy(dificeis[0].alternativa_D,"Projeto DNA");
	dificeis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(dificeis[1].pergunta,"Quem � conhecido como o 'Pai da Microbiologia'?");
	strcpy(dificeis[1].alternativa_A,"Louis Pasteur");
	strcpy(dificeis[1].alternativa_B,"Gregor Mendel");
	strcpy(dificeis[1].alternativa_C,"Robert Boyle");
	strcpy(dificeis[1].alternativa_D,"Antoine Lavoisier");
	dificeis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(dificeis[2].pergunta,"Quem � conhecido como 'Pai da Gen�tica'? Viveu (1822-1884)");
	strcpy(dificeis[2].alternativa_A,"Gregor Mendel");
	strcpy(dificeis[2].alternativa_B,"Francis Collins");
	strcpy(dificeis[2].alternativa_C,"Sir Charles Darwin");
	strcpy(dificeis[2].alternativa_D,"Antoine Lavoisier");
	dificeis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(dificeis[3].pergunta,"Quem foi o Ilustre Diretor desse Projeto (questao 37) que marcou o inicio do S�culo XXI?");
	strcpy(dificeis[3].alternativa_A,"Francis Collins");
	strcpy(dificeis[3].alternativa_B,"Alan Sabagge");
	strcpy(dificeis[3].alternativa_C,"John Lennox");
	strcpy(dificeis[3].alternativa_D,"Stephen Hawking");
	dificeis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(dificeis[4].pergunta,"Quem criou a Teoria 'Hip�tese do �tomo Primordial'?");
	strcpy(dificeis[4].alternativa_A,"George Lema�tre");
	strcpy(dificeis[4].alternativa_B,"Albert Einstein");
	strcpy(dificeis[4].alternativa_C,"Sir Isaac Newton");
	strcpy(dificeis[4].alternativa_D,"Stephen Hawking");
	dificeis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(dificeis[5].pergunta,"Quem descobriu a lei da radia��o t�rmica? E como ela � chamada?");
	strcpy(dificeis[5].alternativa_A,"Max Planck - Lei de Planck da Radia��o");
	strcpy(dificeis[5].alternativa_B,"Max Planck - Lei de Max");
	strcpy(dificeis[5].alternativa_C,"Albert Einstein - Lei de Einstein");
	strcpy(dificeis[5].alternativa_D,"Albert Einstein - Lei Einsteniana");
	dificeis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(dificeis[6].pergunta,"Quem foi o qu�mico e microbiologista que descobriu os princ�pios da vacina��o, a fermenta��o microbiana e pasteuriza��o? Viveu (1822-1895)");
	strcpy(dificeis[6].alternativa_A,"Louis Pasteur");
	strcpy(dificeis[6].alternativa_B,"George Jackson Mivart");
	strcpy(dificeis[6].alternativa_C,"John William Dawson");
	strcpy(dificeis[6].alternativa_D,"John Dalton");
	dificeis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(dificeis[7].pergunta,"Qual o nome da lei f�sica que expressa a rela��o entre o calor gerado e a corrente el�trica que percorre um condutor em determinado tempo?");
	strcpy(dificeis[7].alternativa_A,"Lei de Joule");
	strcpy(dificeis[7].alternativa_B,"Lei de Newton");
	strcpy(dificeis[7].alternativa_C,"Lei de Atenas");
	strcpy(dificeis[7].alternativa_D,"Lei de Maxwell");
	dificeis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(dificeis[8].pergunta,"De quem � a frase 'Se � para o bem de todos e felicidade geral da Na��o, estou pronto! Diga ao povo que fico!'?");
	strcpy(dificeis[8].alternativa_A,"Dom Pedro I");
	strcpy(dificeis[8].alternativa_B,"Dom Pedro II");
	strcpy(dificeis[8].alternativa_C,"Presidente Fernando Henrique Cardoso");
	strcpy(dificeis[8].alternativa_D,"Dilma");
	dificeis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(dificeis[9].pergunta,"Qual elemento est� relacionado � dimens�o racional?");
	strcpy(dificeis[9].alternativa_A,"Ar");
	strcpy(dificeis[9].alternativa_B,"�ter");
	strcpy(dificeis[9].alternativa_C,"Fogo");
	strcpy(dificeis[9].alternativa_D,"Terra");
	dificeis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(dificeis[10].pergunta,"Por que V�nus � o planeta regente de touro?");
	strcpy(dificeis[10].alternativa_A,"Porque V�nus liga a todos os prazeres e Touro � o signo fixo sensorial.");
	strcpy(dificeis[10].alternativa_B,"Porque V�nus liga aos desejos e Touro � o signo fixo de terra.");
	strcpy(dificeis[10].alternativa_C,"Porque V�nus liga aos racioc�nios l�gicos e Touro � o signo fixo de terra.");
	strcpy(dificeis[10].alternativa_D,"Porque V�nus liga ao inconsciente e Touro � o signo regente da nona casa.");
	dificeis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(dificeis[11].pergunta,"Algumas pessoas tem medo da escurid�o. Qual � a fobia que elas t�m?");
	strcpy(dificeis[11].alternativa_A,"Acluofobia");
	strcpy(dificeis[11].alternativa_B,"Agrafobia");
	strcpy(dificeis[11].alternativa_C,"Aletrorofobia");
	strcpy(dificeis[11].alternativa_D,"Apifobia");
	dificeis[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(dificeis[12].pergunta,"O que � Coprofobia?");
	strcpy(dificeis[12].alternativa_A,"Medo de fezes");
	strcpy(dificeis[12].alternativa_B,"Medo de c�maras");
	strcpy(dificeis[12].alternativa_C,"Medo de ver uma pessoa sem uma parte do corpo");
	strcpy(dificeis[12].alternativa_D,"Medo de copos");
	dificeis[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(dificeis[13].pergunta,"No Brasil, qual acidente a�reo, infelizmente, tirou a vida de mais pessoas?");
	strcpy(dificeis[13].alternativa_A,"17 de julho de 2007, S�o Paulo - Airbus A-320 da TAM que n�o conseguiu parar ao aterrissar no Aeroporto de Congonhas");
	strcpy(dificeis[13].alternativa_B,"29 de setembro de 2006, Mato Grosso - Boeing da Gol colide com um jato Legacy");
	strcpy(dificeis[13].alternativa_C,"outubro de 1996, S�o Paulo - Fokker-100 da TAM cai sobre o bairro do Jabaquara, Zona Sul de S�o Paulo");
	strcpy(dificeis[13].alternativa_D,"abril de 1980, Florian�polis - Boeing 727 da Transbrasil");
	dificeis[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(dificeis[14].pergunta,"Qual foi a maior trag�dia em est�dios de futebol, matando mais pessoas que assistiam a uma simples partida?");
	strcpy(dificeis[14].alternativa_A,"PERU X ARGENTINA - Local:Lima (Peru) - Competi��o: Torneio Pr�-Ol�mpico - Ano: 1964");
	strcpy(dificeis[14].alternativa_B,"HEARTS OF OAK x KUMASI ASHANTI KOTOKO - Local:Accra (Gana) - Competi��o:Campeonato Gan�s - Ano: 2001");
	strcpy(dificeis[14].alternativa_C,"NOTTINGHAM FOREST x LIVERPOOL - Local:Sheffield (Inglaterra) - Competi��o:Copa da Inglaterra - Ano: 1989");
	strcpy(dificeis[14].alternativa_D,"MUKTIJODHA x JANAKPUR - Local:Katmandu (Nepal) - Competi��o:Amistoso - Ano: 1988");
	dificeis[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(dificeis[15].pergunta,"Qual desses seres � respons�vel por mais mortes no mundo?");
	strcpy(dificeis[15].alternativa_A,"Mosquito");
	strcpy(dificeis[15].alternativa_B,"Le�o");
	strcpy(dificeis[15].alternativa_C,"Elefante");
	strcpy(dificeis[15].alternativa_D,"Leopardo");
	dificeis[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(dificeis[16].pergunta,"Em 1 de fevereiro de 2003 - �nibus espacial carregando sete astronautas, incluindo o primeiro de Israel, desintegra-se sobre o Texas ao entrar na atmosfera, ap�s miss�o de 16 dias. Qual o nome desse �nibus espacial?");
	strcpy(dificeis[16].alternativa_A,"Columbia");
	strcpy(dificeis[16].alternativa_B,"Endeavour");
	strcpy(dificeis[16].alternativa_C,"Discovery");
	strcpy(dificeis[16].alternativa_D,"Challenger");
	dificeis[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(dificeis[17].pergunta,"Qual foi a maior trag�dia ocorrida em um Metr�?");
	strcpy(dificeis[17].alternativa_A,"Baku, capital do Azerbaij�o (ex-Uni�o Sovi�tica) em consequ�ncia de um inc�ndio");
	strcpy(dificeis[17].alternativa_B,"Intoxica��o por fuma�a numa plataforma do metropolitain de Paris, em 1903");
	strcpy(dificeis[17].alternativa_C,"Colapso na obra da esta��o de Pinheiros, em S�o Paulo");
	strcpy(dificeis[17].alternativa_D,"Atentado ocorrido em Daegu, terceira maior cidade da Cor�ia do Sul");
	dificeis[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(dificeis[18].pergunta,"O Golfo de B�tnia, no norte da Europa, est� localizado entre dois pa�ses escandinavos. Quais s�o eles?");
	strcpy(dificeis[18].alternativa_A,"Finl�ndia e Su�cia");
	strcpy(dificeis[18].alternativa_B,"Noruega e Su�cia");
	strcpy(dificeis[18].alternativa_C,"Dinamarca e Isl�ndia");
	strcpy(dificeis[18].alternativa_D,"Finl�ndia e R�ssia");
	dificeis[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(dificeis[19].pergunta,"Politicamente falando, a Groenl�ndia �:");
	strcpy(dificeis[19].alternativa_A,"Pertencente � Dinamarca");
	strcpy(dificeis[19].alternativa_B,"Territ�rio da ONU");
	strcpy(dificeis[19].alternativa_C,"Pertencente � Isl�ndia");
	strcpy(dificeis[19].alternativa_D,"FUma Rep�blica Independente");
	dificeis[19].pontuacao = pontuacao;
	//...
	//Pergunta 20
	
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
	strcpy(muito_dificeis[0].pergunta,"Assinale a alternativa que n�o apresenta um tipo de citoesqueleto.");
	strcpy(muito_dificeis[0].alternativa_A,"Microvilosidades");
	strcpy(muito_dificeis[0].alternativa_B,"Microt�bulos");
	strcpy(muito_dificeis[0].alternativa_C,"Filamentos Intermedi�rio");
	strcpy(muito_dificeis[0].alternativa_D,"Nenhuma das alternativas");
	muito_dificeis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(muito_dificeis[1].pergunta,"Qual � o resultado do fen�tipo de uma flor branca cruzada com uma vermelha?");
	strcpy(muito_dificeis[1].alternativa_A,"100% Rosa");
	strcpy(muito_dificeis[1].alternativa_B,"50% Vermelha");
	strcpy(muito_dificeis[1].alternativa_C,"75% Branca");
	strcpy(muito_dificeis[1].alternativa_D,"25% Avermelhada");
	muito_dificeis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(muito_dificeis[2].pergunta,"Qual � o nome cient�fico do Zorrilho?");
	strcpy(muito_dificeis[2].alternativa_A,"Conepatus chinga");
	strcpy(muito_dificeis[2].alternativa_B,"Equus burchelli");
	strcpy(muito_dificeis[2].alternativa_C,"Cacicus cela");
	strcpy(muito_dificeis[2].alternativa_D,"Mazama americana");
	muito_dificeis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(muito_dificeis[3].pergunta,"Qual � o nome Cient�fico do Calango?");
	strcpy(muito_dificeis[3].alternativa_A,"Ameiva ameiva");
	strcpy(muito_dificeis[3].alternativa_B,"Ovis aries");
	strcpy(muito_dificeis[3].alternativa_C,"Crotalus durissus");
	strcpy(muito_dificeis[3].alternativa_D,"Cavia porcellus");
	muito_dificeis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(muito_dificeis[4].pergunta,"Em que s�culo o barroco passa a se expandir para os centros de produ��o a�ucareira na Bahia?");
	strcpy(muito_dificeis[4].alternativa_A,"XVII");
	strcpy(muito_dificeis[4].alternativa_B,"XVIII");
	strcpy(muito_dificeis[4].alternativa_C,"XX");
	strcpy(muito_dificeis[4].alternativa_D,"XV");
	muito_dificeis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(muito_dificeis[5].pergunta,"Marque a alternativa que cont�m um metal alcalino e dois elementos de transi��o externa:");
	strcpy(muito_dificeis[5].alternativa_A,"Rb-Rub�dio, Y, Pt");
	strcpy(muito_dificeis[5].alternativa_B,"K-Pot�ssio, Au, Br");
	strcpy(muito_dificeis[5].alternativa_C,"Po-Platina, Ds, Te");
	strcpy(muito_dificeis[5].alternativa_D,"B-Boro, Sb, Te");
	muito_dificeis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(muito_dificeis[6].pergunta,"Assinale a alternativa que apresente o nome de um elemento qu�mico cujo n�mero at�mico � 35:");
	strcpy(muito_dificeis[6].alternativa_A,"Bromo");
	strcpy(muito_dificeis[6].alternativa_B,"Cobre");
	strcpy(muito_dificeis[6].alternativa_C,"Zinco");
	strcpy(muito_dificeis[6].alternativa_D,"Sel�nio");
	muito_dificeis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(muito_dificeis[7].pergunta,"O n�mero at�mico do ouro �:");
	strcpy(muito_dificeis[7].alternativa_A,"79");
	strcpy(muito_dificeis[7].alternativa_B,"59");
	strcpy(muito_dificeis[7].alternativa_C,"49 ");
	strcpy(muito_dificeis[7].alternativa_D,"60");
	muito_dificeis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(muito_dificeis[8].pergunta,"Qual o nome do sal formado pela rea��o de neutraliza��o do �cido cl�rico pelo hidr�xido de alum�nio?");
	strcpy(muito_dificeis[8].alternativa_A,"Clorato de alum�nio");
	strcpy(muito_dificeis[8].alternativa_B,"Cloreto de alum�nio");
	strcpy(muito_dificeis[8].alternativa_C,"Cl�rico de alum�nio");
	strcpy(muito_dificeis[8].alternativa_D,"Clorito de alum�nio");
	muito_dificeis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(muito_dificeis[9].pergunta,"Quando o sulfito de s�dio reage com �cido clor�drico obt�m-se respectivamente:");
	strcpy(muito_dificeis[9].alternativa_A,"Sal de cozinha, �gua e di�xido de enxofre.");
	strcpy(muito_dificeis[9].alternativa_B,"Sal marinho, �gua e di�xido de enxofre.");
	strcpy(muito_dificeis[9].alternativa_C,"Sal marinho, �gua e di�xido de cloro.");
	strcpy(muito_dificeis[9].alternativa_D,"Sal de cozinha, �gua e di�xido de cloro.");
	muito_dificeis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(muito_dificeis[10].pergunta,"O sangue do diabo � um l�quido vermelho que logo se descora ao ser aspergido sobre um tecido branco. Para prepar�-lo, adiciona-se NH4OH em �gua, contendo algumas gotas de fenolftale�na. A cor desaparece porque:");
	strcpy(muito_dificeis[10].alternativa_A,"O NH3 logo evapora.");
	strcpy(muito_dificeis[10].alternativa_B,"A solu��o � assim denominada devida � sua alta viscosidade.");
	strcpy(muito_dificeis[10].alternativa_C,"A fenolftale�na reage rapidamente com o NH4OH.");
	strcpy(muito_dificeis[10].alternativa_D,"A fenolftale�na evapora.");
	muito_dificeis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(muito_dificeis[11].pergunta,"Qual o �nico exemplo que n�o � classificado como uma nuvem eletr�nica?");
	strcpy(muito_dificeis[11].alternativa_A,"Liga��o covalente tetra�trica");
	strcpy(muito_dificeis[11].alternativa_B,"Liga��o covalente dativa");
	strcpy(muito_dificeis[11].alternativa_C,"Liga��o covalente dupla");
	strcpy(muito_dificeis[11].alternativa_D,"Par de el�tron n�o ligante");
	muito_dificeis[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(muito_dificeis[12].pergunta,"Assinale a �nica alternativa que n�o cont�m o exemplo correto de geometria molecular em mol�culas polares.");
	strcpy(muito_dificeis[12].alternativa_A,"Trigonal plana");
	strcpy(muito_dificeis[12].alternativa_B,"Tetra�dica");
	strcpy(muito_dificeis[12].alternativa_C,"Angular");
	strcpy(muito_dificeis[12].alternativa_D,"Piramidal");
	muito_dificeis[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(muito_dificeis[13].pergunta,"O leite � uma(o) :");
	strcpy(muito_dificeis[13].alternativa_A,"Mistura heterog�nea");
	strcpy(muito_dificeis[13].alternativa_B,"�cido");
	strcpy(muito_dificeis[13].alternativa_C,"Mistura homog�nea");
	strcpy(muito_dificeis[13].alternativa_D,"Subst�ncia simples");
	muito_dificeis[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(muito_dificeis[14].pergunta,"Segundo a teoria at�mica de Dalton, � correto afirmar:");
	strcpy(muito_dificeis[14].alternativa_A,"A combina��o de �tomos de elementos diferentes, numa propor��o de n�meros inteiros, origina subst�ncias diferentes");
	strcpy(muito_dificeis[14].alternativa_B,"Os �tomos n�o s�o criads nem destru�dos; s�o simplesmente rearranjados, formando as mesmas subst�ncias");
	strcpy(muito_dificeis[14].alternativa_C,"Elementos qu�micos iguais apresentam �tomos com massa, tamanho e propriedades diferentes");
	strcpy(muito_dificeis[14].alternativa_D,"A mat�ria � constituida de part�culas esf�ricas maci�as e divis�veis chamado de elemento qu�mico");
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
