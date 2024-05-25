#pragma once


void clearScreen();
void line();
void loading(int t);
void introduction();
void startOfGame();
void firstRoundExplanation();
int maximum(int p, int m);
void userTurn(bool& f, int& p, bool& w, int& m);
void computerTurn(bool& f, int& p, bool& w, int& m);
void defineWinner(bool& w);
