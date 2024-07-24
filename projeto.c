#include <stdio.h>
#include <string.h>

typedef struct {
    char pergunta[100];
    char resposta[100];
} Pergunta;

void jogar(Pergunta perguntas[], int numPerguntas) {
    char resposta[100];
    int pontos = 1000000;
    int acertos = 0;
    int erros = 0;

    for(int i = 0; i < numPerguntas; i++) {
        printf("%s\n", perguntas[i].pergunta);
        scanf(" %[^\n]", resposta);

        if(strcmp(resposta, perguntas[i].resposta) == 0) {
            printf("Resposta correta!\n");
            acertos++;
        } else {
            printf("Resposta errada. A resposta correta é %s.\n", perguntas[i].resposta);
            pontos /= 2;
            erros++;
        }

        printf("Você tem %d pontos.\n\n", pontos);

        if ((i+1) % 10 == 0) {
            printf("Após %d perguntas, você tem %d acertos e %d erros.\n\n", i+1, acertos, erros);
        }
    }

    printf("Fim do jogo. Você terminou com %d pontos.\n", pontos);
}

int main() {
    Pergunta perguntas[30] = {
        {"Qual é o maior país do mundo em área terrestre?", "Russia"},
        {"Qual é o rio mais longo do mundo?", "Amazonas"},
        {"Qual é o país mais populoso do mundo?", "China"},
        {"Qual é o maior deserto do mundo?", "Saara"},
        {"Qual é o oceano mais profundo do mundo?", "Pacifico"},
        {"Qual é a montanha mais alta do mundo?", "Everest"},
        {"Qual é o lago mais profundo do mundo?", "Baikal"},
        {"Qual é o país com mais idiomas falados?", "Papua Nova Guiné"},
        {"Qual é o país com a maior biodiversidade do mundo?", "Brasil"},
        {"Qual é o país com mais patrimônios da UNESCO?", "Itália"},
        {" Quem foi a primeira pessoa a viajar no Espaço?", "Yuri Gagarin"},
        {"Onde se localiza Machu Picchu?", "Peru"},
        {"Que país tem o formato de uma bota?", "Itália"},
        {"Quem inventou a lâmpada?", "Thomas Edison"},
        {"Quanto tempo a Terra demora para dar uma volta completa em torno dela mesma?", "24 horas"},
        {"A que temperatura a água ferve?", "100 °C"},
        {" Quais são as fases da Lua?", " nova crescente cheia minguante"},
        {" Quantos ossos temos no nosso corpo?", "206"},
        {"Qual o maior planeta do sistema solar?", "Júpiter"},
        {"Qual o planeta mais próximo do Sol?", "Mercúrio"},
        {"Quantos continentes existem?", "6"},
        {"Qual a maior floresta tropical do mundo?", "Floresta Amazônica"},
        {"Quais as duas línguas mais faladas no mundo?", "inglês e mandarim"},
        {"Qual o monumento famoso pela sua inclinação?", "torre de pisa"},
        {"Quem pintou Mona Lisa?", "Leornado da Vinci"},
        {"Qual a personagem mais famosa de Maurício de Sousa?", "Mônica"},
        {"Que cidade brasileira é conhecida por chover todos os dias quase à mesma hora?", "Belém"},
        {"O que é maior: gigabyte ou megabyte?", "gigabyte"},
        {"Qual o nome popular do cloreto de sódio?", "sal de cozinha"},
        {"Que animal põe o maior ovo?", "avestruz"},
    };

    jogar(perguntas, 30);

    return 0;
}