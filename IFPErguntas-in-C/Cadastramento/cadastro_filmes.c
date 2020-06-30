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
char nome_arquivo_faceis[60] = "filmes_faceis.txt";
char nome_arquivo_medias[60] = "filmes_medias.txt";
char nome_arquivo_dificeis[60] = "filmes_dificeis.txt";
char nome_arquivo_muito_dificeis[40] = "filmes_muito_dificeis.txt";
Pergunta faceis[60];
Pergunta medias[60];
Pergunta dificeis[60];
Pergunta muito_dificeis[15];

void cadastrar_faceis(){
	int pontuacao = 20;
	//Pergunta 1
	strcpy(faceis[0].pergunta,"Quem encontra os ovos dos filhotes da mam�e dinossauro?");
	strcpy(faceis[0].alternativa_A,"Sid");
	strcpy(faceis[0].alternativa_B,"Manny");
	strcpy(faceis[0].alternativa_C,"Diego");
	strcpy(faceis[0].alternativa_D,"Crash");
	faceis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(faceis[1].pergunta,"Que objeto Willy Wonka usa para percorrer os lugares mais r�pido, no filme A Fant�stica F�brica de Chocolate?");
	strcpy(faceis[1].alternativa_A,"Um elevador de vidro");
	strcpy(faceis[1].alternativa_B,"Um rob� gigante");
	strcpy(faceis[1].alternativa_C,"Um teletransporte");
	strcpy(faceis[1].alternativa_D,"Uma pequena nave");
	faceis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(faceis[2].pergunta,"O que fez Daniel querer instalar c�meras de seguran�a pela casa, no filme Atividade Paranormal 2?");
	strcpy(faceis[2].alternativa_A,"Porque quando a fam�lia voltou pra casa, todos os m�veis estavam revirados");
	strcpy(faceis[2].alternativa_B,"Ele estava preocupado com a seguran�a de sua fam�lia");
	strcpy(faceis[2].alternativa_C,"Para acompanhar os passos de seu filho");
	strcpy(faceis[2].alternativa_D,"Para vigiar Ali");
	faceis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(faceis[3].pergunta,"Qual o nome do amiguinho imagin�rio de Kristi(Atividade Paranormal 3)?");
	strcpy(faceis[3].alternativa_A,"Toby");
	strcpy(faceis[3].alternativa_B,"Matheus");
	strcpy(faceis[3].alternativa_C,"Tony");
	strcpy(faceis[3].alternativa_D,"Daniel");
	faceis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(faceis[4].pergunta,"Qual era a profiss�o de Jake antes ficar parapl�gico e entrar para o programa Avatar?");
	strcpy(faceis[4].alternativa_A,"Fuzileiro Naval");
	strcpy(faceis[4].alternativa_B,"M�dico");
	strcpy(faceis[4].alternativa_C,"Professor");
	strcpy(faceis[4].alternativa_D,"Cientista");
	faceis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(faceis[5].pergunta,"Todo jovem Na'vi deve passar por um rito de passagem chamado Iknamaya, onde deve selecionar, capturar e se concectar com um Ikran (Banshee). Para isso, � preciso que esse jovem Na'Vi v� at� onde os banshees vivem. Onde � esse lugar(Avatar)?");
	strcpy(faceis[5].alternativa_A,"Nas Montanhas Aleluia");
	strcpy(faceis[5].alternativa_B,"Na �rvore das Vozes");
	strcpy(faceis[5].alternativa_C,"Nas Montanhas Na'Vi");
	strcpy(faceis[5].alternativa_D,"Na floresta");
	faceis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(faceis[6].pergunta,"� correto dizer que, no final do filme(Batman: O Cavaleiro das Trevas):");
	strcpy(faceis[6].alternativa_A,"Batman � culpado pelas mortes cometidas por Duas-Caras, mesmo sem querer isso, por causa dos planos do Coringa que tentavam culpa-lo");
	strcpy(faceis[6].alternativa_B,"Gotham City descobre a verdadeira identidade de Batman, Bruce Wayne");
	strcpy(faceis[6].alternativa_C,"O Comiss�rio Gordon � assassinado por Harvey Dent(Duas-Caras), que deixa apenas o filho de Gordon vivo e depois acaba morrendo atacado pelo Batman");
	strcpy(faceis[6].alternativa_D,"Batman � culpado pelas mortes cometidas por Duas-Caras por escolha pr�pria para que o povo de Gotham n�o perca a esperan�a");
	faceis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(faceis[7].pergunta,"Qual foi a distribuidora do filme Batman - O cavaleiro das Trevas?");
	strcpy(faceis[7].alternativa_A,"Warner Bros");
	strcpy(faceis[7].alternativa_B,"Universal Pictures");
	strcpy(faceis[7].alternativa_C,"Dreamworks");
	strcpy(faceis[7].alternativa_D,"20th Century Fox");
	faceis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(faceis[8].pergunta,"No come�o do filme um transporte da S.H.I.E.L.D. � sequestrado por um grupo de terroristas. Qual era o transporte,e quem era o L�der dos terroristas(Capit�o Am�rica 2: O Soldado Invernal)?");
	strcpy(faceis[8].alternativa_A,"Um navio, o l�der dos terroristas � o vil�o Espi�o Mestre");
	strcpy(faceis[8].alternativa_B,"Um avi�o, o l�der dos terroristas � o vil�o Ossos cruzados");
	strcpy(faceis[8].alternativa_C,"Um carro, o l�der dos terroristas � o vil�o Caveira Vermelha");
	strcpy(faceis[8].alternativa_D,"Um navio, o l�der dos terroristas era o vil�o Batroc");
	faceis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(faceis[9].pergunta,"Qual era a miss�o da Vi�va Negra no in�cio do filme(Capit�o Am�rica 2: O Soldado Invernal)?");
	strcpy(faceis[9].alternativa_A,"Coletar informa��es dos computadores do navio da S.H.I.E.L.D.");
	strcpy(faceis[9].alternativa_B,"Deter os terroristas que haviam sequestrado o navio da S.H.I.E.L.D.");
	strcpy(faceis[9].alternativa_C,"Matar Batroc");
	strcpy(faceis[9].alternativa_D,"Salvar Steve");
	faceis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(faceis[10].pergunta,"Ao final do filme, oque acontece com a S.H.I.E.L.D.(Capit�o Am�rica 2: O Soldado Invernal)?");
	strcpy(faceis[10].alternativa_A,"Encerra suas atividades");
	strcpy(faceis[10].alternativa_B,"Fica mais poderosa");
	strcpy(faceis[10].alternativa_C,"Se une a H.Y.D.R.A.");
	strcpy(faceis[10].alternativa_D,"Passa a ser controlada por Tony Stark");
	faceis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(faceis[11].pergunta,"Que objeto que j� havia aparecido em Os Vingadores, aparece na primeira cena p�s-cr�ditos do filme(Capit�o Am�rica 2: O Soldado Invernal)?");
	strcpy(faceis[11].alternativa_A,"Nenhuma das Alternativas");
	strcpy(faceis[11].alternativa_B,"Manop�la do Infinito");
	strcpy(faceis[11].alternativa_C,"Reator Ark");
	strcpy(faceis[11].alternativa_D,"Tesseract");
	faceis[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(faceis[12].pergunta,"Por que Steve Rogers foi escolhido para o experimento do Super Soldado(Capit�o Am�rica: O Primeiro Vingador)?");
	strcpy(faceis[12].alternativa_A,"Todas est�o corretas");
	strcpy(faceis[12].alternativa_B,"Porque ele tinha car�ter");
	strcpy(faceis[12].alternativa_C,"Porque ele tinha vontade de servir seu pa�s");
	strcpy(faceis[12].alternativa_D,"Porque ele n�o abusaria do 'poder' do soro");
	faceis[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(faceis[13].pergunta,"Como � conhecido Johann Schmidt, um dos principais inimigos do Capit�o Am�rica(Capit�o Am�rica: O Primeiro Vingador)?");
	strcpy(faceis[13].alternativa_A,"Caveira Vermelha");
	strcpy(faceis[13].alternativa_B,"Caveira");
	strcpy(faceis[13].alternativa_C,"Ossos Cruzados");
	strcpy(faceis[13].alternativa_D,"HIDRA");
	faceis[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(faceis[14].pergunta,"Como Bucky morre(Capit�o Am�rica: O Primeiro Vingador)?");
	strcpy(faceis[14].alternativa_A,"Foi arremessado de um trem");
	strcpy(faceis[14].alternativa_B,"Congelado");
	strcpy(faceis[14].alternativa_C,"Caiu do avi�o");
	strcpy(faceis[14].alternativa_D,"Baleado");
	faceis[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(faceis[15].pergunta,"Os criadores do filme 'Como Treinar o seu Drag�o' tamb�m deram origem a outros dois filmes. Quais s�o eles?");
	strcpy(faceis[15].alternativa_A,"Kung Fu Panda e Shrek");
	strcpy(faceis[15].alternativa_B,"Monstros vs Alien�genas e Kung Fu Panda");
	strcpy(faceis[15].alternativa_C,"Madagascar e Shrek");
	strcpy(faceis[15].alternativa_D,"Carros e Bee Movie");
	faceis[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(faceis[16].pergunta,"Que parte do corpo o drag�o capturado, F�ria da Noite s� tinha pela metade, por que foi arrancada quando ele caiu na floresta(Como Treinar o seu Drag�o)?");
	strcpy(faceis[16].alternativa_A,"Rabo");
	strcpy(faceis[16].alternativa_B,"Orelha");
	strcpy(faceis[16].alternativa_C,"Pata");
	strcpy(faceis[16].alternativa_D,"Asa");
	faceis[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(faceis[17].pergunta,"Por que Solu�o batizou o drag�o de Banguela(Como Treinar o seu Drag�o)?");
	strcpy(faceis[17].alternativa_A,"Porque quando ele vai alimentar o drag�o pensa que ele � banguela");
	strcpy(faceis[17].alternativa_B,"Porque quando ele comeu o peixe ficou banguela");
	strcpy(faceis[17].alternativa_C,"Porque � um caracter�stica do drag�o");
	strcpy(faceis[17].alternativa_D,"Porque Solu�o achava esse nome engra�ado");
	faceis[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(faceis[18].pergunta,"Qual � o nome do drag�o de Valka(Como Treinar o Seu Drag�o 2)?");
	strcpy(faceis[18].alternativa_A,"Pula Nuvem");
	strcpy(faceis[18].alternativa_B,"Banguela");
	strcpy(faceis[18].alternativa_C,"Tempestade");
	strcpy(faceis[18].alternativa_D,"Batat�o");
	faceis[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(faceis[19].pergunta,"Quantos anos Solu�o tem no segundo filme(Como Treinar o Seu Drag�o 2)?");
	strcpy(faceis[19].alternativa_A,"Vinte anos");
	strcpy(faceis[19].alternativa_B,"Dezessete anos");
	strcpy(faceis[19].alternativa_C,"Quinze anos");
	strcpy(faceis[19].alternativa_D,"Treze anos");
	faceis[19].pontuacao = pontuacao;
	//Pergunta 21
	strcpy(faceis[20].pergunta,"Quem vira o Alfa no final do filme(Como Treinar o Seu Drag�o 2)?");
	strcpy(faceis[20].alternativa_A,"Banguela");
	strcpy(faceis[20].alternativa_B,"Pula Nuvem");
	strcpy(faceis[20].alternativa_C,"Quebra Miolos");
	strcpy(faceis[20].alternativa_D,"Batat�o");
	faceis[20].pontuacao = pontuacao;
	//Pergunta 22
	strcpy(faceis[21].pergunta,"Quem � Jacob Black(Crep�sculo)?");
	strcpy(faceis[21].alternativa_A,"Filho de Billy Black");
	strcpy(faceis[21].alternativa_B,"Primo de Bella");
	strcpy(faceis[21].alternativa_C,"Sobrinho de Edward");
	strcpy(faceis[21].alternativa_D,"Irm�o de Embry");
	faceis[21].pontuacao = pontuacao;
	//Pergunta 23
	strcpy(faceis[22].pergunta,"Qual o dom de Alice Cullen(Crespuculo - Lua Nova)?");
	strcpy(faceis[22].alternativa_A,"Prever o futuro");
	strcpy(faceis[22].alternativa_B,"Ler a mente das pessoas");
	strcpy(faceis[22].alternativa_C,"Ver atraves dos objetos");
	strcpy(faceis[22].alternativa_D,"Desenhar profundamente bem");
	faceis[22].pontuacao = pontuacao;
	//Pergunta 24
	strcpy(faceis[23].pergunta,"Quem � o melhor amigo de Greg(Di�rio de um Banana)?");
	strcpy(faceis[23].alternativa_A,"Rowley Jefferson");
	strcpy(faceis[23].alternativa_B,"Chirag Gupta");
	strcpy(faceis[23].alternativa_C,"Patty Farrel");
	strcpy(faceis[23].alternativa_D,"Fregley");
	faceis[23].pontuacao = pontuacao;
	//Pergunta 25
	strcpy(faceis[24].pergunta,"Por que os alunos temem o queijo da quadra de basquete(Di�rio de um Banana)?");
	strcpy(faceis[24].alternativa_A,"Porque eles tem medo de pegar o Toque do Queijo");
	strcpy(faceis[24].alternativa_B,"Porque eles o acham nojento");
	strcpy(faceis[24].alternativa_C,"Porque o queijo est� vivo");
	strcpy(faceis[24].alternativa_D,"Porque o queijo � azul");
	faceis[24].pontuacao = pontuacao;
	//Pergunta 26
	strcpy(faceis[25].pergunta,"Quem pega o Toque do Queijo no final do filme(Di�rio de um Banana)?");
	strcpy(faceis[25].alternativa_A,"Greg, Rowley e Patty");
	strcpy(faceis[25].alternativa_B,"Somente Greg");
	strcpy(faceis[25].alternativa_C,"Somente Rowley");
	strcpy(faceis[25].alternativa_D,"Ningu�m pega o Toque do Queijo");
	faceis[25].pontuacao = pontuacao;
	//Pergunta 27
	strcpy(faceis[26].pergunta,"O que acontece com Sven quando eles finalmente chegam ao castelo de Elsa(Frozen - Uma Aventura Congelante)?");
	strcpy(faceis[26].alternativa_A,"N�o conseguiu subir a escadaria, ent�o ficou esperando sozinho ao p� da escada");
	strcpy(faceis[26].alternativa_B,"Anna e Olaf entram apenas, Sven fica com a l�ngua colada no gelo e Kristoff fica para ajudar");
	strcpy(faceis[26].alternativa_C,"Ele nem subiu, pois tinha medo de altura");
	strcpy(faceis[26].alternativa_D,"Ficou esperando com Cristoff na porta do castelo, pois achava que Elsa o congelaria");
	faceis[26].pontuacao = pontuacao;
	//Pergunta 28
	strcpy(faceis[27].pergunta,"De quem o rei procura ajuda quando Anna sofre o acidente com Elsa(Frozen - Uma Aventura Congelante)?");
	strcpy(faceis[27].alternativa_A,"Trolls");
	strcpy(faceis[27].alternativa_B,"Duendes");
	strcpy(faceis[27].alternativa_C,"Elfos dom�sticos");
	strcpy(faceis[27].alternativa_D,"Pedras falantes");
	faceis[27].pontuacao = pontuacao;
	//Pergunta 29
	strcpy(faceis[28].pergunta,"Com quem Anna fica no final(Frozen - Uma Aventura Congelante)?");
	strcpy(faceis[28].alternativa_A,"Kristoff");
	strcpy(faceis[28].alternativa_B,"Olaf");
	strcpy(faceis[28].alternativa_C,"Christopher");
	strcpy(faceis[28].alternativa_D,"Pr�ncipe Hans");
	faceis[28].pontuacao = pontuacao;
	//Pergunta 30
	strcpy(faceis[29].pergunta,"Em 'Harry Potter e a pedra filosofal' quem cai da vassoura na primeira aula de v�o?");
	strcpy(faceis[29].alternativa_A,"Nevil Lomgbothon");
	strcpy(faceis[29].alternativa_B,"Draco Malfoy");
	strcpy(faceis[29].alternativa_C,"Dino Thomas");
	strcpy(faceis[29].alternativa_D,"Harry Potter");
	faceis[29].pontuacao = pontuacao;
	//Pergunta 31
	strcpy(faceis[30].pergunta,"Em 'Harry Potter e o prisioneiro de Askaban' Harry cai da vassoura num jogo de quadribol. Contra quem eles estavam jogando?");
	strcpy(faceis[30].alternativa_A,"Lufa - Lufa");
	strcpy(faceis[30].alternativa_B,"Sonserina");
	strcpy(faceis[30].alternativa_C,"Corvinal");
	strcpy(faceis[30].alternativa_D,"N�o foi no jogo, foi no treino");
	faceis[30].pontuacao = pontuacao;
	//Pergunta 32
	strcpy(faceis[31].pergunta,"Por que Snape teve que matar Dumbledore?");
	strcpy(faceis[31].alternativa_A,"Porque ele fez o voto perpetuo");
	strcpy(faceis[31].alternativa_B,"Porque Dumbledore mandou");
	strcpy(faceis[31].alternativa_C,"Porque Voldemort mandou");
	strcpy(faceis[31].alternativa_D,"Porque ele era um comensal da morte e queria matar Dumbledore para ganhar a confian�a de Voldemort");
	faceis[31].pontuacao = pontuacao;
	//Pergunta 33
	strcpy(faceis[32].pergunta,"Onde Caridade Burbage morre(Harry Potter)?");
	strcpy(faceis[32].alternativa_A,"Na mans�o dos Malfoy");
	strcpy(faceis[32].alternativa_B,"Na casa de Snape");
	strcpy(faceis[32].alternativa_C,"No Minist�rio da magia");
	strcpy(faceis[32].alternativa_D,"Em Hogwarts");
	faceis[32].pontuacao = pontuacao;
	//Pergunta 34
	strcpy(faceis[33].pergunta,"No O Espetacular Homem Aranha o vil�o do filme � o :");
	strcpy(faceis[33].alternativa_A,"Lagarto");
	strcpy(faceis[33].alternativa_B,"Duende Verde");
	strcpy(faceis[33].alternativa_C,"Dr. Octopus");
	strcpy(faceis[33].alternativa_D,"Homem Areia");
	faceis[33].pontuacao = pontuacao;
	//Pergunta 35
	strcpy(faceis[34].pergunta,"Como � o nome da Industria que Peter Parker foi picado no O Espetacular Homem Aranha?");
	strcpy(faceis[34].alternativa_A,"Oscorp");
	strcpy(faceis[34].alternativa_B,"Oscorpi");
	strcpy(faceis[34].alternativa_C,"Aranhas");
	strcpy(faceis[34].alternativa_D,"Okscorp");
	faceis[34].pontuacao = pontuacao;
	//Pergunta 36
	strcpy(faceis[35].pergunta,"Quem segurou o Homem Aranha Quando ele estava caindo do pr�dio no final do filme o Espetacular Homem Aranha?");
	strcpy(faceis[35].alternativa_A,"Dr. Curt Connors(o Lagarto)");
	strcpy(faceis[35].alternativa_B,"Harry");
	strcpy(faceis[35].alternativa_C,"Venom");
	strcpy(faceis[35].alternativa_D,"Gwen Stacy");
	faceis[35].pontuacao = pontuacao;
	//Pergunta 37
	strcpy(faceis[36].pergunta,"Por onde O Peter Parker solta teia(Homem-Aranha)");
	strcpy(faceis[36].alternativa_A,"Pelos lan�adores de teia que o personagem faz");
	strcpy(faceis[36].alternativa_B,"Pelo olho");
	strcpy(faceis[36].alternativa_C,"Pela cabe�a");
	strcpy(faceis[36].alternativa_D,"Pela sua pr�pria m�o");
	faceis[36].pontuacao = pontuacao;
	//Pergunta 38
	strcpy(faceis[37].pergunta,"Qual � a comida favorita dos minions(Meu Malvado Favorito)?");
	strcpy(faceis[37].alternativa_A,"Banana");
	strcpy(faceis[37].alternativa_B,"Batata");
	strcpy(faceis[37].alternativa_C,"Gel�ia");
	strcpy(faceis[37].alternativa_D,"Sorvete");
	faceis[37].pontuacao = pontuacao;
	//Pergunta 39
	strcpy(faceis[38].pergunta,"Quantas meninas o Gru adotou(Meu Malvado Favorito)?");
	strcpy(faceis[38].alternativa_A,"Tr�s");
	strcpy(faceis[38].alternativa_B,"Uma");
	strcpy(faceis[38].alternativa_C,"Duas");
	strcpy(faceis[38].alternativa_D,"Quatro");
	faceis[38].pontuacao = pontuacao;
	//Pergunta 40
	strcpy(faceis[39].pergunta,"Qual o nome do cientista que trabalha com Gru no primeiro filme(Meu Malvado Favorito)?");
	strcpy(faceis[39].alternativa_A,"Dr. Nef�rio");
	strcpy(faceis[39].alternativa_B,"Kevin");
	strcpy(faceis[39].alternativa_C,"Antonio");
	strcpy(faceis[39].alternativa_D,"David");
	faceis[39].pontuacao = pontuacao;
	//Pergunta 41
	strcpy(faceis[40].pergunta,"");
	strcpy(faceis[40].alternativa_A,"");
	strcpy(faceis[40].alternativa_B,"");
	strcpy(faceis[40].alternativa_C,"");
	strcpy(faceis[40].alternativa_D,"");
	faceis[40].pontuacao = pontuacao;
	//Pergunta 42
	strcpy(faceis[41].pergunta,"Qual � o nome do homem que vem do futuro para defender Sarah Connor do exterminador?");
	strcpy(faceis[41].alternativa_A,"Kyle Reese");
	strcpy(faceis[41].alternativa_B,"John Connor");
	strcpy(faceis[41].alternativa_C,"Michael Reese");
	strcpy(faceis[41].alternativa_D,"Matt Reese");
	faceis[41].pontuacao = pontuacao;
	//Pergunta 43
	strcpy(faceis[42].pergunta,"");
	strcpy(faceis[42].alternativa_A,"Legolas");
	strcpy(faceis[42].alternativa_B,"Arwen");
	strcpy(faceis[42].alternativa_C,"Aragorn");
	strcpy(faceis[42].alternativa_D,"Tauriel");
	faceis[42].pontuacao = pontuacao;
	//Pergunta 44
	strcpy(faceis[43].pergunta,"Depois de uma longa descida em barris pelo rio devido � fuga do Reino da Floresta, a comitiva de an�es chega � Cidade do Lago. Quem os ajuda a entrar na cidade(O Hobbit: A Desola��o de Smaug)?");
	strcpy(faceis[43].alternativa_A,"Bard");
	strcpy(faceis[43].alternativa_B,"Gandalf");
	strcpy(faceis[43].alternativa_C,"Legolas");
	strcpy(faceis[43].alternativa_D,"Tauriel");
	faceis[43].pontuacao = pontuacao;
	//Pergunta 45
	strcpy(faceis[44].pergunta,"Quem possu�a a �ltima Lan�a Negra(O Hobbit: A Desola��o de Smaug)?");
	strcpy(faceis[44].alternativa_A,"Bard");
	strcpy(faceis[44].alternativa_B,"Thorin");
	strcpy(faceis[44].alternativa_C,"Legolas");
	strcpy(faceis[44].alternativa_D,"Bilbo Bolseiro");
	faceis[44].pontuacao = pontuacao;
	//Pergunta 46
	strcpy(faceis[45].pergunta,"No filme 'O REI LE�O', qual � o nome do filho do rei?");
	strcpy(faceis[45].alternativa_A,"Simba");
	strcpy(faceis[45].alternativa_B,"Scar");
	strcpy(faceis[45].alternativa_C,"Covu");
	strcpy(faceis[45].alternativa_D,"Mufasa");
	faceis[45].pontuacao = pontuacao;
	//Pergunta 47
	strcpy(faceis[46].pergunta,"Quem s�o os pais de Simba?");
	strcpy(faceis[46].alternativa_A,"Mufasa e Sarabi*");
	strcpy(faceis[46].alternativa_B,"Mufasa e Quiara");
	strcpy(faceis[46].alternativa_C,"Covu e Nala");
	strcpy(faceis[46].alternativa_D,"Covu e Quiara");
	faceis[46].pontuacao = pontuacao;
	//Pergunta 48
	strcpy(faceis[47].pergunta,"O que Zazu � da fam�lia de Simba?");
	strcpy(faceis[47].alternativa_A,"Mordomo");
	strcpy(faceis[47].alternativa_B,"Motorista");
	strcpy(faceis[47].alternativa_C,"Alfaiate");
	strcpy(faceis[47].alternativa_D,"Cozinheiro");
	faceis[47].pontuacao = pontuacao;
	//Pergunta 49
	strcpy(faceis[48].pergunta,"O que Scar � de Simba?");
	strcpy(faceis[48].alternativa_A,"Tio");
	strcpy(faceis[48].alternativa_B,"Av�");
	strcpy(faceis[48].alternativa_C,"Amigo");
	strcpy(faceis[48].alternativa_D,"Primo");
	faceis[48].pontuacao = pontuacao;
	//Pergunta 50
	strcpy(faceis[49].pergunta,"Depois que Simba foge, quem s�o os dois amigos que o encontram?");
	strcpy(faceis[49].alternativa_A,"Covu e Tim�o");
	strcpy(faceis[49].alternativa_B,"Tim�o e Pumba");
	strcpy(faceis[49].alternativa_C,"Covu e Pumba");
	strcpy(faceis[49].alternativa_D,"Nala e Covu");
	faceis[49].pontuacao = pontuacao;
	//Pergunta 51
	strcpy(faceis[50].pergunta,"Quem � o protagonista de 'O senhor dos an�is'?");
	strcpy(faceis[50].alternativa_A,"Frodo");
	strcpy(faceis[50].alternativa_B,"Aragorn");
	strcpy(faceis[50].alternativa_C,"Bilbo Bolseiro");
	strcpy(faceis[50].alternativa_D,"Gandalf");
	faceis[50].pontuacao = pontuacao;
	//Pergunta 52
	strcpy(faceis[51].pergunta,"No filme 'A sociedade do anel' Gandalf cai em um precip�cio lutando com qual inimigo?");
	strcpy(faceis[51].alternativa_A,"Balrog");
	strcpy(faceis[51].alternativa_B,"Troll Montanh�s");
	strcpy(faceis[51].alternativa_C,"Sauron");
	strcpy(faceis[51].alternativa_D,"Saruman");
	faceis[51].pontuacao = pontuacao;
	//Pergunta 53
	strcpy(faceis[52].pergunta,"Qual o nome da vila para a qual se dirigem Sam, Frodo, Pippin e Merry � mando de Gandalf?");
	strcpy(faceis[52].alternativa_A,"Bri");
	strcpy(faceis[52].alternativa_B,"Condado");
	strcpy(faceis[52].alternativa_C,"P�nei Saltitante");
	strcpy(faceis[52].alternativa_D,"Quarta-Oeste");
	faceis[52].pontuacao = pontuacao;
	//Pergunta 54
	strcpy(faceis[53].pergunta,"Em que se baseia a hist�ria de Resident Evil (o filme)?");
	strcpy(faceis[53].alternativa_A,"Uma amplia��o cient�fica de uma corpora��o que atua em experimentos ilegais por m�todos que utilizam v�rus para tratamentos de pessoas com deficiencias. Como vil�es temos os zumbis, generalizados pelo escapamento do g�s viral de um experimento na colm�ia");
	strcpy(faceis[53].alternativa_B,"Uma descoberta de uma casa amaldi�oada que tem como vil�es do filme, uma alcat�ia de zumbis");
	strcpy(faceis[53].alternativa_C,"Uma descoberta cientifica que evidencia que uma corpora��o est� operacionando atividades ilegais dentro de uma f�brica chamada Corm�lia");
	strcpy(faceis[53].alternativa_D,"A descoberta de uma casa amaldi�oada que tem como objetivo transformar pessoas humanas em zumbis");
	faceis[53].pontuacao = pontuacao;
	//Pergunta 55
	strcpy(faceis[54].pergunta,"Qual o nome da personagem principal do filme Resident Evil?");
	strcpy(faceis[54].alternativa_A,"Alice");
	strcpy(faceis[54].alternativa_B,"Allie");
	strcpy(faceis[54].alternativa_C,"Aline");
	strcpy(faceis[54].alternativa_D,"Alicia");
	faceis[54].pontuacao = pontuacao;
	//Pergunta 56
	strcpy(faceis[55].pergunta,"Quem criou a Regra de Dois dos Sith?(Star Wars)");
	strcpy(faceis[55].alternativa_A,"Darth Bane");
	strcpy(faceis[55].alternativa_B,"Darth Sidious");
	strcpy(faceis[55].alternativa_C,"Darth Vader");
	strcpy(faceis[55].alternativa_D,"Darth Plagueius");
	faceis[55].pontuacao = pontuacao;
	//Pergunta 57
	strcpy(faceis[56].pergunta,"Que personagem, no come�o do filme, � um policial que tenta se infiltrar nas corridas ilegais(Velozes e Furiosos)?");
	strcpy(faceis[56].alternativa_A,"Brian");
	strcpy(faceis[56].alternativa_B,"Leon");
	strcpy(faceis[56].alternativa_C,"Johnny");
	strcpy(faceis[56].alternativa_D,"Dom");
	faceis[56].pontuacao = pontuacao;
	//Pergunta 58
	strcpy(faceis[57].pergunta,"Qual foi o planeta de funda��o da Ordem Jedi?");
	strcpy(faceis[57].alternativa_A,"Tython");
	strcpy(faceis[57].alternativa_B,"Alderaan");
	strcpy(faceis[57].alternativa_C,"Yavin 4");
	strcpy(faceis[57].alternativa_D,"Coruscant");
	faceis[57].pontuacao = pontuacao;	
	//Pergunta 59
	strcpy(faceis[58].pergunta,"Depois da morte de seu irm�o Tom, Jake foi escolhido para substitu�-lo no programa Avatar. Por qu�(Avatar)?");
	strcpy(faceis[58].alternativa_A,"Porque seu DNA era compat�vel com o Avatar de Tom");
	strcpy(faceis[58].alternativa_B,"Porque ele foi contratado como cientista");
	strcpy(faceis[58].alternativa_C,"Porque ele seria �til como atirador");
	strcpy(faceis[58].alternativa_D,"Porque ele era parecido com Tom");
	faceis[58].pontuacao = pontuacao;
	//Pergunta 60
	strcpy(faceis[59].pergunta,"Como � o nome da Atriz que faz Gwen Stacy no O Espetacular Homem Aranha?");
	strcpy(faceis[59].alternativa_A,"Emma Stone");
	strcpy(faceis[59].alternativa_B,"Emma Estone");
	strcpy(faceis[59].alternativa_C,"Lady gaga");
	strcpy(faceis[59].alternativa_D,"Emma Stane");
	faceis[59].pontuacao = pontuacao;
	
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
	strcpy(medias[0].pergunta,"Porque primeiramente Charlie n�o quis morar na f�brica com Willy Wonka, ajudando-o a cuidar dos doces?");
	strcpy(medias[0].alternativa_A,"Porque Willy Wonka n�o aceitou de primeira levar a fam�lia de Charlie junto com ele");
	strcpy(medias[0].alternativa_B,"Porque Charlie n�o conseguiria cuidar da f�brica, dos Oompa-Loompas e dos doces");
	strcpy(medias[0].alternativa_C,"Porque Willy Wonka era esquisito e rude");
	strcpy(medias[0].alternativa_D,"Porque com Willy Wonka ajudando na f�brica Charlie acharia dif�cil, e quando tivesse que fazer isso sozinho seria mais dif�cil ainda para ele");
	medias[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(medias[1].pergunta,"Alice no come�o n�o parece nada com a Alice que j� esteve no Pa�s das maravilhas antes para os seres que vivem l�. O que ele tem que fazer para provar que � a verdadeira Alice?");
	strcpy(medias[1].alternativa_A,"Matar o Jaguardarte");
	strcpy(medias[1].alternativa_B,"Matar a Rainha Branca");
	strcpy(medias[1].alternativa_C,"Jogar golfe com o Chapeleiro");
	strcpy(medias[1].alternativa_D,"Matar a Rainha Vermelha");
	medias[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(medias[2].pergunta,"Alice entra no castelo da Rainha Vermelha para pegar algo. O que ela procura?");
	strcpy(medias[2].alternativa_A,"A espada Forpal");
	strcpy(medias[2].alternativa_B,"O diadema da Rainha Vermelha");
	strcpy(medias[2].alternativa_C,"O C�o de tr�s cabe�as do Valete de espadas");
	strcpy(medias[2].alternativa_D,"O ouro da Rainha");
	medias[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(medias[3].pergunta,"No segundo filme de As Cr�nicas de N�rnia, como � o nome do pr�ncipe que chamou os reis e rainhas de N�rnia?");
	strcpy(medias[3].alternativa_A,"Pr�ncipe Caspian");
	strcpy(medias[3].alternativa_B,"Pr�ncipe Caspiano");
	strcpy(medias[3].alternativa_C,"Pr�ncipe Xis");
	strcpy(medias[3].alternativa_D,"Pr�ncipe Caspa");
	medias[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(medias[4].pergunta,"Kristi fica sozinha com Hunter em casa e � puxada violentamente pelas escadas e levada � um por�o. Quando seu marido chega, assisti as imagens. O que ele resolve fazer(Atividade Paranormal 2)?");
	strcpy(medias[4].alternativa_A,"Ele mesmo faz um exorcismo em Kristi");
	strcpy(medias[4].alternativa_B,"Chamar um padre para fazer um exorcismo em Kristi");
	strcpy(medias[4].alternativa_C,"Expulsar Kristi de casa");
	strcpy(medias[4].alternativa_D,"Chamar um pastor para orar por Kristi");
	medias[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(medias[5].pergunta,"Daniel transfere o dem�nio que estava em Kristi pra Katie. Como ele faz isso(Atividade Paranormal 2)?");
	strcpy(medias[5].alternativa_A,"Queimando um foto de Katie");
	strcpy(medias[5].alternativa_B,"Atrav�s de um ritual");
	strcpy(medias[5].alternativa_C,"Atrav�s de um pacto de sangue");
	strcpy(medias[5].alternativa_D,"Depois que ele exorcisa Kristi, o dem�nio j� passa pra Katie");
	medias[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(medias[6].pergunta,"Lois, a av� das garotas, pertencia a que grupo(Atividade Paranormal 3)?");
	strcpy(medias[6].alternativa_A,"A uma seita de bruxas");
	strcpy(medias[6].alternativa_B,"A um coral de senhoras");
	strcpy(medias[6].alternativa_C,"Ao alco�licos an�nimos");
	strcpy(medias[6].alternativa_D,"A um grupo de ora��o da Igreja");
	medias[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(medias[7].pergunta,"Julie era a �nica c�tica da hip�tese de que em sua casa havia esp�ritos malignos. O que fez ela mudar de opini�o ?");
	strcpy(medias[7].alternativa_A,"Os m�veis ca�ram do teto sem nenhuma explica��o");
	strcpy(medias[7].alternativa_B,"Ela viu uma sombra na porta de seu quarto");
	strcpy(medias[7].alternativa_C,"As luzes da casa queimaram");
	strcpy(medias[7].alternativa_D,"Ela foi arrastada violentamente");
	medias[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(medias[8].pergunta,"Qual foi o tipo de arma mais utilizada pelos Na'Vi na batalha contra a RDA(Avatar)?");
	strcpy(medias[8].alternativa_A,"Arco e flecha");
	strcpy(medias[8].alternativa_B,"Pistola");
	strcpy(medias[8].alternativa_C,"Espada");
	strcpy(medias[8].alternativa_D,"Lan�a");
	medias[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(medias[9].pergunta,"Qual � o nome completo de Jake(Avatar)?");
	strcpy(medias[9].alternativa_A,"Jake Sully");
	strcpy(medias[9].alternativa_B,"Jake Taylor");
	strcpy(medias[9].alternativa_C,"Jake Baker");
	strcpy(medias[9].alternativa_D,"Jake Wright");
	medias[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(medias[10].pergunta,"Qual desafio Jake tem de enfrentar para se reaproximar do povo e recuperar sua confian�a(Avatar)?");
	strcpy(medias[10].alternativa_A,"Capturar Toruk e se tornar o Cavaleiro do �ltima Sombra");
	strcpy(medias[10].alternativa_B,"Pedir perd�o");
	strcpy(medias[10].alternativa_C,"Lutar contra a RDA");
	strcpy(medias[10].alternativa_D,"Enfrentar Tsu'Tey");
	medias[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(medias[11].pergunta,"O filme Batman- O cavaleiro das Trevas � o Segundo filme da trilogia Batman do diretor Christopher Nolan, onde o ator principal �:");
	strcpy(medias[11].alternativa_A,"Christian Bale");
	strcpy(medias[11].alternativa_B,"Michael Caine.");
	strcpy(medias[11].alternativa_C,"Michael Keaton.");
	strcpy(medias[11].alternativa_D,"Heath Ledger.");
	medias[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(medias[12].pergunta,"Batman- O Cavaleiro das Trevas esta dentro de uma trilogia, onde � o segundo filme. Quais s�o os nomes de seu antecessor e sucessor?");
	strcpy(medias[12].alternativa_A,"Batman: Begins e Batman: O cavaleiro das trevas Ressurge");
	strcpy(medias[12].alternativa_B,"Batman: O in�cio e Batman: o cavaleiro das trevas Ressurge.");
	strcpy(medias[12].alternativa_C,"Batman: O cavaleiro das Trevas nasce e Batman: O cavaleiro das Trevas Ressurge.");
	strcpy(medias[12].alternativa_D,"Batman: O In�cio e Batman eternamente.");
	medias[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(medias[13].pergunta,"Qual das frases a seguir, se tornou famosa depois de uma fala de um personagem de Batman: O Cavaleiro das Trevas? Quem foi este personagem?");
	strcpy(medias[13].alternativa_A,"'Por que t�o s�rio', pelo personagem Coringa");
	strcpy(medias[13].alternativa_B,"'� por isso que o Super-homem trabalha sozinho', pelo personagem Batman");
	strcpy(medias[13].alternativa_C,"'Vamos colocar um sorriso nesse rosto', pelo personagem Pinguim");
	strcpy(medias[13].alternativa_D,"Todas est�o corretas");
	medias[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(medias[14].pergunta,"A trama do segundo filme, se passa quantos anos ap�s os eventos de Os Vingadores(Capit�o Am�rica 2: O Soldado Invernal)?");
	strcpy(medias[14].alternativa_A,"2 Anos");
	strcpy(medias[14].alternativa_B,"3 Anos");
	strcpy(medias[14].alternativa_C,"1 Anos");
	strcpy(medias[14].alternativa_D,"5 Anos");
	medias[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(medias[15].pergunta,"Quem era o verdadeiro vil�o do filme 'Capit�o Am�rica 2: O Soldado Invernal'?");
	strcpy(medias[15].alternativa_A,"Alexander Pierce");
	strcpy(medias[15].alternativa_B,"Soldado Invernal");
	strcpy(medias[15].alternativa_C,"Nick Fury");
	strcpy(medias[15].alternativa_D,"Armim Zola");
	medias[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(medias[16].pergunta,"No filme � revelado que a H.Y.D.R.A.(Capit�o Am�rica 2: O Soldado Invernal):");
	strcpy(medias[16].alternativa_A,"Esteve infiltrada na S.H.I.E.L.D. desde o final da Segunda Guerra Mundial");
	strcpy(medias[16].alternativa_B,"Tentou criar um novo super-soldado");
	strcpy(medias[16].alternativa_C,"Tentou trazer o Caveira Vermelha de volta");
	strcpy(medias[16].alternativa_D,"Estava criando armas nucleares para dominar o mundo");
	medias[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(medias[17].pergunta,"Qual personagem do universo Marvel, � citado no filme, embora ainda n�o tenha aparecido em nenhum filme da Marvel Studios(Capit�o Am�rica 2: O Soldado Invernal)?");
	strcpy(medias[17].alternativa_A,"Doutor Estranho");
	strcpy(medias[17].alternativa_B,"Demolidor");
	strcpy(medias[17].alternativa_C,"Pantera Negra");
	strcpy(medias[17].alternativa_D,"Homem Aranha");
	medias[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(medias[18].pergunta,"Quem aparece assim que Steve acorda(Capit�o Am�rica: O Primeiro Vingador)?");
	strcpy(medias[18].alternativa_A,"Uma enfermeira");
	strcpy(medias[18].alternativa_B,"Sharon Carter");
	strcpy(medias[18].alternativa_C,"Howard Stark");
	strcpy(medias[18].alternativa_D,"Loki");
	medias[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(medias[19].pergunta,"Depois que o Solu�o diz ao pai que n�o quer matar drag�es, o que ele faz(Como Treinar o seu Drag�o)?");
	strcpy(medias[19].alternativa_A,"Ele ri");
	strcpy(medias[19].alternativa_B,"Ele fica bravo");
	strcpy(medias[19].alternativa_C,"Ele chora");
	strcpy(medias[19].alternativa_D,"Ele desmaia");
	medias[19].pontuacao = pontuacao;
	//Pergunta 21
	strcpy(medias[20].pergunta,"Qual o nome do pai do Solu�o(Como Treinar o seu Drag�o)?");
	strcpy(medias[20].alternativa_A,"Sto�co");
	strcpy(medias[20].alternativa_B,"Melequento");
	strcpy(medias[20].alternativa_C,"Boc�o");
	strcpy(medias[20].alternativa_D,"Cabe�adura");
	medias[20].pontuacao = pontuacao;
	//Pergunta 22
	strcpy(medias[21].pergunta,"O que a Astrid faz a Solu�o quando descobre que ele vai se tornar l�der(Como Treinar o Seu Drag�o 2)?");
	strcpy(medias[21].alternativa_A,"Da um soco nele");
	strcpy(medias[21].alternativa_B,"Pula nele");
	strcpy(medias[21].alternativa_C,"Aperta suas bochechas");
	strcpy(medias[21].alternativa_D,"Beija ele");
	medias[21].pontuacao = pontuacao;
	//Pergunta 23
	strcpy(medias[22].pergunta,"Quem Banguela atinge e mata quando esta sobre controle de Drago(Como Treinar o Seu Drag�o 2)?");
	strcpy(medias[22].alternativa_A,"Stoico");
	strcpy(medias[22].alternativa_B,"Astrid");
	strcpy(medias[22].alternativa_C,"Solu�o");
	strcpy(medias[22].alternativa_D,"Drago");
	medias[22].pontuacao = pontuacao;
	//Pergunta 24
	strcpy(medias[23].pergunta,"Qual o est�dio que o filme Como Treinar o Seu Drag�o 2 foi feito?");
	strcpy(medias[23].alternativa_A,"DreamWorks");
	strcpy(medias[23].alternativa_B,"Dc Comics");
	strcpy(medias[23].alternativa_C,"Marvel Universe");
	strcpy(medias[23].alternativa_D,"Disney");
	medias[23].pontuacao = pontuacao;
	//Pergunta 25
	strcpy(medias[24].pergunta,"Quem ganha a primeira corrida de drag�es mostrada no filme(Como Treinar o Seu Drag�o 2)?");
	strcpy(medias[24].alternativa_A,"Astrid");
	strcpy(medias[24].alternativa_B,"Solu�o");
	strcpy(medias[24].alternativa_C,"Melequento");
	strcpy(medias[24].alternativa_D,"Perna de Peixe");
	medias[24].pontuacao = pontuacao;
	//Pergunta 26
	strcpy(medias[25].pergunta,"Qual � o nome COMPLETO de Bella(Crep�sculo)?");
	strcpy(medias[25].alternativa_A,"Isabella Marie Swam");
	strcpy(medias[25].alternativa_B,"Isabel Marie Swann");
	strcpy(medias[25].alternativa_C,"Isabelle Marie Swan");
	strcpy(medias[25].alternativa_D,"Isabela Marye Swam");
	medias[25].pontuacao = pontuacao;
	//Pergunta 27
	strcpy(medias[26].pergunta,"Em que ano Edward Nasceu(Crep�sculo)?");
	strcpy(medias[26].alternativa_A,"1901");
	strcpy(medias[26].alternativa_B,"1918");
	strcpy(medias[26].alternativa_C,"1910");
	strcpy(medias[26].alternativa_D,"1980");
	medias[26].pontuacao = pontuacao;
	//Pergunta 28
	strcpy(medias[27].pergunta,"Quais os nomes dos integrantes do grupo do 'perseguidor'(Crep�sculo)?");
	strcpy(medias[27].alternativa_A,"Laurent, James e Vict�ria");
	strcpy(medias[27].alternativa_B,"James, Laurant e Vit�ria");
	strcpy(medias[27].alternativa_C,"James, Laurent e Vit�ria");
	strcpy(medias[27].alternativa_D,"James e Laurent");
	medias[27].pontuacao = pontuacao;
	//Pergunta 29
	strcpy(medias[28].pergunta,"O que Bella fala quando Edward a convida para ir a casa dele conhecer sua familia(Crespuculo - Lua Nova)?");
	strcpy(medias[28].alternativa_A,"Ser� que v�o gostar de mim?");
	strcpy(medias[28].alternativa_B,"O que devo vestir?");
	strcpy(medias[28].alternativa_C,"Ser� que devo levar um chocolate para sua mae?");
	strcpy(medias[28].alternativa_D,"Ai eu preciso fazer uma escova!");
	medias[28].pontuacao = pontuacao;
	//Pergunta 30
	strcpy(medias[29].pergunta,"Qual � o nome completo de Greg(Di�rio de um Banana)?");
	strcpy(medias[29].alternativa_A,"Gregory Heffley");
	strcpy(medias[29].alternativa_B,"Gregand Galante");
	strcpy(medias[29].alternativa_C,"Greggley Kinney");
	strcpy(medias[29].alternativa_D,"Greggley Swan");
	medias[29].pontuacao = pontuacao;
	//Pergunta 31
	strcpy(medias[30].pergunta,"Em qual categoria Greg queria entrar no anu�rio(Di�rio de um Banana)?");
	strcpy(medias[30].alternativa_A,"Preferidos da Turma");
	strcpy(medias[30].alternativa_B,"Mais Popular");
	strcpy(medias[30].alternativa_C,"Amigos Mais Fofos");
	strcpy(medias[30].alternativa_D,"Palha�o da Turma");
	medias[30].pontuacao = pontuacao;
	//Pergunta 32
	strcpy(medias[31].pergunta,"Qual as respectivas fantasias de Halloween de Greg e Rowley(Di�rio de um Banana)?");
	strcpy(medias[31].alternativa_A,"Pirata e Cavaleiro");
	strcpy(medias[31].alternativa_B,"Pirata e Fantasma");
	strcpy(medias[31].alternativa_C,"Cavaleiro e Bruxa");
	strcpy(medias[31].alternativa_D,"Cavaleiro e Fada");
	medias[31].pontuacao = pontuacao;
	//Pergunta 33
	strcpy(medias[32].pergunta,"Qual a marca do acidente de inf�ncia que Anna carrega(Frozen - Uma Aventura Congelante)?");
	strcpy(medias[32].alternativa_A,"Uma mecha de cabelo mais clara*");
	strcpy(medias[32].alternativa_B,"Uma mancha na testa, aonde o feiti�o bateu");
	strcpy(medias[32].alternativa_C,"Um olho azul");
	strcpy(medias[32].alternativa_D,"Grande sensibilidade ao frio");
	medias[32].pontuacao = pontuacao;
	//Pergunta 34
	strcpy(medias[33].pergunta,"Quais pr�mios Frozen recebeu no Oscar?");
	strcpy(medias[33].alternativa_A,"Melhor anima��o e melhor can��o original");
	strcpy(medias[33].alternativa_B,"Melhor filme e melhor anima��o");
	strcpy(medias[33].alternativa_C,"Melhor dire��o de arte e melhor fotografia");
	strcpy(medias[33].alternativa_D,"Nenhum, foi apenas indicado");
	medias[33].pontuacao = pontuacao;
	//Pergunta 35
	strcpy(medias[34].pergunta,"Na c�mara secreta o professor Gilderoy Lockhart usou um feiti�o para apagar a memoria de Harry e Rony, mas o feiti�o n�o funciona por que?");
	strcpy(medias[34].alternativa_A,"Por que ele usou a varinha de Rony que estava quebrada");
	strcpy(medias[34].alternativa_B,"Por que ele n�o sabia fazer o feiti�o direito");
	strcpy(medias[34].alternativa_C,"Por que ele usou a varinha de Harry que estava quebrada");
	strcpy(medias[34].alternativa_D,"Por que ele nunca foi bom com feiti�os de memoria");
	medias[34].pontuacao = pontuacao;
	//Pergunta 36
	strcpy(medias[35].pergunta,"Qual desses Weasleys � f� do professor Gilderoy Lockhart?");
	strcpy(medias[35].alternativa_A,"Gina Weasley");
	strcpy(medias[35].alternativa_B,"Percy Weasley");
	strcpy(medias[35].alternativa_C,"Ronald Weasley");
	strcpy(medias[35].alternativa_D,"Fred Weasley");
	medias[35].pontuacao = pontuacao;
	//Pergunta 37
	strcpy(medias[36].pergunta,"Em 'Harry Potter e o c�lice de fogo' Harry fica sonhando direto a mesma coisa, em seu sonho Voldemort e Nagini est�o em uma sala com mais duas pessoas. Que pessoas eram essas?");
	strcpy(medias[36].alternativa_A,"Bart� Crouch Jr e Rabicho");
	strcpy(medias[36].alternativa_B,"Belatriz e Lucio");
	strcpy(medias[36].alternativa_C,"Bart� Crouch Jr e Belatriz");
	strcpy(medias[36].alternativa_D,"Bart� Crouch e Belatriz");
	medias[36].pontuacao = pontuacao;
	//Pergunta 38
	strcpy(medias[37].pergunta,"Quais s�o as meninas que v�o pro baile com Harry, Cedrico e Vitor respectivamente?");
	strcpy(medias[37].alternativa_A,"Parvati, Cho e Hermione");
	strcpy(medias[37].alternativa_B,"Padma, Hermione e Cho");
	strcpy(medias[37].alternativa_C,"Cho, Suzana e Hermione");
	strcpy(medias[37].alternativa_D,"Parvati, Cho e Fleur");
	medias[37].pontuacao = pontuacao;
	//Pergunta 39
	strcpy(medias[38].pergunta,"Qual desses personagens n�o entrou na Armada Dumbledore desde o come�o?");
	strcpy(medias[38].alternativa_A,"Simas Finnigan");
	strcpy(medias[38].alternativa_B,"Fred Weasley");
	strcpy(medias[38].alternativa_C,"Dino Thomas");
	strcpy(medias[38].alternativa_D,"Gina Weasley");
	medias[38].pontuacao = pontuacao;
	//Pergunta 40
	strcpy(medias[39].pergunta,"Junto com Voldemort quem �(s�o) o(s) �nico(s) comensal(is) que conseguem fugir depois da batalha no minist�rio?");
	strcpy(medias[39].alternativa_A,"Belatriz Lestrange");
	strcpy(medias[39].alternativa_B,"Lucio Malfoy");
	strcpy(medias[39].alternativa_C,"Belatriz Lestrange e Lucio Malfoy");
	strcpy(medias[39].alternativa_D,"Rodolfo Lestrange e Lucio Malfoy");
	medias[39].pontuacao = pontuacao;
	//Pergunta 41
	strcpy(medias[40].pergunta,"Em 'Harry Potter e o enigma do pr�ncipe' v�rios comensais da morte atacam a casa de uma pessoa e acabam destruindo a casa dessa pessoa. Os comensais destroem a casa de quem?");
	strcpy(medias[40].alternativa_A,"Eles destroem a casa dos Weasleys");
	strcpy(medias[40].alternativa_B,"Eles destroem a casa de Xenofilio Lovegood");
	strcpy(medias[40].alternativa_C,"Eles destroem a casa de Remo Lupin");
	strcpy(medias[40].alternativa_D,"Eles destroem a casa de Severo Snape");
	medias[40].pontuacao = pontuacao;
	//Pergunta 42
	strcpy(medias[41].pergunta,"Em 'Harry Potter e as rel�quias da morte parte 1' Rony briga com Harry e vai embora, quando ele volta onde Harry e Hermione estavam?");
	strcpy(medias[41].alternativa_A,"Na floresta do Deon");
	strcpy(medias[41].alternativa_B,"Em Godric's Hollow");
	strcpy(medias[41].alternativa_C,"No Largo Grimmauld");
	strcpy(medias[41].alternativa_D,"Na floresta proibida");
	medias[41].pontuacao = pontuacao;
	//Pergunta 43
	strcpy(medias[42].pergunta,"Qual dos Weasley morre(Harry Potter)?");
	strcpy(medias[42].alternativa_A,"Fred Weasley");
	strcpy(medias[42].alternativa_B,"Gorge Weasley");
	strcpy(medias[42].alternativa_C,"Gina Weasley");
	strcpy(medias[42].alternativa_D,"Gui Weasley");
	medias[0].pontuacao = pontuacao;
	//Pergunta 44
	strcpy(medias[43].pergunta,"Qual � o personagem que n�o atuou em O Espetacular Homem Aranha?");
	strcpy(medias[43].alternativa_A,"Mary jane");
	strcpy(medias[43].alternativa_B,"Capit�o Stacy");
	strcpy(medias[43].alternativa_C,"Tia may");
	strcpy(medias[43].alternativa_D,"Tio Ben");
	medias[43].pontuacao = pontuacao;
	//Pergunta 45
	strcpy(medias[44].pergunta,"Por que Bilbo deu o nome de 'Ferroada' para a sua espada �lfica(O Hobbit: A Desola��o de Smaug)?");
	strcpy(medias[44].alternativa_A,"Porque ele matou uma aranha gigante que ficou repetindo a palavra e decidiu cham�-la assim");
	strcpy(medias[44].alternativa_B,"Porque Thorin decidiu que esse seria o nome dela");
	strcpy(medias[44].alternativa_C,"Porque Thranduil, rei dos elfos, a forjou e deu esse nome � ela");
	strcpy(medias[44].alternativa_D,"Porque Gandalf j� sabia que esse era o nome real dela");
	medias[44].pontuacao = pontuacao;
	//Pergunta 46
	strcpy(medias[45].pergunta,"O que o orc capturado por Legolas e Tauriel quis dizer com 'O seu mundo vai queimar!'(O Hobbit: A Desola��o de Smaug)?");
	strcpy(medias[45].alternativa_A,"O retorno do Um Anel para as m�os de Sauron resultando com a Terra M�dia em seu dom�nio");
	strcpy(medias[45].alternativa_B,"Que os orcs das montanhas iriam queimar a floresta em que vivem os elfos");
	strcpy(medias[45].alternativa_C,"O Drag�o Smaug iria devastar a Terra M�dia");
	strcpy(medias[45].alternativa_D,"Os an�es se vingariam dos elfos por n�o t�-los ajudado quando Smaug invadiu Erebor e destruiu Valle");
	medias[45].pontuacao = pontuacao;
	//Pergunta 47
	strcpy(medias[46].pergunta,"Qual � a �ltima luz do dia de Durin(O Hobbit: A Desola��o de Smaug)?");
	strcpy(medias[46].alternativa_A,"A luz da lua");
	strcpy(medias[46].alternativa_B,"A luz do p�r do sol");
	strcpy(medias[46].alternativa_C,"A luz de Elendil");
	strcpy(medias[46].alternativa_D,"A luz dos elfos");
	medias[46].pontuacao = pontuacao;
	//Pergunta 48
	strcpy(medias[47].pergunta,"Ap�s ser despertado por Bilbo, o Drag�o Smaug ca�a ele e os an�es em Erebor. Aonde Thorin planeja levar o Drag�o para tentar derrot�-lo(O Hobbit: A Desola��o de Smaug)?");
	strcpy(medias[47].alternativa_A,"�s grandes fornalhas");
	strcpy(medias[47].alternativa_B,"�s minas de Erebor");
	strcpy(medias[47].alternativa_C,"Ao sal�o dos tesouros");
	strcpy(medias[47].alternativa_D,"� sala do trono de Thror");
	medias[47].pontuacao = pontuacao;
	//Pergunta 49
	strcpy(medias[48].pergunta,"O que � uma lan�a negra(O Hobbit: A Desola��o de Smaug)?");
	strcpy(medias[48].alternativa_A,"O �nico tipo de lan�a capaz de perfurar a escama de um drag�o");
	strcpy(medias[48].alternativa_B,"Uma lan�a usada por Thranduil para amea�ar Thorin se n�o concordasse em lhe dar parte do tesouro de Erebor");
	strcpy(medias[48].alternativa_C,"Uma lan�a de ouro encontrada por Bilbo no sal�o de tesouros durante seu encontro com Smaug");
	strcpy(medias[48].alternativa_D,"Uma lan�a usada por Legolas para tentar deter a fuga dos an�es");
	medias[48].pontuacao = pontuacao;
	//Pergunta 50
	strcpy(medias[49].pergunta,"Qual � o Lema que Tim�o e Pumba ensinam � Simba? O que quer dizer?");
	strcpy(medias[49].alternativa_A,"Hakunamatata, que quer dizer 'viver sem problemas'");
	strcpy(medias[49].alternativa_B,"Haketlavata, que quer dizer 'aproveite em quanto � tempo'");
	strcpy(medias[49].alternativa_C,"Pur� com batata, que quer dizer 'viva comendo bichinhos'");
	strcpy(medias[49].alternativa_D,"Peritkalaka, que quer dizer 'somos um'");
	medias[49].pontuacao = pontuacao;
	//Pergunta 51
	strcpy(medias[50].pergunta,"Qual o nome do mago que trai a ordem dos Istari no filme 'A sociedade do anel'?");
	strcpy(medias[50].alternativa_A,"Saruman, o Branco");
	strcpy(medias[50].alternativa_B,"Radagast, o Castanho");
	strcpy(medias[50].alternativa_C,"Gandalf, o Cinzento");
	strcpy(medias[50].alternativa_D,"Galadriel, a Dama da Luz");
	medias[50].pontuacao = pontuacao;
	//Pergunta 52
	strcpy(medias[51].pergunta,"Qual � o nome do senhor dos Nazgul?");
	strcpy(medias[51].alternativa_A,"Bruxo Rei de Angmar");
	strcpy(medias[51].alternativa_B,"Espectro de Gundabad");
	strcpy(medias[51].alternativa_C,"Mago de Gundabad");
	strcpy(medias[51].alternativa_D,"Rei de Dol Guldur");
	medias[51].pontuacao = pontuacao;
	//Pergunta 53
	strcpy(medias[52].pergunta,"Qual o nome do arqueiro �lfico que ajuda Frodo em sua jornada para destruir o anel?");
	strcpy(medias[52].alternativa_A,"Legolas");
	strcpy(medias[52].alternativa_B,"Gondolin");
	strcpy(medias[52].alternativa_C,"Thranduil");
	strcpy(medias[52].alternativa_D,"Glorfindel");
	medias[52].pontuacao = pontuacao;
	//Pergunta 54
	strcpy(medias[53].pergunta,"O que acontece com Saruman depois da 'Marcha dos Ents'?");
	strcpy(medias[53].alternativa_A,"Gandalf vai at� Isengard e mata Saruman");
	strcpy(medias[53].alternativa_B,"Gandalf vai at� Isengard e destitui Saruman da Ordem dos Istari e o mant�m preso");
	strcpy(medias[53].alternativa_C,"Gandalf vai at� Isengard e faz Grima matar Saruman");
	strcpy(medias[53].alternativa_D,"Gandalf destitui Saruman da Ordem dos Istari quebrando seu cajado e depois Saruman � assassinado por seu servo Grima");
	medias[53].pontuacao = pontuacao;
	//Pergunta 55
	strcpy(medias[54].pergunta,"O que acontece com Theoden e Gandalf no pal�cio de 'Meduseld'?");
	strcpy(medias[54].alternativa_A,"Gandalf exorciza Theoden e Rohan volta ao normal");
	strcpy(medias[54].alternativa_B,"Gandalf rouba o cavalo Shadowfax de Theoden e foge");
	strcpy(medias[54].alternativa_C,"Theoden prende Gandalf por tentar desafi�-lo");
	strcpy(medias[54].alternativa_D,"Gandalf tenta exorcizar Theoden e acaba sendo preso por ter seus poderes bloqueados no pal�cio");
	medias[54].pontuacao = pontuacao;
	//Pergunta 56
	strcpy(medias[55].pergunta,"Qual a sequ�ncia correta dos nomes da trilogia de Resident evil?");
	strcpy(medias[55].alternativa_A,"O hospede maldito, apocalypse e extin��o");
	strcpy(medias[55].alternativa_B,"P�s-vida, O hospede maldito e Apocalypse");
	strcpy(medias[55].alternativa_C,"Apocalypse, Extin��o e O hospede maldito");
	strcpy(medias[55].alternativa_D,"Extin��o, Apocalypse e O hospede maldito");
	medias[55].pontuacao = pontuacao;
	//Pergunta 57
	strcpy(medias[56].pergunta,"Em resident evil: O hospede maldito, o local feito para o filme foi?");
	strcpy(medias[56].alternativa_A,"Sede subterr�nea da Umbrella, conhecida como Colm�ia");
	strcpy(medias[56].alternativa_B,"A f�brica Corm�lia");
	strcpy(medias[56].alternativa_C,"Cormely city");
	strcpy(medias[56].alternativa_D,"Sede de gotham city");
	medias[56].pontuacao = pontuacao;
	//Pergunta 58
	strcpy(medias[57].pergunta,"Em Velozes e Furiosos 4, logo no comecinho do filme, o que Dom, Letty e seu pessoal roubam?");
	strcpy(medias[57].alternativa_A,"Gasolina");
	strcpy(medias[57].alternativa_B,"Petr�leo");
	strcpy(medias[57].alternativa_C,"Dinheiro");
	strcpy(medias[57].alternativa_D,"Muni��o");
	medias[57].pontuacao = pontuacao;
	//Pergunta 59
	strcpy(medias[58].pergunta,"Quais s�o os nomes de todos os Integrantes da equipe do Toretto?");
	strcpy(medias[58].alternativa_A,"Dom, Brian, Mia, Roman, Tej, Han, Gisele, Rico, Tego e Vince");
	strcpy(medias[58].alternativa_B,"Mia, Roman, Tej, Gisele, Tego e Vince");
	strcpy(medias[58].alternativa_C,"Dom,Roman, Tej, Han, Gisele, Rico e Vince");
	strcpy(medias[58].alternativa_D,"Dom, Brian, Mia, Hobbs e Elena");
	medias[58].pontuacao = pontuacao;
	//Pergunta 60
	strcpy(medias[60].pergunta,"Qual e a homenagem que Vin Diesel diz no Final de Velozes e Furiosos 7?");
	strcpy(medias[60].alternativa_A,"Eu costumava dizer que vivia s� o momento... E acho que por isso �ramos irm�os, porque voc� tamb�m era assim. N�o importa onde voc� esteja, se a um quilometro de dist�ncia ou do outro lado do mundo... Voc� sempre estar� comigo � sempre sera meu irm�o");
	strcpy(medias[60].alternativa_B,"Nunca � alto o pre�o a pagar pelo privil�gio de pertencer a si mesmo...");
	strcpy(medias[60].alternativa_C,"O amor passa, a amizade volta, mesmo depois de ter dormido um certo tempo");
	strcpy(medias[60].alternativa_D,"O maior erro que voc� pode cometer na vida � o de ficar o tempo todo com medo de cometer algum");
	medias[60].pontuacao = pontuacao;
	
	
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
	strcpy(dificeis[0].pergunta,"Qual � o nome da atriz principal que interpreta o filme 'A culpa � das estrelas'?");
	strcpy(dificeis[0].alternativa_A,"Shailene Woodley");
	strcpy(dificeis[0].alternativa_B,"Lotte verbeek");
	strcpy(dificeis[0].alternativa_C,"Emile Peachey");
	strcpy(dificeis[0].alternativa_D,"Milica Govich");
	dificeis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(dificeis[1].pergunta,"O filme 'A Culpa � Das Estrelas' � dirigido por quem?");
	strcpy(dificeis[1].alternativa_A,"Josh Boone");
	strcpy(dificeis[1].alternativa_B,"Mike mogis");
	strcpy(dificeis[1].alternativa_C,"John green");
	strcpy(dificeis[1].alternativa_D,"Michael Weber");
	dificeis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(dificeis[2].pergunta,"Qual o nome do pai de Willy Wonka, no filme A Fant�stica F�brica de Chocolate?");
	strcpy(dificeis[2].alternativa_A,"Wilbur Wonka");
	strcpy(dificeis[2].alternativa_B,"Jonathan Wonka");
	strcpy(dificeis[2].alternativa_C,"Jorge Wonka");
	strcpy(dificeis[2].alternativa_D,"Christopher Wonka");
	dificeis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(dificeis[3].pergunta,"De onde vieram os Oompa-Loompas, no filme A Fant�stica F�brica de Chocolate?");
	strcpy(dificeis[3].alternativa_A,"Loompal�ndia");
	strcpy(dificeis[3].alternativa_B,"Oompal�polis");
	strcpy(dificeis[3].alternativa_C,"Loompara�so");
	strcpy(dificeis[3].alternativa_D,"Ilha Oompa-Loompa");
	dificeis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(dificeis[4].pergunta,"Qual o nome da assassina que se esconde por tr�s de Esther, no filme A �rf�?");
	strcpy(dificeis[4].alternativa_A,"Leena Klammer");
	strcpy(dificeis[4].alternativa_B,"Sophie Papperman");
	strcpy(dificeis[4].alternativa_C,"Aryana Shawer");
	strcpy(dificeis[4].alternativa_D,"Rosemary Sullivan");
	dificeis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(dificeis[5].pergunta,"O que Esther fazia quando John a encontrou no orfanato?");
	strcpy(dificeis[5].alternativa_A,"Pintava quadros");
	strcpy(dificeis[5].alternativa_B,"Vomitava na pia");
	strcpy(dificeis[5].alternativa_C,"Cantava");
	strcpy(dificeis[5].alternativa_D,"Dan�ava bal�");
	dificeis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(dificeis[6].pergunta,"No filme 'As Cr�nicas de N�rnia - O le�o, a feiticeira e o guarda-roupa' o fauno Tumnus diz � personagem L�cia que durante o ver�o os faunos dan�avam com certas criaturas, quem s�o essas criaturas?");
	strcpy(dificeis[6].alternativa_A,"Dr�ades");
	strcpy(dificeis[6].alternativa_B,"Fadas");
	strcpy(dificeis[6].alternativa_C,"Ninfas");
	strcpy(dificeis[6].alternativa_D,"An�es");
	dificeis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(dificeis[7].pergunta,"Em que ano se passa a hist�ria do filme Atividade Paranormal 2?");
	strcpy(dificeis[7].alternativa_A,"2006");
	strcpy(dificeis[7].alternativa_B,"2000");
	strcpy(dificeis[7].alternativa_C,"2010");
	strcpy(dificeis[7].alternativa_D,"1999");
	dificeis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(dificeis[8].pergunta,"Quem dirigiu o filme Atividade Paranormal 3?");
	strcpy(dificeis[8].alternativa_A,"Henry Joost e Ariel Schulman");
	strcpy(dificeis[8].alternativa_B,"Oren Peli");
	strcpy(dificeis[8].alternativa_C,"Jason Blum");
	strcpy(dificeis[8].alternativa_D,"Christopher B. Landon");
	dificeis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(dificeis[9].pergunta,"Como era o s�mbolo que Dennis achou no arm�rio das garotas(Atividade Paranormal 3) ?");
	strcpy(dificeis[9].alternativa_A,"Um tri�ngulo com um c�rculo no meio");
	strcpy(dificeis[9].alternativa_B,"O rosto de um d�monio desenhado");
	strcpy(dificeis[9].alternativa_C,"Um quadrado com um c�rculo no meio");
	strcpy(dificeis[9].alternativa_D,"Pentagrama");
	dificeis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(dificeis[10].pergunta,"Quem salva a vida de Jake quando ele se perde(Avatar)?");
	strcpy(dificeis[10].alternativa_A,"Neytiri");
	strcpy(dificeis[10].alternativa_B,"Dr. Augustine");
	strcpy(dificeis[10].alternativa_C,"Norm");
	strcpy(dificeis[10].alternativa_D,"Tsu'tey");
	dificeis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(dificeis[11].pergunta,"Como Eytucan morre(Avatar)?");
	strcpy(dificeis[11].alternativa_A,"� atingido por um peda�o de �rvore");
	strcpy(dificeis[11].alternativa_B,"Leva um tiro");
	strcpy(dificeis[11].alternativa_C,"� esmagado pela �rvore-Lar");
	strcpy(dificeis[11].alternativa_D,"� morto por um Thanator");
	dificeis[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(dificeis[12].pergunta,"Quem seria o pr�ximo l�der dos do cl� depois de Eytucan(Avatar)?");
	strcpy(dificeis[12].alternativa_A,"Tsu'Tey");
	strcpy(dificeis[12].alternativa_B,"Neytiri");
	strcpy(dificeis[12].alternativa_C,"Jake");
	strcpy(dificeis[12].alternativa_D,"Moat");
	dificeis[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(dificeis[13].pergunta,"Qual � a miss�o que Moat d� a Neytiri(Avatar)?");
	strcpy(dificeis[13].alternativa_A,"Ela deve ensinar a Jake a l�ngua e os costumes do povo");
	strcpy(dificeis[13].alternativa_B,"Ela deve conhecer Jake e casar-se com ele");
	strcpy(dificeis[13].alternativa_C,"Ela deve conhecer Jake e descobrir qual � o seu objetivo");
	strcpy(dificeis[13].alternativa_D,"Ela deve ensinar Jake a ca�ar e se proteger das criaturas que vivem na floresta");
	dificeis[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(dificeis[14].pergunta,"Qual ator de Batman- O Cavaleiro das Trevas, ganhou o Oscar de melhor ator coadjuvante?");
	strcpy(dificeis[14].alternativa_A,"Heath Ledger");
	strcpy(dificeis[14].alternativa_B,"Michael Caine.");
	strcpy(dificeis[14].alternativa_C,"Morgan Freeman");
	strcpy(dificeis[14].alternativa_D,"Liam Neeson");
	dificeis[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(dificeis[15].pergunta,"Batman- O cavaleiro das Trevas foi lan�ado dia 18 de julho do ano de:");
	strcpy(dificeis[15].alternativa_A,"2008");
	strcpy(dificeis[15].alternativa_B,"2005");
	strcpy(dificeis[15].alternativa_C,"2010");
	strcpy(dificeis[15].alternativa_D,"2007");
	dificeis[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(dificeis[16].pergunta,"Batman: O cavaleiro das Trevas teve um desempenho muito melhor em rela��o a pr�mios do que seu antecessor, Batman Begins, que contou apenas com uma indica��o ao Oscar e tr�s ao BAFTA. Sabendo disso, quantos Oscars Batman: O cavaleiro das Trevas faturou?");
	strcpy(dificeis[16].alternativa_A,"Dois Oscars, entre os quais melhor ator coadjuvante e Melhor edi��o de som, de 8 indica��es");
	strcpy(dificeis[16].alternativa_B,"Um Oscar de melhor ator Coadjuvante ou Secund�rio e outras 7 indica��es");
	strcpy(dificeis[16].alternativa_C,"Tr�s Oscars, entre os quais melhor ator, melhor atriz e melhor ator coadjuvante ou secund�rio e outras 5 indica��es");
	strcpy(dificeis[16].alternativa_D,"Um Oscar de melhor ator");
	dificeis[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(dificeis[17].pergunta,"Qual era a verdadeira identidade do Soldado Invernal(Capit�o Am�rica 2: O Soldado Invernal)?");
	strcpy(dificeis[17].alternativa_A,"Bucky Barners");
	strcpy(dificeis[17].alternativa_B,"Buck Baners");
	strcpy(dificeis[17].alternativa_C,"Buky Barners");
	strcpy(dificeis[17].alternativa_D,"Buck Barners");
	dificeis[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(dificeis[18].pergunta,"Qual era o objetivo do projeto 'Insight'(Capit�o Am�rica 2: O Soldado Invernal)?");
	strcpy(dificeis[18].alternativa_A,"Colocar porta avi�es sobre regi�es que poderiam apresentar amea�as");
	strcpy(dificeis[18].alternativa_B,"Matar todos os super-her�is do mundo");
	strcpy(dificeis[18].alternativa_C,"Dominar o mundo");
	strcpy(dificeis[18].alternativa_D,"Destruir a S.H.I.E.L.D.");
	dificeis[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(dificeis[19].pergunta,"Um personagem que somente apareceu no segundo filme do Homem de Ferro, tem uma breve apari��o no filme. Quem � esse personagem(Capit�o Am�rica 2: O Soldado Invernal)?");
	strcpy(dificeis[19].alternativa_A,"Senador Stern");
	strcpy(dificeis[19].alternativa_B,"Howard Stark");
	strcpy(dificeis[19].alternativa_C,"Nick Fury");
	strcpy(dificeis[19].alternativa_D,"Ivan Vanko");
	dificeis[19].pontuacao = pontuacao;
	//Pergunta 21
	strcpy(dificeis[20].pergunta,"Um vil�o muito famoso do Capit�o Am�rica, aparece no filme, embora ainda n�o tenha se transformado no seu alter-ego dos quadrinhos. Qual o nome desse vil�o(Capit�o Am�rica 2: O Soldado Invernal)?");
	strcpy(dificeis[20].alternativa_A,"Ossos Cruzados");
	strcpy(dificeis[20].alternativa_B,"Alexander Pierce");
	strcpy(dificeis[20].alternativa_C,"Bar�o Zemo");
	strcpy(dificeis[20].alternativa_D,"Bar�o Sangue");
	dificeis[20].pontuacao = pontuacao;
	//Pergunta 22
	strcpy(dificeis[21].pergunta,"Quem apresentava seus projetos na feira em que Steve Rogers foi com seu amigo(Capit�o Am�rica: O Primeiro Vingador)?");
	strcpy(dificeis[21].alternativa_A,"Howard Stark");
	strcpy(dificeis[21].alternativa_B,"Dr. Banner");
	strcpy(dificeis[21].alternativa_C,"Dr. Skinner");
	strcpy(dificeis[21].alternativa_D,"James Wally");
	dificeis[21].pontuacao = pontuacao;
	//Pergunta 23
	strcpy(dificeis[22].pergunta,"Que frase de Peggy Carter fez o Capit�o ter a iniciativa de tentar resgatar os soldados da 107(Capit�o Am�rica: O Primeiro Vingador)?");
	strcpy(dificeis[22].alternativa_A,"'Seu prop�sito � maior que esse'");
	strcpy(dificeis[22].alternativa_B,"'Voc� tem coragem'");
	strcpy(dificeis[22].alternativa_C,"'Voc� consegue'");
	strcpy(dificeis[22].alternativa_D,"'Acho que se sairia bem'");
	dificeis[22].pontuacao = pontuacao;
	//Pergunta 24
	strcpy(dificeis[23].pergunta,"Qual � o drag�o que possui duas cabe�as(Como Treinar o seu Drag�o)?");
	strcpy(dificeis[23].alternativa_A,"Ziperarrepiante");
	strcpy(dificeis[23].alternativa_B,"Gronkel");
	strcpy(dificeis[23].alternativa_C,"Terror Terr�vel");
	strcpy(dificeis[23].alternativa_D,"F�ria da Noite");
	dificeis[23].pontuacao = pontuacao;
	//Pergunta 25
	strcpy(dificeis[24].pergunta,"Quem � o diretor do filme 'Como Treinar o Seu Drag�o 2'?");
	strcpy(dificeis[24].alternativa_A,"Dean DeBlois");
	strcpy(dificeis[24].alternativa_B,"Angelina Jolie");
	strcpy(dificeis[24].alternativa_C,"Peter Tolan");
	strcpy(dificeis[24].alternativa_D,"America Ferrera");
	dificeis[24].pontuacao = pontuacao;
	//Pergunta 26
	strcpy(dificeis[25].pergunta,"Qual � o Nome da M�e de Bella(Crep�sculo)?");
	strcpy(dificeis[25].alternativa_A,"Ren�e");
	strcpy(dificeis[25].alternativa_B,"Rene");
	strcpy(dificeis[25].alternativa_C,"Rene�");
	strcpy(dificeis[25].alternativa_D,"Renata");
	dificeis[25].pontuacao = pontuacao;
	//Pergunta 27
	strcpy(dificeis[26].pergunta,"Qual a Profiss�o de Carlisle no Filme e no Livro Crep�sculo?");
	strcpy(dificeis[26].alternativa_A,"M�dico");
	strcpy(dificeis[26].alternativa_B,"Engenheiro");
	strcpy(dificeis[26].alternativa_C,"Professor");
	strcpy(dificeis[26].alternativa_D,"Enfermeiro");
	dificeis[26].pontuacao = pontuacao;
	//Pergunta 28
	strcpy(dificeis[27].pergunta,"Qual o nome completo do vampiro precursor da fam�lia Cullen(Crespuculo - Lua Nova)?");
	strcpy(dificeis[27].alternativa_A,"Carlisle Cullen");
	strcpy(dificeis[27].alternativa_B,"Carliste Cullem");
	strcpy(dificeis[27].alternativa_C,"Carlise Cullen");
	strcpy(dificeis[27].alternativa_D,"Caroliste Culen");
	dificeis[27].pontuacao = pontuacao;
	//Pergunta 29
	strcpy(dificeis[28].pergunta,"Em que ano Esme Cullen foi tranformada em vampiro(Crespuculo - Lua Nova)?");
	strcpy(dificeis[28].alternativa_A,"1921");
	strcpy(dificeis[28].alternativa_B,"1784");
	strcpy(dificeis[28].alternativa_C,"1685");
	strcpy(dificeis[28].alternativa_D,"1987");
	dificeis[28].pontuacao = pontuacao;
	//Pergunta 30
	strcpy(dificeis[29].pergunta,"Originalmente, quem dubla, respectivamente, Anna, Elsa (n�o mais crian�as) e Olaf(Frozen - Uma Aventura Congelante)?");
	strcpy(dificeis[29].alternativa_A,"Kristen Bell, Idina Menzel e Josh Gad");
	strcpy(dificeis[29].alternativa_B,"Eva Bella, Edie McClurg e Chris Williams");
	strcpy(dificeis[29].alternativa_C,"Livvy Stubenrauch, Kristen Bell e Jonathan Groff");
	strcpy(dificeis[29].alternativa_D,"Kristen Menzel, Idina Fontana e Ciar�n Hinds");
	dificeis[29].pontuacao = pontuacao;
	//Pergunta 31
	strcpy(dificeis[30].pergunta,"Na dublagem original, Anna � deixada por Hans para morrer, Olaf a encontra e acende a lareira para manter a princesa aquecida. Em pouco tempo, Anna diz que ele est� derretendo. O que Olaf responde(Frozen - Uma Aventura Congelante)?");
	strcpy(dificeis[30].alternativa_A,"'Some people are worth melting for'");
	strcpy(dificeis[30].alternativa_B,"'Beware the frozen heart'");
	strcpy(dificeis[30].alternativa_C,"'The cold never bothered me anyway'");
	strcpy(dificeis[30].alternativa_D,"'Hi, I'm Olaf, and I like warm hugs'");
	dificeis[30].pontuacao = pontuacao;
	//Pergunta 32
	strcpy(dificeis[31].pergunta,"Quem dirigiu Frozen?");
	strcpy(dificeis[31].alternativa_A,"Chris Buck e Jennifer Lee");
	strcpy(dificeis[31].alternativa_B,"Pierre Coffin e Chris Renaud");
	strcpy(dificeis[31].alternativa_C,"Tim Burton e Mike Johnson");
	strcpy(dificeis[31].alternativa_D,"Cody Cameron e Kris Pearn");
	dificeis[31].pontuacao = pontuacao;
	//Pergunta 33
	strcpy(dificeis[32].pergunta,"No primeiro jogo de quadribol que Harry jogou, antes dele pegar o Pomo de Ouro quanto estava o placar do jogo entre grifinoria e sonserina respectivamente?");
	strcpy(dificeis[32].alternativa_A,"20 x 20");
	strcpy(dificeis[32].alternativa_B,"20 x 30");
	strcpy(dificeis[32].alternativa_C,"10 x 10");
	strcpy(dificeis[32].alternativa_D,"20 x 40");
	dificeis[32].pontuacao = pontuacao;
	//Pergunta 34
	strcpy(dificeis[33].pergunta,"Em uma aula de 'Defesa contra as artes das trevas' o professor Lockhart ensina sobre Diabretes da Cornoalia e solta eles na sala mais n�o consegue controla-los e eles acabam destruindo toda a sala. Quem e como consegue parar eles?");
	strcpy(dificeis[33].alternativa_A,"Hermione usando o feiti�o imobilus");
	strcpy(dificeis[33].alternativa_B,"Harry usando o feiti�o imobilus");
	strcpy(dificeis[33].alternativa_C,"Rony usando o feiti�o imobilus");
	strcpy(dificeis[33].alternativa_D,"Harry usando o feiti�o petrificus totalus");
	dificeis[33].pontuacao = pontuacao;
	//Pergunta 35
	strcpy(dificeis[34].pergunta,"Dos quatro marotos que existiam, tr�s eram animagos e um era lobisomem, Remo(Aluado) era o lobisomem e Tiago(Pontas), Sirius(Almofadinhas) e Pedro(Rabicho) eram animagos. Em que animais Tiago, Sirius e Pedro podiam se transformar respectivamente(Harry Potter)?");
	strcpy(dificeis[34].alternativa_A,"Cervo, C�o e Rato");
	strcpy(dificeis[34].alternativa_B,"Corsa, C�o e Gato");
	strcpy(dificeis[34].alternativa_C,"Cervo, Pantera e Rato");
	strcpy(dificeis[34].alternativa_D,"Veado, C�o e Rato");
	dificeis[34].pontuacao = pontuacao;
	//Pergunta 36
	strcpy(dificeis[35].pergunta,"Bartolomeu Crouch Jr disfar�ado de Alastor Moody ensinou para os alunos as maldi��es imperdo�veis, ensinando a eles sobre a maldi��o imperius, a maldi��o cruciatus e a maldi��o da morte(Avada Kedavra). Ele demonstrou a maldi��o da morte na sala matando que animal?aranha");
	strcpy(dificeis[35].alternativa_A,"aranha");
	strcpy(dificeis[35].alternativa_B,"cobra");
	strcpy(dificeis[35].alternativa_C,"rato");
	strcpy(dificeis[35].alternativa_D,"minhoca");
	dificeis[35].pontuacao = pontuacao;
	//Pergunta 37
	strcpy(dificeis[36].pergunta,"Em 'Harry Potter e a ordem da f�nix' Cho quando est� fazendo um feiti�o de levita��o se distrai ao olhar para Harry e a pessoa que ela est� levitando cai. Quem ela estava levitando?");
	strcpy(dificeis[36].alternativa_A,"Colin Creevey");
	strcpy(dificeis[36].alternativa_B,"Fred Weasley");
	strcpy(dificeis[36].alternativa_C,"Ronald Weasley");
	strcpy(dificeis[36].alternativa_D,"Gina Weasley");
	dificeis[36].pontuacao = pontuacao;
	//Pergunta 38
	strcpy(dificeis[37].pergunta,"Em 'Harry Potter e as rel�quias da morte parte 2' qual � o feiti�o que Minerva diz que sempre quis fazer?");
	strcpy(dificeis[37].alternativa_A,"Piertotum Locomotor");
	strcpy(dificeis[37].alternativa_B,"Asc�ndio");
	strcpy(dificeis[37].alternativa_C,"Estupore");
	strcpy(dificeis[37].alternativa_D,"Colloportus");
	dificeis[37].pontuacao = pontuacao;
	//Pergunta 39
	strcpy(dificeis[38].pergunta,"Quais atores interpretaram, respectivamente, o homem aranha 1 e o Espetacular homem aranha?");
	strcpy(dificeis[38].alternativa_A,"Tobey Maguire e Andrew Garfield");
	strcpy(dificeis[38].alternativa_B,"Emma Stone e Robert Pattison");
	strcpy(dificeis[38].alternativa_C,"Andrew Garfield e Tobey Maguire");
	strcpy(dificeis[38].alternativa_D,"Johnny Depp e Tobey Maguire");
	dificeis[38].pontuacao = pontuacao;
	//Pergunta 40
	strcpy(dificeis[39].pergunta,"Qual o modelo do exterminador que veio matar Sarah Connor(Exterminador do Futuro)?");
	strcpy(dificeis[39].alternativa_A,"T-800");
	strcpy(dificeis[39].alternativa_B,"T-888");
	strcpy(dificeis[39].alternativa_C,"T-1000");
	strcpy(dificeis[39].alternativa_D,"T-600");
	dificeis[39].pontuacao = pontuacao;
	//Pergunta 41
	strcpy(dificeis[40].pergunta,"Qual personagem de 'O Senhor dos An�is' foi introduzido no filme, mas n�o existe no livro?");
	strcpy(dificeis[40].alternativa_A,"Legolas");
	strcpy(dificeis[40].alternativa_B,"Gandalf");
	strcpy(dificeis[40].alternativa_C,"Bilbo Bolseiro");
	strcpy(dificeis[40].alternativa_D,"Radagast, o Castanho");
	dificeis[40].pontuacao = pontuacao;
	//Pergunta 42
	strcpy(dificeis[41].pergunta,"Quem � o Necromante(O Hobbit: A Desola��o de Smaug)?");
	strcpy(dificeis[41].alternativa_A,"Sauron");
	strcpy(dificeis[41].alternativa_B,"Thrain");
	strcpy(dificeis[41].alternativa_C,"Thranduil");
	strcpy(dificeis[41].alternativa_D,"Saruman, o Branco");
	dificeis[41].pontuacao = pontuacao;
	//Pergunta 43
	strcpy(dificeis[42].pergunta,"Quem conseguiu salvar Killi do veneno da l�mina morghul(O Hobbit: A Desola��o de Smaug)?");
	strcpy(dificeis[42].alternativa_A,"Tauriel");
	strcpy(dificeis[42].alternativa_B,"Legolas");
	strcpy(dificeis[42].alternativa_C,"Gandalf");
	strcpy(dificeis[42].alternativa_D,"Thranduil");
	dificeis[42].pontuacao = pontuacao;
	//Pergunta 44
	strcpy(dificeis[43].pergunta,"Qual o nome do tio de Frodo que lhe deixa o Bols�o?");
	strcpy(dificeis[43].alternativa_A,"Bilbo Balseiro");
	strcpy(dificeis[43].alternativa_B,"Bilbo Brandebuque");
	strcpy(dificeis[43].alternativa_C,"Bilbo T�k");
	strcpy(dificeis[43].alternativa_D,"Urratouro T�k");
	dificeis[43].pontuacao = pontuacao;
	//Pergunta 45
	strcpy(dificeis[44].pergunta,"Quais os outros poss�veis nomes dados � Valfenda?");
	strcpy(dificeis[44].alternativa_A,"Rivendel e Imladris");
	strcpy(dificeis[44].alternativa_B,"Imladris e Emin Muil");
	strcpy(dificeis[44].alternativa_C,"Rivendel e Erebor");
	strcpy(dificeis[44].alternativa_D,"Imladris e Eriador");
	dificeis[44].pontuacao = pontuacao;
	//Pergunta 46
	strcpy(dificeis[45].pergunta,"Quem Aragorn v� morta no Palant�r?");
	strcpy(dificeis[45].alternativa_A,"Arwen");
	strcpy(dificeis[45].alternativa_B,"Galadriel");
	strcpy(dificeis[45].alternativa_C,"�owyn");
	strcpy(dificeis[45].alternativa_D,"Tauriel");
	dificeis[45].pontuacao = pontuacao;
	//Pergunta 47
	strcpy(dificeis[46].pergunta,"Resident evil teve muitos vil�es, dentre doutores, prefeitos e civis qual destes foi o que causou o p�nico no mundo?");
	strcpy(dificeis[46].alternativa_A,"Um assistente");
	strcpy(dificeis[46].alternativa_B,"Um juiz");
	strcpy(dificeis[46].alternativa_C,"Um civil");
	strcpy(dificeis[46].alternativa_D,"Um militar");
	dificeis[46].pontuacao = pontuacao;
	//Pergunta 48
	strcpy(dificeis[47].pergunta,"Depois do Primeiro Jedi Purgo, quem reconstruiu � Ordem Jedi?");
	strcpy(dificeis[47].alternativa_A,"Meetra Surik e os Jedi Perdidos");
	strcpy(dificeis[47].alternativa_B,"Luke Skywalker e os Jedi Perdidos");
	strcpy(dificeis[47].alternativa_C,"Revan e os Jedi Perdidos");
	strcpy(dificeis[47].alternativa_D,"Bastila Shan e os Jedi Perdidos");
	dificeis[47].pontuacao = pontuacao;
	//Pergunta 49
	strcpy(dificeis[48].pergunta,"Quem foi o (a) Jedi, que descendente de dois poderosos cavaleiros, foi Gr�o-Mestre da Ordem Jedi na Era da Velha R�publica?");
	strcpy(dificeis[48].alternativa_A,"Satele Shan");
	strcpy(dificeis[48].alternativa_B,"Bouris Algo");
	strcpy(dificeis[48].alternativa_C,"Dar'Nala");
	strcpy(dificeis[48].alternativa_D,"Zym");
	dificeis[48].pontuacao = pontuacao;
	//Pergunta 50
	strcpy(dificeis[49].pergunta,"Por que o amor rom�ntico, n�o era incentivado pelos Jedi da Velha Ordem e nem pelos Sith?");
	strcpy(dificeis[49].alternativa_A,"Para os Jedi, qualquer liga��o e apego levava para o Lado Sombrio, e para os Sith, o amor os deixava mais vulneraveis e fracos com o Lado Sombrio");
	strcpy(dificeis[49].alternativa_B,"Porque os Jedi n�o deviam ter emo��es, tinham que ser frios e racionais; e para os Sith, emo��es positivas como o amor, eram in�teis com o Lado Sombrio");
	strcpy(dificeis[49].alternativa_C,"Para os Jedi, o amor era perda de tempo, e para os Sith, tamb�m");
	strcpy(dificeis[49].alternativa_D,"Porque para os Jedi, compromisso n�o era algo bom; e para os Sith, o amor os deixava mais fracos");
	dificeis[49].pontuacao = pontuacao;
	//Pergunta 51
	strcpy(dificeis[50].pergunta,"Qual foi o Jedi, que � partir de seu sacr�ficio, eliminou os Sith como uma amea�a gal�ctica durante mil anos?");
	strcpy(dificeis[50].alternativa_A,"Lord Hoth");
	strcpy(dificeis[50].alternativa_B,"Yoda");
	strcpy(dificeis[50].alternativa_C,"Anakin Skywalker");
	strcpy(dificeis[50].alternativa_D,"Nomi Sunrider");
	dificeis[50].pontuacao = pontuacao;
	//Pergunta 52
	strcpy(dificeis[51].pergunta,"Quem foi que destruiu os Sith e restaurou o equilibrio para � For�a na Batalha de Endor?");
	strcpy(dificeis[51].alternativa_A,"Anakin Skywalker");
	strcpy(dificeis[51].alternativa_B,"Galen Marek");
	strcpy(dificeis[51].alternativa_C,"Lord Hoth");
	strcpy(dificeis[51].alternativa_D,"Luke Skywalker");
	dificeis[51].pontuacao = pontuacao;
	//Pergunta 53
	strcpy(dificeis[52].pergunta,"Em Velozes e Furiosos 4, o que Dom deixa a Letty antes de ir embora?");
	strcpy(dificeis[52].alternativa_A,"Um colar");
	strcpy(dificeis[52].alternativa_B,"Uma pulseira");
	strcpy(dificeis[52].alternativa_C,"Um CD");
	strcpy(dificeis[52].alternativa_D,"Um Livro");
	dificeis[52].pontuacao = pontuacao;
	//Pergunta 54
	strcpy(dificeis[53].pergunta,"Quantos integrantes tem na equipe de Dominic Toretto?");
	strcpy(dificeis[53].alternativa_A,"10");
	strcpy(dificeis[53].alternativa_B,"15");
	strcpy(dificeis[53].alternativa_C,"9");
	strcpy(dificeis[53].alternativa_D,"7");
	dificeis[53].pontuacao = pontuacao;
	//Pergunta 55
	strcpy(dificeis[54].pergunta,"Qual o or�amento do filme Velozes e Furiosos 7?");
	strcpy(dificeis[54].alternativa_A,"US$ 250 milh�es");
	strcpy(dificeis[54].alternativa_B,"US$ 190 milh�es");
	strcpy(dificeis[54].alternativa_C,"US$ 271 milh�es");
	strcpy(dificeis[54].alternativa_D,"US$ 30 milh�es");
	dificeis[54].pontuacao = pontuacao;
	//Pergunta 56
	strcpy(dificeis[55].pergunta,"Qual � a Frase que Dominic diz no filme Velozes e Furiosos 5?");
	strcpy(dificeis[55].alternativa_A,"Dinheiro vem e vai, a gente sabe disso. A coisa mais importante na vida s�o sempre as pessoas que est�o nessa sala, bem aqui e agora, sa�de Fam�lia");
	strcpy(dificeis[55].alternativa_B,"Levo a minha vida 1 Km de cada vez, nada mais importa, durante aqueles 10 segundos ou menos eu sou livre!");
	strcpy(dificeis[55].alternativa_C,"N�o importa se foram 10 cent�metros, ou 10 quil�metros. Vencer � vencer");
	strcpy(dificeis[55].alternativa_D,"50% DE ALGUMA COISA � MELHOR DO QUE 100% DE NADA");
	dificeis[55].pontuacao = pontuacao;
	//Pergunta 57
	strcpy(dificeis[56].pergunta,"O famoso colar de diamante destacado no filme se chama Le Coeur de La Mer, e qual � sua tradu��o (significado)?");
	strcpy(dificeis[56].alternativa_A,"O Cora��o do Oceano");
	strcpy(dificeis[56].alternativa_B,"A Mensagem do Cora��o");
	strcpy(dificeis[56].alternativa_C,"O Cora��o Cruel");
	strcpy(dificeis[56].alternativa_D,"A Mensagem do Oceano");
	dificeis[56].pontuacao = pontuacao;
	//Pergunta 58
	strcpy(dificeis[57].pergunta,"Sobre o famoso filme de James Cameron, Titanic: Qual o nome dos protagonistas?");
	strcpy(dificeis[57].alternativa_A,"Leonardo DiCaprio e Kate Winslet");
	strcpy(dificeis[57].alternativa_B,"Drew Barrymore e Leonardo DiCaprio");
	strcpy(dificeis[57].alternativa_C,"Johnny Depp e Drew Barrymore");
	strcpy(dificeis[57].alternativa_D,"Kate Winslet e Johnny Depp");
	dificeis[57].pontuacao = pontuacao;
	//Pergunta 59
	strcpy(dificeis[58].pergunta,"Quantos pr�mios Oscar o filme Titanic foi indicado e quantos ganhou?");
	strcpy(dificeis[58].alternativa_A,"Indicado:14 Ganhou:11");
	strcpy(dificeis[58].alternativa_B,"Indicado:11 Ganhou:11");
	strcpy(dificeis[58].alternativa_C,"Indicado:14 Ganhou:13");
	strcpy(dificeis[58].alternativa_D,"Indicado:13 Ganhou:13");
	dificeis[58].pontuacao = pontuacao;
	//Pergunta 60
	strcpy(dificeis[59].pergunta,"Em que ano foi lan�ado o filme Titanic? E em que ano ser� reestreado no cinema em vers�o 3D? (Segundo o diretor James Cameron)");
	strcpy(dificeis[59].alternativa_A,"Lan�amento:1997 Reestreia:2012");
	strcpy(dificeis[59].alternativa_B,"Lan�amento:1997 Reestreia:2011");
	strcpy(dificeis[59].alternativa_C,"Lan�amento:1997 Reestreia:2011");
	strcpy(dificeis[59].alternativa_D,"Lan�amento:1995 Reestreia:2012");
	dificeis[59].pontuacao = pontuacao;
	//Pergunta 60
	strcpy(dificeis[0].pergunta,"O famoso colar de diamante destacado no filme se chama Le Coeur de La Mer, e qual � sua tradu��o (significado)?");
	strcpy(dificeis[0].alternativa_A,"O Cora��o do Oceano");
	strcpy(dificeis[0].alternativa_B,"A Mensagem do Cora��o");
	strcpy(dificeis[0].alternativa_C,"O Cora��o Cruel");
	strcpy(dificeis[0].alternativa_D,"A Mensagem do Oceano");
	dificeis[0].pontuacao = pontuacao;
	
	
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
	strcpy(muito_dificeis[0].pergunta,"O que passa boiando (antes de Will Turner) pelo navio em que Elizabeth est� na primeira cena do primeiro filme(Piratas do Caribe)?");
	strcpy(muito_dificeis[0].alternativa_A,"Uma sombrinha");
	strcpy(muito_dificeis[0].alternativa_B,"Um barril");
	strcpy(muito_dificeis[0].alternativa_C,"Um vestido");
	strcpy(muito_dificeis[0].alternativa_D,"Nada");
	muito_dificeis[0].pontuacao = pontuacao;
	//Pergunta 2
	strcpy(muito_dificeis[1].pergunta,"Quantos anos Davey Jones permitiu que Jack Sparrow fosse capit�o do P�rola Negra(Piratas do Caribe)?");
	strcpy(muito_dificeis[1].alternativa_A,"13 anos");
	strcpy(muito_dificeis[1].alternativa_B,"10 anos");
	strcpy(muito_dificeis[1].alternativa_C,"20 anos");
	strcpy(muito_dificeis[1].alternativa_D,"11 anos");
	muito_dificeis[1].pontuacao = pontuacao;
	//Pergunta 3
	strcpy(muito_dificeis[2].pergunta,"O que Will Turner diz ao chegar na ilha no instante em que Jack Sparrow, Elizabeth Swann e James Norrington encontram o cora��o de Davey Jones(Piratas do Caribe)?");
	strcpy(muito_dificeis[2].alternativa_A,"'E com boa raz�o'");
	strcpy(muito_dificeis[2].alternativa_B,"'Voc� est� certo'");
	strcpy(muito_dificeis[2].alternativa_C,"'Faz sentido'");
	strcpy(muito_dificeis[2].alternativa_D,"'Tem certeza'");
	muito_dificeis[2].pontuacao = pontuacao;
	//Pergunta 4
	strcpy(muito_dificeis[3].pergunta,"Quem fica com o cora��o no final do segundo filme(Piratas do Caribe)?");
	strcpy(muito_dificeis[3].alternativa_A,"Lorde Beckett");
	strcpy(muito_dificeis[3].alternativa_B,"Jack Sparrow");
	strcpy(muito_dificeis[3].alternativa_C,"Barbossa");
	strcpy(muito_dificeis[3].alternativa_D,"Mr. Gibbs");
	muito_dificeis[3].pontuacao = pontuacao;
	//Pergunta 5
	strcpy(muito_dificeis[4].pergunta,"Em que ilha no Caribe foram gravadas a maioria das cenas do segundo filme(Piratas do Caribe)?");
	strcpy(muito_dificeis[4].alternativa_A,"Dominica");
	strcpy(muito_dificeis[4].alternativa_B,"Porto Pr�ncipe");
	strcpy(muito_dificeis[4].alternativa_C,"Rep�blica Dominicana");
	strcpy(muito_dificeis[4].alternativa_D,"Saint James");
	muito_dificeis[4].pontuacao = pontuacao;
	//Pergunta 6
	strcpy(muito_dificeis[5].pergunta,"Qual o nome da m�sica que toca como trilha sonora no terceiro filme quando o navio est� virando de cabe�a para baixo(Piratas do Caribe)?");
	strcpy(muito_dificeis[5].alternativa_A,"Up is down");
	strcpy(muito_dificeis[5].alternativa_B,"He's a pirate");
	strcpy(muito_dificeis[5].alternativa_C,"Two hornpipes");
	strcpy(muito_dificeis[5].alternativa_D,"What shall we die for");
	muito_dificeis[5].pontuacao = pontuacao;
	//Pergunta 7
	strcpy(muito_dificeis[6].pergunta,"No segundo filme, Will desmaia ao ser atingido na cabe�a por objeto. Qual era esse objeto e quem bateu nele(Piratas do Caribe)?");
	strcpy(muito_dificeis[6].alternativa_A,"Remos - Jack Sparrow");
	strcpy(muito_dificeis[6].alternativa_B,"P� - James Norrington");
	strcpy(muito_dificeis[6].alternativa_C,"P� - Pintel e Ragetti");
	strcpy(muito_dificeis[6].alternativa_D,"Revolver - Jack sparrow");
	muito_dificeis[6].pontuacao = pontuacao;
	//Pergunta 8
	strcpy(muito_dificeis[7].pergunta,"Em quem M�stica se transformou para distrair Azazel para que Fera o atacasse?");
	strcpy(muito_dificeis[7].alternativa_A,"Sebastian Shaw");
	strcpy(muito_dificeis[7].alternativa_B,"Emma Frost");
	strcpy(muito_dificeis[7].alternativa_C,"Professor Xavier");
	strcpy(muito_dificeis[7].alternativa_D,"Magneto");
	muito_dificeis[7].pontuacao = pontuacao;
	//Pergunta 9
	strcpy(muito_dificeis[8].pergunta,"Sebastian Shaw usou os poderes de qual mutante para matar Darwin?");
	strcpy(muito_dificeis[8].alternativa_A,"Destrutor");
	strcpy(muito_dificeis[8].alternativa_B,"Banshee");
	strcpy(muito_dificeis[8].alternativa_C,"M�stica");
	strcpy(muito_dificeis[8].alternativa_D,"Fera");
	muito_dificeis[8].pontuacao = pontuacao;
	//Pergunta 10
	strcpy(muito_dificeis[9].pergunta,"Qual desses mutantes n�o trabalhou para Stryker?");
	strcpy(muito_dificeis[9].alternativa_A,"Emma Frost");
	strcpy(muito_dificeis[9].alternativa_B,"John Wraith");
	strcpy(muito_dificeis[9].alternativa_C,"Deadpool");
	strcpy(muito_dificeis[9].alternativa_D,"Agente Zero");
	muito_dificeis[9].pontuacao = pontuacao;
	//Pergunta 11
	strcpy(muito_dificeis[10].pergunta,"Qual mutante fez uma tatuagem da namorada no bra�o?");
	strcpy(muito_dificeis[10].alternativa_A,"Blob");
	strcpy(muito_dificeis[10].alternativa_B,"John Wraith");
	strcpy(muito_dificeis[10].alternativa_C,"Dentes de Sabre");
	strcpy(muito_dificeis[10].alternativa_D,"Deadpool");
	muito_dificeis[10].pontuacao = pontuacao;
	//Pergunta 12
	strcpy(muito_dificeis[11].pergunta,"Quando fogem da mans�o, para casa de qual mutante, Wolverine e outros mutantes v�o?");
	strcpy(muito_dificeis[11].alternativa_A,"Homem de Gelo");
	strcpy(muito_dificeis[11].alternativa_B,"Vampira");
	strcpy(muito_dificeis[11].alternativa_C,"Colossus");
	strcpy(muito_dificeis[11].alternativa_D,"Ciclope");
	muito_dificeis[11].pontuacao = pontuacao;
	//Pergunta 13
	strcpy(muito_dificeis[12].pergunta,"Qual desses mutantes foi capturado pelo governo?");
	strcpy(muito_dificeis[12].alternativa_A,"Homem M�ltiplo");
	strcpy(muito_dificeis[12].alternativa_B,"Fan�tico");
	strcpy(muito_dificeis[12].alternativa_C,"Callisto");
	strcpy(muito_dificeis[12].alternativa_D,"Magneto");
	muito_dificeis[12].pontuacao = pontuacao;
	//Pergunta 14
	strcpy(muito_dificeis[13].pergunta,"Que mutante atacou Wolverine na floresta?");
	strcpy(muito_dificeis[13].alternativa_A,"Spike");
	strcpy(muito_dificeis[13].alternativa_B,"Psylocke");
	strcpy(muito_dificeis[13].alternativa_C,"Quill");
	strcpy(muito_dificeis[13].alternativa_D,"Callisto");
	muito_dificeis[13].pontuacao = pontuacao;
	//Pergunta 15
	strcpy(muito_dificeis[14].pergunta,"Os filmes 007 j� tiveram a presen�a de muitos vil�es e seus grandes planos.No filme '007 contra chantagem at�mica', qual foi o nome do vil�o?");
	strcpy(muito_dificeis[14].alternativa_A,"Em�lio Largo");
	strcpy(muito_dificeis[14].alternativa_B,"Julious No");
	strcpy(muito_dificeis[14].alternativa_C,"Kamal Khan");
	strcpy(muito_dificeis[14].alternativa_D,"Rosa Klebb");
	muito_dificeis[14].pontuacao = pontuacao;
	//Pergunta 16
	strcpy(muito_dificeis[15].pergunta,"As cria��es de 'Q' sempre foram essenciais para as miss�es de Bond.No filme 'Moscou contra 007', qual foi o material que salvou Bond de uma poss�vel morte?");
	strcpy(muito_dificeis[15].alternativa_A,"Uma faca que sai de dentro de uma maleta");
	strcpy(muito_dificeis[15].alternativa_B,"Um rel�gio magn�tico");
	strcpy(muito_dificeis[15].alternativa_C,"Um g�s que � liberado por meio de um rel�gio");
	strcpy(muito_dificeis[15].alternativa_D,"Uma simples arma");
	muito_dificeis[15].pontuacao = pontuacao;
	//Pergunta 17
	strcpy(muito_dificeis[16].pergunta,"Observe as sequ�ncias dos filmes e marque, respectivamente, o ator de cada: (1)007 contra Goldfinger (2)007 contra o foguete da morte(3)007 contra Octopussy(4)007 o mundo n�o � o bastante.");
	strcpy(muito_dificeis[16].alternativa_A,"Roger Moore, Sean Connery, Sean Connery, Pearse Brosman");
	strcpy(muito_dificeis[16].alternativa_B,"Sean Connery, Roger Moore, Roger Moore, Daniel Craing");
	strcpy(muito_dificeis[16].alternativa_C,"Sean Connery, Roger Moore, Roger Moore, Timothy Dalton");
	strcpy(muito_dificeis[16].alternativa_D,"Sean Connery, Roger Moore, Roger Moore, Pearse Brosman");
	muito_dificeis[16].pontuacao = pontuacao;
	//Pergunta 18
	strcpy(muito_dificeis[17].pergunta,"A sra Monneypanny � um secret�ria de 'M' apaixonada pelo agente 007.Por quantas atrizes ela j� foi interpretada?");
	strcpy(muito_dificeis[17].alternativa_A,"3");
	strcpy(muito_dificeis[17].alternativa_B,"2");
	strcpy(muito_dificeis[17].alternativa_C,"4");
	strcpy(muito_dificeis[17].alternativa_D,"5");
	muito_dificeis[17].pontuacao = pontuacao;
	//Pergunta 19
	strcpy(muito_dificeis[18].pergunta,"Qual foi o nome do primeiro carro de 007 e em que filme ele aparece?");
	strcpy(muito_dificeis[18].alternativa_A,"Aston Martin, 007 contra Goldfinger");
	strcpy(muito_dificeis[18].alternativa_B,"Aston Martin, 007 contra o homem da pistola de ouro");
	strcpy(muito_dificeis[18].alternativa_C,"Aston Martin, 007 contra chantagem at�mica");
	strcpy(muito_dificeis[18].alternativa_D,"Corveti, 007 contra goldfinger");
	muito_dificeis[18].pontuacao = pontuacao;
	//Pergunta 20
	strcpy(muito_dificeis[19].pergunta,"Observe as bond girls e marque, respectivamente, as cores do cabelo de cada: (1)Fiona Volpe (2)Tatiana Romanova (3)Domino Derval");
	strcpy(muito_dificeis[19].alternativa_A,"Ruivo, Loiro, Moreno");
	strcpy(muito_dificeis[19].alternativa_B,"Loiro, Loiro, Loiro");
	strcpy(muito_dificeis[19].alternativa_C,"Ruivo, Loira,Ruivo");
	strcpy(muito_dificeis[19].alternativa_D,"Ruivo, Castanho, Loiro");
	muito_dificeis[19].pontuacao = pontuacao;
	//Pergunta 21
	strcpy(muito_dificeis[20].pergunta,"Quem � morto na Mesa de Pedra e que o matou?");
	strcpy(muito_dificeis[20].alternativa_A,"Morto: Aslam e Assassino: Feiticeira Verde");
	strcpy(muito_dificeis[20].alternativa_B,"Morto: Aslam e Assassino: Feiticeira Branca");
	strcpy(muito_dificeis[20].alternativa_C,"Morto: L�cia e Assassino: Principe Tirian");
	strcpy(muito_dificeis[20].alternativa_D,"Morto: Pedro e Assassino: Principe Rillian");
	muito_dificeis[20].pontuacao = pontuacao;
	//Pergunta 22
	strcpy(muito_dificeis[21].pergunta,"Quem s�o os dois meninos que assistem � cria��o de N�rnia?");
	strcpy(muito_dificeis[21].alternativa_A,"Digory e Poly");
	strcpy(muito_dificeis[21].alternativa_B,"Digory e L�cia");
	strcpy(muito_dificeis[21].alternativa_C,"Digory e Eust�quio");
	strcpy(muito_dificeis[21].alternativa_D,"Poly e Susana");
	muito_dificeis[21].pontuacao = pontuacao;
	//Pergunta 23
	strcpy(muito_dificeis[22].pergunta,"O que Digory d� � sua m�e que a faz melhorar?");
	strcpy(muito_dificeis[22].alternativa_A,"Ma��");
	strcpy(muito_dificeis[22].alternativa_B,"Laranja");
	strcpy(muito_dificeis[22].alternativa_C,"�gua");
	strcpy(muito_dificeis[22].alternativa_D,"Melancia");
	muito_dificeis[22].pontuacao = pontuacao;
	//Pergunta 24
	strcpy(muito_dificeis[23].pergunta,"Qual � o nome que Aslam d� � Morango, depois que ele vem a falar?");
	strcpy(muito_dificeis[23].alternativa_A,"Pluma");
	strcpy(muito_dificeis[23].alternativa_B,"Ventania");
	strcpy(muito_dificeis[23].alternativa_C,"Furac�o");
	strcpy(muito_dificeis[23].alternativa_D,"Pintado");
	muito_dificeis[23].pontuacao = pontuacao;
	
	
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
