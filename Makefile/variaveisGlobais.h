#ifndef VARIAVEIS_GLOBAIS_H
#define VARIAVEIS_GLOBAIS_H
#include "coordenadas.h"
#include "glm.h"

OBJETO *galinha;
OBJETO cerca[4];
OBJETO estabulo;
OBJETO coelho;
OBJETO *porco;
OBJETO *arvore;
OBJETO triforce;
OBJETO *porcoPai;

int qtdDeGalinhas;
int qtdDeArvores;
int qtdDePorco;
int qtdDeArvores;
int qtdDePorcoPai;

GLMmodel* modelEstabulo;
GLMmodel* modelCoelho;
GLMmodel* modelCerca;

int luzEstaLigada;
int linhasRelevo;
int anguloDeRotacao;
double respiracao;
double incrementoRespiracao;
GLfloat incrementoDeLuz;
double pontos[100][100];
int idTexturaGrama;
int idTexturaTerra;
idTexturaSkySky;
idTexturaSky1;
idTexturaSky4;
idTexturaSky2;
idTexturaSky11;
int fogAtivo;

#endif
