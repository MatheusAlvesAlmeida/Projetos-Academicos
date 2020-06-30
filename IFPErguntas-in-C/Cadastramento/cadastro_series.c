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
char nome_arquivo_faceis[30] = "series_faceis.txt";
char nome_arquivo_medias[30] = "series_medias.txt";
char nome_arquivo_dificeis[30] = "series_dificeis.txt";
char nome_arquivo_muito_dificeis[40] = "series_muito_dificeis.txt";
Pergunta faceis[25];
Pergunta medias[27];
Pergunta dificeis[23];
Pergunta muito_dificeis[15];

void cadastrar_faceis(){
	int pontuacao = 20;
	//Pergunta 1
	strcpy(faceis[0].pergunta,"(Sobrenatural) O que John fez para impedir que a ceifadora levasse Dean?");
	strcpy(faceis[0].alternativa_A,"Fez um pacto com Azazel, entregando sua alma e a Colt.");
	strcpy(faceis[0].alternativa_B,"Fez um pacto com ela.");
	strcpy(faceis[0].alternativa_C,"Fez um feiti�o pra manda-la embora.");
	strcpy(faceis[0].alternativa_D,"Resposta Fez um acordo com Azazel, para ficar sendo seu servo.");
	faceis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(faceis[1].pergunta,"(Sobrenatural) Quais s�o os principais personagens de Supernatural?");
	strcpy(faceis[1].alternativa_A,"Sam e Dean.");
	strcpy(faceis[1].alternativa_B,"Sam, Dean e Castiel.");
	strcpy(faceis[1].alternativa_C,"John, Sam e Dean.");
	strcpy(faceis[1].alternativa_D,"Sam e Castiel.");
	faceis[1].pontuacao = pontuacao;
	//pergunta 3
	strcpy(faceis[2].pergunta,"(Sobrenatural)  Quem ensinou Dean a usar os an�is dos Cavaleiros para derrotar L�cifer?");
	strcpy(faceis[2].alternativa_A,"Morte");
	strcpy(faceis[2].alternativa_B,"Ash");
	strcpy(faceis[2].alternativa_C,"Chuck");
	strcpy(faceis[2].alternativa_D,"Crowley");
	faceis[2].pontuacao = pontuacao;
	//pegunta 4
	strcpy(faceis[3].pergunta,"(Sobrenatural) Quem matou a m�e dos irm�os e a namorada de Sam?");
	strcpy(faceis[3].alternativa_A,"Azazel");
	strcpy(faceis[3].alternativa_B,"Lilith");
	strcpy(faceis[3].alternativa_C,"Alaistair");
	strcpy(faceis[3].alternativa_D,"L�cifer");
	faceis[3].pontuacao = pontuacao;
	//pergunta 5
	strcpy(faceis[4].pergunta,"(Sobrenatural) Depois que Dean faz um pacto pela alma de Sam, quantos anos ele ainda tinha de vida?");
	strcpy(faceis[4].alternativa_A,"1 ano");
	strcpy(faceis[4].alternativa_B,"10 anos");
	strcpy(faceis[4].alternativa_C,"11 anos");
	strcpy(faceis[4].alternativa_D,"5 anos");
	faceis[4].pontuacao = pontuacao;
	//pergunta 6
	strcpy(faceis[5].pergunta,"(The walking dead)  Quem salva Judith quando a pris�o foi atacada pelo governador?");
	strcpy(faceis[5].alternativa_A,"Carol");
	strcpy(faceis[5].alternativa_B,"Carl e Rick");
	strcpy(faceis[5].alternativa_C,"Daryl e Beth");
	strcpy(faceis[5].alternativa_D,"Glenn e Maggie");
	faceis[5].pontuacao = pontuacao;
	//pergunta 7
	strcpy(faceis[6].pergunta,"(The Walking Dead) Qual nome da samurai do time de Rick");
	strcpy(faceis[6].alternativa_A,"Michonne.");
	strcpy(faceis[6].alternativa_B,"Lori.");
	strcpy(faceis[6].alternativa_C,"Jessie. ");
	strcpy(faceis[6].alternativa_D,"Patricia");
	faceis[6].pontuacao = pontuacao;
	//pergunta 8
	strcpy(faceis[7].pergunta,"(The walking dead) Por qual meio Rick vai para Atlanta?");
	strcpy(faceis[7].alternativa_A,"Cavalo");
	strcpy(faceis[7].alternativa_B,"Carro");
	strcpy(faceis[7].alternativa_C,"Moto");
	strcpy(faceis[7].alternativa_D,"Bicicleta");
	faceis[7].pontuacao = pontuacao;
	//pergunta 9
	strcpy(faceis[8].pergunta,"(The Walking Dead) Qual o nome completo do xerife?");
	strcpy(faceis[8].alternativa_A,"Rick Grimes");
	strcpy(faceis[8].alternativa_B,"Rick Gomes");
	strcpy(faceis[8].alternativa_C,"Richard Gordon");
	strcpy(faceis[8].alternativa_D,"Richard Grant");
	faceis[8].pontuacao = pontuacao;
	//pegunta 10
	strcpy(faceis[9].pergunta,"(The walking dead) Qual � a emissora oficial que exibe os epis�dios de The Walking Dead no Brasil?");
	strcpy(faceis[9].alternativa_A,"Fox");
	strcpy(faceis[9].alternativa_B,"Discovery Channel");
	strcpy(faceis[9].alternativa_C,"FX");
	strcpy(faceis[9].alternativa_D,"Nat Geo");
	faceis[9].pontuacao = pontuacao;
	//pergunta 11
	strcpy(faceis[10].pergunta,"(Breaking bad) Qual palavra Jesse � viciado em falar?");
	strcpy(faceis[10].alternativa_A,"Bitch");
	strcpy(faceis[10].alternativa_B,"Hey");
	strcpy(faceis[10].alternativa_C,"Crazy");
	strcpy(faceis[10].alternativa_D,"Meth");
	faceis[10].pontuacao = pontuacao;
	//pergunta 12
	strcpy(faceis[11].pergunta,"(Breaking bad) Qual o nome da droga que eles produzem?");
	strcpy(faceis[11].alternativa_A,"Metanfetamina");
	strcpy(faceis[11].alternativa_B,"Maconha");
	strcpy(faceis[11].alternativa_C,"Coca�na");
	strcpy(faceis[11].alternativa_D,"Hero�na");
	faceis[11].pontuacao = pontuacao;
	//pergunta 13
	strcpy(faceis[12].pergunta,"(Breaking bad) Qual � o nome do homem da cadeira de rodas que explode matando Gus?");
	strcpy(faceis[12].alternativa_A,"Hector");
	strcpy(faceis[12].alternativa_B,"Jesse");
	strcpy(faceis[12].alternativa_C,"Walt");
	strcpy(faceis[12].alternativa_D,"Tuco");
	faceis[12].pontuacao = pontuacao;
	//pergunta 14
	strcpy(faceis[13].pergunta,"(Breaking bad) Como Walter era chamado pelos traficantes por fabricar a droga?");
	strcpy(faceis[13].alternativa_A,"Heisenberg");
	strcpy(faceis[13].alternativa_B,"Professor");
	strcpy(faceis[13].alternativa_C,"Metre");
	strcpy(faceis[13].alternativa_D,"Cozinheiro");
	faceis[13].pontuacao = pontuacao;
	// pegunta 15
	strcpy(faceis[14].pergunta,"(Breaking bad) Quando a esposa de Walter White mandou devolver o carro que ele havia comprado, o que realmente Walter fez com o carro?");
	strcpy(faceis[14].alternativa_A,"Explodiu");
	strcpy(faceis[14].alternativa_B,"Devolveu");
	strcpy(faceis[14].alternativa_C,"Escondeu");
	strcpy(faceis[14].alternativa_D,"Jogou de uma ponte");
	faceis[14].pontuacao = pontuacao;
	// pergunta 16
	strcpy(faceis[15].pergunta,"(The big bang theory) Quem e o dono da loja de quadrinhos ?");
	strcpy(faceis[15].alternativa_A,"Stuart");
	strcpy(faceis[15].alternativa_B,"Stan lee");
	strcpy(faceis[15].alternativa_C,"Penny");
	strcpy(faceis[15].alternativa_D,"Beverly");
	faceis[15].pontuacao = pontuacao;
	// pergunta 16
	strcpy(faceis[16].pergunta,"(The big bang theory) Leonard � intolerante a ");
	strcpy(faceis[16].alternativa_A,"Lactose");
	strcpy(faceis[16].alternativa_B,"Pizza");
	strcpy(faceis[16].alternativa_C,"Nada");
	strcpy(faceis[16].alternativa_D,"Carnes");
	faceis[16].pontuacao = pontuacao;
	
	//Pergunta 18
	strcpy(faceis[17].pergunta,"(The big bang theory) Raj n�o consegue falar com");
	strcpy(faceis[17].alternativa_A,"Mulheres");
	strcpy(faceis[17].alternativa_B,"Crian�as ");
	strcpy(faceis[17].alternativa_C,"Idosos");
	strcpy(faceis[17].alternativa_D,"Homens");
	faceis[17].pontuacao = pontuacao;

	//Pergunta 19
	strcpy(faceis[18].pergunta,"(The big bang theory)O que Sheldon faz quando bate na porta de algu�m?");
	strcpy(faceis[18].alternativa_A,"Bate e fala tr�s vezes o nome da pessoa");
	strcpy(faceis[18].alternativa_B,"Dan�a");
	strcpy(faceis[18].alternativa_C,"Pula tr�s vezes");
	strcpy(faceis[18].alternativa_D,"Canta");
	faceis[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(faceis[19].pergunta,"(The big bang theory) Com quem Howard e casado? ");
	strcpy(faceis[19].alternativa_A,"Bernadette");
	strcpy(faceis[19].alternativa_B,"Penny");
	strcpy(faceis[19].alternativa_C,"Amy");
	strcpy(faceis[19].alternativa_D,"Leslie Winkle");
	faceis[19].pontuacao = pontuacao;
	//Pergunta 21
	strcpy(faceis[20].pergunta,"(Game of thones) Qual o nome do filho bastardo do rei Robert, que se torna amigo de Arya Stark?");
	strcpy(faceis[20].alternativa_A,"Greyjoy");
	strcpy(faceis[20].alternativa_B,"Jaime");
	strcpy(faceis[20].alternativa_C,"Robb");
	strcpy(faceis[20].alternativa_D,"Tyrion");
	faceis[20].pontuacao = pontuacao;
	//Pergunta 22
	strcpy(faceis[21].pergunta,"(Game of thones) Quem empurrou Bran Stark da torre?");
	strcpy(faceis[21].alternativa_A,"Jaime Lannister");
	strcpy(faceis[21].alternativa_B,"Tyrion Lannister");
	strcpy(faceis[21].alternativa_C,"Cersei Lannister");
	strcpy(faceis[21].alternativa_D,"Ningu�m, ele caiu");
	faceis[21].pontuacao = pontuacao;
	//Pergunta 23
	strcpy(faceis[22].pergunta,"(Game of thones) Qual o lema da casa Stark?");
	strcpy(faceis[22].alternativa_A,"O inverno est� chegando*");
	strcpy(faceis[22].alternativa_B,"Ou�a-me rugir");
	strcpy(faceis[22].alternativa_C,"Nossa � a furia");
	strcpy(faceis[22].alternativa_D,"N�s n�o semeamos");
	faceis[22].pontuacao = pontuacao;
	//Pergunta 24
	strcpy(faceis[23].pergunta,"(Game of thones) foi respons�vel pela morte de Robert Baratheon?");
	strcpy(faceis[23].alternativa_A,"Cersei Lannister*");
	strcpy(faceis[23].alternativa_B,"Tyrion Lannister");
	strcpy(faceis[23].alternativa_C,"Eddard Stark");
	strcpy(faceis[23].alternativa_D,"Jaime Lannister");
	faceis[23].pontuacao = pontuacao;
	//Pergunta 25
	strcpy(faceis[24].pergunta,"(Game of thones) Ap�s a morte de Robert, quem entrega os planos de Ned Stark, que era mandar suas filhas para Winterfell e ter Joffrey como protegido, para Cersei?");
	strcpy(faceis[24].alternativa_A,"Sansa Stark*");
	strcpy(faceis[24].alternativa_B,"Jaime Lannister");
	strcpy(faceis[24].alternativa_C,"Renly Baratheon");
	strcpy(faceis[24].alternativa_D,"Petyr Baelish");
	faceis[24].pontuacao = pontuacao;

	
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
	strcpy(medias[0].pergunta,"(The big bang theory)3 Por que Leonard e Penny terminam o namoro?");
	strcpy(medias[0].alternativa_A,"Porque ele disse �Eu te amo� muito cedo");
	strcpy(medias[0].alternativa_B,"Porque ela o traiu");
	strcpy(medias[0].alternativa_C,"Porque Penny voltou para Nebraska");
	strcpy(medias[0].alternativa_D,"Porque Leonard foi morar na �frica");
	medias[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(medias[1].pergunta,"(The big bang theory)Com quem Sheldon deu seu primeiro beijo?");
	strcpy(medias[1].alternativa_A,"Amy");
	strcpy(medias[1].alternativa_B,"Beverly");
	strcpy(medias[1].alternativa_C," Penny");
	strcpy(medias[1].alternativa_D,"Missy");
	medias[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(medias[2].pergunta,"(The big bang theory) Quem j� foi para o espa�o?");
	strcpy(medias[2].alternativa_A,"Howard");
	strcpy(medias[2].alternativa_B,"Sheldon");
	strcpy(medias[2].alternativa_C,"Stuart");
	strcpy(medias[2].alternativa_D,"Leonard");
	medias[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(medias[3].pergunta,"(The big bang theory) De qual estado Penny �?");
	strcpy(medias[3].alternativa_A,"Nebraska");
	strcpy(medias[3].alternativa_B,"Florida");
	strcpy(medias[3].alternativa_C,"California");
	strcpy(medias[3].alternativa_D,"Oregon");
	medias[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(medias[4].pergunta,"(The big bang theory) Quem tem um problema a de fala na serie ");
	strcpy(medias[4].alternativa_A,"Beverly");
	strcpy(medias[4].alternativa_B,"Penny");
	strcpy(medias[4].alternativa_C,"Zack");
	strcpy(medias[4].alternativa_D,"Raj");
	medias[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(medias[5].pergunta,"(The big bang theory) Qual a profiss�o de Amy na s�rie The Big Bang Theory");
	strcpy(medias[5].alternativa_A,"Microbi�loga");
	strcpy(medias[5].alternativa_B,"Psiqui�tra");
	strcpy(medias[5].alternativa_C,"Astrof�sica");
	strcpy(medias[5].alternativa_D,"Engenheira");
	medias[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(medias[6].pergunta,"(The big bang theory)1 Atualmente (julho de 2015), h� quantas temporadas de The Big Bang Theory?");
	strcpy(medias[6].alternativa_A,"8");
	strcpy(medias[6].alternativa_B,"3");
	strcpy(medias[6].alternativa_C,"11");
	strcpy(medias[6].alternativa_D,"5");
	medias[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(medias[7].pergunta,"(Breaking bad) Qual � o nome da esposa de Hank?");
	strcpy(medias[7].alternativa_A,"Marie");
	strcpy(medias[7].alternativa_B,"Skyler");
	strcpy(medias[7].alternativa_C,"Christ");
	strcpy(medias[7].alternativa_D,"Holly");
	medias[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(medias[8].pergunta,"(Breaking bad) Quem era respons�vel pela seguran�a corporativa de Gustavo Fring?");
	strcpy(medias[8].alternativa_A,"Mike Ehrmantraut");
	strcpy(medias[8].alternativa_B,"Hank Schrader");
	strcpy(medias[8].alternativa_C,"Bogdan Wolynetz");
	strcpy(medias[8].alternativa_D,"Ted Beneke");
	medias[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(medias[9].pergunta,"(Breaking bad) Onde Gustavo Fring morreu?");
	strcpy(medias[9].alternativa_A,"Retiro de Idosos");
	strcpy(medias[9].alternativa_B,"Hospital");
	strcpy(medias[9].alternativa_C,"Laborat�rio de Metafentamina");
	strcpy(medias[9].alternativa_D,"Deserto");
	medias[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(medias[10].pergunta,"(Breaking bad) Qual � a emissora original da s�rie Breaking Bad?");
	strcpy(medias[10].alternativa_A,"AMC");
	strcpy(medias[10].alternativa_B,"CNN");
	strcpy(medias[10].alternativa_C,"FOX");
	strcpy(medias[10].alternativa_D,"TNT");
	medias[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(medias[11].pergunta,"(Breaking bad) Gustavo Fring era dono de qual lanchonete?");
	strcpy(medias[11].alternativa_A,"Los pollos Hermanos");
	strcpy(medias[11].alternativa_B,"Mexicos bacons");
	strcpy(medias[11].alternativa_C,"Mc donald's");
	strcpy(medias[11].alternativa_D,"Ele n�o tinha uma lanchonete");
	medias[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(medias[12].pergunta,"(Game of thones) Quem s�o os irm�os do rei Joffrey");
	strcpy(medias[12].alternativa_A,"Tommen e Myrcella ");
	strcpy(medias[12].alternativa_B,"Hodor e rickon");
	strcpy(medias[12].alternativa_C,"tyrion e Myrcella");
	strcpy(medias[12].alternativa_D,"Tywin e tommen");
	medias[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(medias[13].pergunta,"(Game of thones) Qual o lema dos Targaryen?");
	strcpy(medias[13].alternativa_A,"Fogo e sangue.");
	strcpy(medias[13].alternativa_B,"O inverno est� chegando");
	strcpy(medias[13].alternativa_C,"Crescendo fortes");
	strcpy(medias[13].alternativa_D,"O nosso � a f�ria.");
	medias[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(medias[14].pergunta,"(Game of thones) Qual personagem foi amante de Renly Baratheon? ");
	strcpy(medias[14].alternativa_A,"Loras Tyrell");
	strcpy(medias[14].alternativa_B,"Lysa Arryn");
	strcpy(medias[14].alternativa_C,"Brienne de tarth");
	strcpy(medias[14].alternativa_D,"Cersei Lannister");
	medias[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(medias[15].pergunta,"(Game of thones) Quem deu tr�s ovos de drag�o a Daenerys Targaryen? ");
	strcpy(medias[15].alternativa_A,"Magister Illyrio");
	strcpy(medias[15].alternativa_B,"Rhaegar Targaryen");
	strcpy(medias[15].alternativa_C,"Jorah Mormont");
	strcpy(medias[15].alternativa_D,"Khal Drogo");
	medias[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(medias[16].pergunta,"(Game of thones) Qual o nome da filha de Stannis Baratheon");
	strcpy(medias[16].alternativa_A,"Shireen");
	strcpy(medias[16].alternativa_B,"Arya");
	strcpy(medias[16].alternativa_C,"Sansa");
	strcpy(medias[16].alternativa_D,"Catelyn");
	medias[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(medias[17].pergunta,"(Sobrenatural) Onde e por quem foi quebrado o primeiro selo");
	strcpy(medias[17].alternativa_A,"Inferno, Dean");
	strcpy(medias[17].alternativa_B,"Cemit�rio, Sam");
	strcpy(medias[17].alternativa_C,"Inferno, Sam");
	strcpy(medias[17].alternativa_D,"Cemit�rio, Dean");
	medias[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(medias[18].pergunta,"(Sobrenatural) Na segunda temporada, Dean fica em coma devido aos ferimentos de um acidente. Qual o nome da ceifadora que foi ao hospital busca-lo?");
	strcpy(medias[18].alternativa_A,"Tessa");
	strcpy(medias[18].alternativa_B,"Ruby");
	strcpy(medias[18].alternativa_C,"Crowley");
	strcpy(medias[18].alternativa_D,"Meg");
	medias[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(medias[19].pergunta,"(Sobrenatural) Qual anjo voltou ao passado e fez com que o Titanic n�o afundasse?");
	strcpy(medias[19].alternativa_A,"Castiel");
	strcpy(medias[19].alternativa_B,"Uriel");
	strcpy(medias[19].alternativa_C,"Zacharias");
	strcpy(medias[19].alternativa_D,"Balthazar");
	medias[19].pontuacao = pontuacao;
	//Pergunta 21
	strcpy(medias[20].pergunta,"(Sobrenatural) Quem matou J�ssica?");
	strcpy(medias[20].alternativa_A,"Braddy");
	strcpy(medias[20].alternativa_B,"Lilith");
	strcpy(medias[20].alternativa_C,"Azazel");
	strcpy(medias[20].alternativa_D,"Duane");
	medias[20].pontuacao = pontuacao;
	//Pergunta 22
	strcpy(medias[21].pergunta,"(Sobrenatural) Qual ca�ador ajudou Sam e Dean a enfrentar um Rugarou?");
	strcpy(medias[21].alternativa_A,"Travis");
	strcpy(medias[21].alternativa_B,"Samuel");
	strcpy(medias[21].alternativa_C,"John");
	strcpy(medias[21].alternativa_D,"Bobby");
	medias[21].pontuacao = pontuacao;
	//Pergunta 23
	strcpy(medias[22].pergunta,"(The walking dead) Porque Carl quis colocar o nome da irm� de Judith?");
	strcpy(medias[22].alternativa_A,"Porque era o nome de uma professora que ele gostava muito");
	strcpy(medias[22].alternativa_B,"Porque ele gostava de uma menina que tinha esse nome.");
	strcpy(medias[22].alternativa_C,"Porque era o nome de sua av�.");
	strcpy(medias[22].alternativa_D,"Porque a m�e dele disse antes de morrer que se o beb� fosse menina era para colocar o nome de Judith.");
	medias[22].pontuacao = pontuacao;
	//Pergunta 24
	strcpy(medias[23].pergunta,"(The walking dead) Na terceira temporada, Merle � morto. De que forma ele foi morto?");
	strcpy(medias[23].alternativa_A,"O governador matou ele com um tiro e ap�s virar zumbi seu irm�o Daryl o matou.");
	strcpy(medias[23].alternativa_B,"Rick matou ele porque ele estava traindo o grupo.");
	strcpy(medias[23].alternativa_C,"Ele foi atacado por um zumbi enquanto dormia.");
	strcpy(medias[23].alternativa_D,"Ele se matou.");
	medias[23].pontuacao = pontuacao;
	//Pergunta 25
	strcpy(medias[24].pergunta,"(The walking dead) Na segunda temporada de The Walking Dead, quem atira em Carl?");
	strcpy(medias[24].alternativa_A,"Otis ");
	strcpy(medias[24].alternativa_B,"Hershel ");
	strcpy(medias[24].alternativa_C,"Maggie ");
	strcpy(medias[24].alternativa_D,"Shane ");
	medias[24].pontuacao = pontuacao;
	//Pergunta 26
	strcpy(medias[25].pergunta,"(The walking dead) Que tipo de zumbi foi o primeiro a ser morto na s�rie?");
	strcpy(medias[25].alternativa_A,"Crian�a");
	strcpy(medias[25].alternativa_B,"Adolescente");
	strcpy(medias[25].alternativa_C,"Idoso");
	strcpy(medias[25].alternativa_D,"Adulto");
	medias[25].pontuacao = pontuacao;
	//Pergunta 27
	strcpy(medias[26].pergunta,"(The walking dead) Como Amy, irm� de Andrea, morre?");
	strcpy(medias[26].alternativa_A,"Porque ele foi racista e brigou com T-Dog ");
	strcpy(medias[26].alternativa_B,"Ele n�o foi algemado no cano. ");
	strcpy(medias[26].alternativa_C,"Porque ele brigou com Lori. ");
	strcpy(medias[26].alternativa_D,"Porque ele quis. ");
	medias[26].pontuacao = pontuacao;

	
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
	strcpy(dificeis[0].pergunta,"(Game of thones) Em troca de qu�, Viserys Targaryen d� sua irm� como esposa, Daenerys Targaryen, a Kall Drogo?");
	strcpy(dificeis[0].alternativa_A,"Exercito");
	strcpy(dificeis[0].alternativa_B,"Navios ");
	strcpy(dificeis[0].alternativa_C,"Liberdade ");
	strcpy(dificeis[0].alternativa_D,"Ouro ");
	dificeis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(dificeis[1].pergunta,"(Game of thones) Qual org�o do corpo Lorde Varys n�o possui?");
	strcpy(dificeis[1].alternativa_A,"Test�culos ");
	strcpy(dificeis[1].alternativa_B,"Pele do rosto ");
	strcpy(dificeis[1].alternativa_C,"M�o");
	strcpy(dificeis[1].alternativa_D,"Olhos");
	dificeis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(dificeis[2].pergunta,"(Game of thones) Qual desses casais teve uma rela��o gay?");
	strcpy(dificeis[2].alternativa_A,"Renly Baratheon e Loras Tyrell");
	strcpy(dificeis[2].alternativa_B,"Robb Stark e Jon Snow");
	strcpy(dificeis[2].alternativa_C,"Sam Tarly e Jon Snow");
	strcpy(dificeis[2].alternativa_D,"Jon Snow e Theon Greyjoy");
	dificeis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(dificeis[3].pergunta,"(Game of thones) Quem possui drag�es?");
	strcpy(dificeis[3].alternativa_A,"Daenerys Targaryen, a Khaleesi");
	strcpy(dificeis[3].alternativa_B,"Tyron Lannister");
	strcpy(dificeis[3].alternativa_C,"Ned Stark");
	strcpy(dificeis[3].alternativa_D,"Joffrey Baratheon");
	dificeis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(dificeis[4].pergunta,"(Game of thones) Qual dessas fam�lias n�o � um dos Sete Reinos?");
	strcpy(dificeis[4].alternativa_A,"Snow");
	strcpy(dificeis[4].alternativa_B,"Tully");
	strcpy(dificeis[4].alternativa_C,"Targaryen");
	strcpy(dificeis[4].alternativa_D,"Greyjoy");
	dificeis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(dificeis[5].pergunta,"(The big bang theory) Em uma festa de final de ano, na liga da justi�a deles, quem era o SuperMan?");
	strcpy(dificeis[5].alternativa_A,"Zack");
	strcpy(dificeis[5].alternativa_B,"Stan lee");
	strcpy(dificeis[5].alternativa_C,"Penny");
	strcpy(dificeis[5].alternativa_D,"Howard");
	dificeis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(dificeis[6].pergunta,"(The big bang theory) Quem era vizinho de Sheldon e Leonard antes de Penny?");
	strcpy(dificeis[6].alternativa_A,"Um travesti");
	strcpy(dificeis[6].alternativa_B,"Um policial");
	strcpy(dificeis[6].alternativa_C,"Uma idosa");
	strcpy(dificeis[6].alternativa_D,"Raj");
	dificeis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(dificeis[7].pergunta,"(The big bang theory) Na segunda temporada, Leslie Winkle tem um relacionamento com quem al�m de Leonard?");
	strcpy(dificeis[7].alternativa_A,"Howard");
	strcpy(dificeis[7].alternativa_B,"Sheldon");
	strcpy(dificeis[7].alternativa_C,"Stuart");
	strcpy(dificeis[7].alternativa_D,"Leonard");
	dificeis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(dificeis[8].pergunta,"(The big bang theory) Por qual motivo Leonard n�o gosta de sua m�e?");
	strcpy(dificeis[8].alternativa_A,"Porque ela � estranhamente fria e incapaz de expressar sentimentos* por seus filhos");
	strcpy(dificeis[8].alternativa_B,"Por ela ter colocado seu nome de Leonard");
	strcpy(dificeis[8].alternativa_C,"Porque ela traia seu pai");
	strcpy(dificeis[8].alternativa_D,"Porque ela o menospreza");
	dificeis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(dificeis[9].pergunta,"(The big bang theory) Qual o nome da irm� g�mea de Sheldon?");
	strcpy(dificeis[9].alternativa_A,"Missy");
	strcpy(dificeis[9].alternativa_B,"Amy");
	strcpy(dificeis[9].alternativa_C,"Stephanie");
	strcpy(dificeis[9].alternativa_D,"Lisa");
	dificeis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(dificeis[10].pergunta,"(The big bang theory) Quando Penny descobre e casada com Zack em que temporada?");
	strcpy(dificeis[10].alternativa_A,"7");
	strcpy(dificeis[10].alternativa_B,"8");
	strcpy(dificeis[10].alternativa_C,"3");
	strcpy(dificeis[10].alternativa_D,"5");
	dificeis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(dificeis[11].pergunta,"(Breaking bad) Qual a frase que o atendente de caixa falava quando os clientes iam pagar sua lavajem?");
	strcpy(dificeis[11].alternativa_A,"");
	strcpy(dificeis[11].alternativa_B,"");
	strcpy(dificeis[11].alternativa_C,"");
	strcpy(dificeis[11].alternativa_D,"");
	dificeis[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(dificeis[12].pergunta,"(Breaking bad) Qual o nome do qu�mico contratado por Gustavo Fring para auxiliar Walter White?");
	strcpy(dificeis[12].alternativa_A,"Gale Boetticher");
	strcpy(dificeis[12].alternativa_B,"Steven Gomez");
	strcpy(dificeis[12].alternativa_C,"Jesse Pinkman");
	strcpy(dificeis[12].alternativa_D,"Hank Schrader");
	dificeis[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(dificeis[13].pergunta,"(Breaking bad) Walter Jr gostava de ser chamado por outro nome. Qual?");
	strcpy(dificeis[13].alternativa_A,"Flynn");
	strcpy(dificeis[13].alternativa_B,"Mike");
	strcpy(dificeis[13].alternativa_C,"Tony stark");
	strcpy(dificeis[13].alternativa_D,"Hank Jr");
	dificeis[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(dificeis[14].pergunta,"(Breaking bad) Quem morreu de uma overdose causada por hero�na?");
	strcpy(dificeis[14].alternativa_A,"Jane Margolis");
	strcpy(dificeis[14].alternativa_B,"Brandon Mayhew (Badger)");
	strcpy(dificeis[14].alternativa_C,"Gale Boetticher");
	strcpy(dificeis[14].alternativa_D,"Ted Beneke");
	dificeis[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(dificeis[15].pergunta,"(Breaking bad) Qual empreendimento Saul quer que Walter compre para lavar dinheiro?");
	strcpy(dificeis[15].alternativa_A,"Laser Tech (Uma casa de tiroteio virtual)");
	strcpy(dificeis[15].alternativa_B,"Uma quitanda");
	strcpy(dificeis[15].alternativa_C,"Uma loja de carros");
	strcpy(dificeis[15].alternativa_D,"Um Petshop");
	dificeis[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(dificeis[16].pergunta,"(Sobrenatural) Qual o motivo da briga entre Dean e Sam no epis�dio 14 da 4� temporada?");
	strcpy(dificeis[16].alternativa_A,"Eles est�o enfeiti�ados por sereias");
	strcpy(dificeis[16].alternativa_B,"Sam est� possu�do");
	strcpy(dificeis[16].alternativa_C,"Sam escondeu coisas de Dean");
	strcpy(dificeis[16].alternativa_D,"Faz um acordo para que ela o levasse no lugar de Dean.");
	dificeis[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(dificeis[17].pergunta,"(Sobrenatural) Quem matou Mark Campbell?");
	strcpy(dificeis[17].alternativa_A,"Alfa Metamorfo*");
	strcpy(dificeis[17].alternativa_B,"Alfa Vampiro");
	strcpy(dificeis[17].alternativa_C,"Samuel");
	strcpy(dificeis[17].alternativa_D,"Dean");
	dificeis[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(dificeis[18].pergunta,"(Sobrenatural) Qual o primeiro dem�nio a existir, e que luta pela liberta��o de L�cifer?");
	strcpy(dificeis[18].alternativa_A,"Lilith");
	strcpy(dificeis[18].alternativa_B,"Rubi");
	strcpy(dificeis[18].alternativa_C,"Castiel");
	strcpy(dificeis[18].alternativa_D,"Dem�nio de Olhos Amarelos");
	dificeis[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(dificeis[19].pergunta,"(Sobrenatural) De quem Sam � o recept�culo?");
	strcpy(dificeis[19].alternativa_A,"L�cifer");
	strcpy(dificeis[19].alternativa_B,"Arcanjo Gabriel");
	strcpy(dificeis[19].alternativa_C,"Deus");
	strcpy(dificeis[19].alternativa_D,"Arcanjo Miguel");
	dificeis[19].pontuacao = pontuacao;
	//Pergunta 21
	strcpy(dificeis[20].pergunta,"(Sobrenatural) Em qual temporada Dean quase morre?");
	strcpy(dificeis[20].alternativa_A,"Segunda temporada");
	strcpy(dificeis[20].alternativa_B,"Quarta temporada");
	strcpy(dificeis[20].alternativa_C,"Primeira temporada");
	strcpy(dificeis[20].alternativa_D,"Quinta temporada");
	dificeis[20].pontuacao = pontuacao;
	//Pergunta 22
	strcpy(dificeis[21].pergunta,"(The walking dead) Quem foi o primeiro a achar uma pista de Sophia e qual foi essa pista? ");
	strcpy(dificeis[21].alternativa_A,"Daryl, uma boneca.");
	strcpy(dificeis[21].alternativa_B,"Daryl, uma jaqueta.");
	strcpy(dificeis[21].alternativa_C,"Rick, uma tiara.");
	strcpy(dificeis[21].alternativa_D,"Rick, um t�nis.");
	dificeis[21].pontuacao = pontuacao;
	//Pergunta 23
	strcpy(dificeis[22].pergunta,"(The walking dead) T-Dog morre tentando salvar quem ? ");
	strcpy(dificeis[22].alternativa_A,"Carol");
	strcpy(dificeis[22].alternativa_B,"Maggie");
	strcpy(dificeis[22].alternativa_C,"Michonne");
	strcpy(dificeis[22].alternativa_D,"Andrea");
	dificeis[22].pontuacao = pontuacao;
	
	
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
	strcpy(muito_dificeis[0].pergunta,"(The walking dead)Na segunda temporada, Carl � baliado na floresta quando estava observando um animal. Que animal � esse?");
	strcpy(muito_dificeis[0].alternativa_A,"Um veado");
	strcpy(muito_dificeis[0].alternativa_B,"Um esquilo");
	strcpy(muito_dificeis[0].alternativa_C,"Uma serpente");
	strcpy(muito_dificeis[0].alternativa_D,"Uma raposa");
	muito_dificeis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(muito_dificeis[1].pergunta,"(The walking dead)No epis�dio que mostra como foi a sobreviv�ncia do governador, tr�s novas personagens (duas mulheres e uma crian�a) s�o apresentadas. Quem s�o elas?");
	strcpy(muito_dificeis[1].alternativa_A,"Megan, Tara e Lilly");
	strcpy(muito_dificeis[1].alternativa_B,"Sophia, Lilly e Megan");
	strcpy(muito_dificeis[1].alternativa_C,"Tara, Megan e Maggie");
	strcpy(muito_dificeis[1].alternativa_D,"Lilly, Sophia e Megan");
	muito_dificeis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(muito_dificeis[2].pergunta,"(The walking dead)Qual o nome do 8� epis�dio da 4� Temporada de The Walking Dead?");
	strcpy(muito_dificeis[2].alternativa_A,"Too Far Gone");
	strcpy(muito_dificeis[2].alternativa_B,"Infected");
	strcpy(muito_dificeis[2].alternativa_C,"Dead Weight");
	strcpy(muito_dificeis[2].alternativa_D,"Live Bait");
	muito_dificeis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(muito_dificeis[3].pergunta,"(The walking dead)Qual o nome do amigo do governador (era ajudante do governador em WoodBury), ");
	strcpy(muito_dificeis[3].alternativa_A,"Martinez");
	strcpy(muito_dificeis[3].alternativa_B,"Merle Dixon");
	strcpy(muito_dificeis[3].alternativa_C,"Hershell");
	strcpy(muito_dificeis[3].alternativa_D,"Milton");
	muito_dificeis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(muito_dificeis[4].pergunta,"(The walking dead)Quem mata o governador com um tiro?");
	strcpy(muito_dificeis[4].alternativa_A,"Lilly");
	strcpy(muito_dificeis[4].alternativa_B,"Michonne");
	strcpy(muito_dificeis[4].alternativa_C,"Tara");
	strcpy(muito_dificeis[4].alternativa_D,"Daryl");
	muito_dificeis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(muito_dificeis[5].pergunta,"(The walking dead)Como a m�e de Daryl morreu?v");
	strcpy(muito_dificeis[5].alternativa_A,"Queimada");
	strcpy(muito_dificeis[5].alternativa_B,"Esfaqueada");
	strcpy(muito_dificeis[5].alternativa_C,"Baleada");
	strcpy(muito_dificeis[5].alternativa_D,"Se transformou em um zumbi");
	muito_dificeis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(muito_dificeis[6].pergunta,"(The walking dead)Em Wodburry Michonne descobre zumbis presos em uma (cela). Quantos zumbis eram?");
	strcpy(muito_dificeis[6].alternativa_A,"6");
	strcpy(muito_dificeis[6].alternativa_B,"8");
	strcpy(muito_dificeis[6].alternativa_C,"10");
	strcpy(muito_dificeis[6].alternativa_D,"7");
	muito_dificeis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(muito_dificeis[7].pergunta,"(The walking dead)Qual o nome da filha do governador?");
	strcpy(muito_dificeis[7].alternativa_A,"Penny Blake");
	strcpy(muito_dificeis[7].alternativa_B,"Sophia");
	strcpy(muito_dificeis[7].alternativa_C,"Megan");
	strcpy(muito_dificeis[7].alternativa_D,"Lilly");
	muito_dificeis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(muito_dificeis[8].pergunta,"(Game of thones)Talisa nasceu em qual cidade?");
	strcpy(muito_dificeis[8].alternativa_A,"Volantis");
	strcpy(muito_dificeis[8].alternativa_B,"Meeren");
	strcpy(muito_dificeis[8].alternativa_C,"Porto Real");
	strcpy(muito_dificeis[8].alternativa_D,"Braavos");
	muito_dificeis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(muito_dificeis[9].pergunta,"(Game of thones)Gendry � um bastardo da baixada das pulgas. Qual � o nome de seu pai?");
	strcpy(muito_dificeis[9].alternativa_A,"Robert Baratheon");
	strcpy(muito_dificeis[9].alternativa_B,"Mace Tyrell");
	strcpy(muito_dificeis[9].alternativa_C,"Eddard Stark");
	strcpy(muito_dificeis[9].alternativa_D,"Stannis Baratheon");
	muito_dificeis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(muito_dificeis[10].pergunta,"(The big bang theory)Qual dos jogos a seguir nunca apareceu na s�rie?");
	strcpy(muito_dificeis[10].alternativa_A,"BattleField");
	strcpy(muito_dificeis[10].alternativa_B,"Wii Sports");
	strcpy(muito_dificeis[10].alternativa_C,"Halo");
	strcpy(muito_dificeis[10].alternativa_D,"Age Of Conan");
	muito_dificeis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(muito_dificeis[11].pergunta,"(The big bang theory)Por que Leonard n�o gosta do seu nome?");
	strcpy(muito_dificeis[11].alternativa_A,"Por que � o que ele denomina a conjun��o de (leonerd) e faz com que ele fique mais nerd ainda");
	strcpy(muito_dificeis[11].alternativa_B,"Por que o faz se sentir deprimido");
	strcpy(muito_dificeis[11].alternativa_C,"Por que ele � zuado por seus amigos");
	strcpy(muito_dificeis[11].alternativa_D,"Por que o faz lembrar de um inimigo na infancia");
	muito_dificeis[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(muito_dificeis[12].pergunta,"(Breaking bad)Quem diz esta frase �voc� � o homem mais inteligente que eu conheci e o mais burro para n�o saber que ele se decidiu a 10 minutos�?");
	strcpy(muito_dificeis[12].alternativa_A,"Hank");
	strcpy(muito_dificeis[12].alternativa_B,"Gus");
	strcpy(muito_dificeis[12].alternativa_C,"Jesse Pinkman");
	strcpy(muito_dificeis[12].alternativa_D,"Walter White");
	muito_dificeis[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(muito_dificeis[13].pergunta,"(Sobrenatural)Depois de quantos minutos de voo o Fantasma Viajante faz o avi�o cair?");
	strcpy(muito_dificeis[13].alternativa_A,"40");
	strcpy(muito_dificeis[13].alternativa_B,"80");
	strcpy(muito_dificeis[13].alternativa_C,"30");
	strcpy(muito_dificeis[13].alternativa_D,"10");
	muito_dificeis[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(muito_dificeis[14].pergunta,"(Sobrenatural)Qual a frase que Dean fala e marca toda s�rie?");
	strcpy(muito_dificeis[14].alternativa_A,"Saving people, hunting things, family business");
	strcpy(muito_dificeis[14].alternativa_B,"Hunting things, saving people, family business");
	strcpy(muito_dificeis[14].alternativa_C,"Saving things, hunting people, friends business");
	strcpy(muito_dificeis[14].alternativa_D,"Hunting things, saving people");
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
