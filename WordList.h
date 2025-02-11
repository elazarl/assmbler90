//
// Created by ronia on 30/07/2021.
//

#ifndef RONIPROJECT_WORDLIST_H
#define RONIPROJECT_WORDLIST_H

#include "default.h"


void addWordToList(WordNodePtr *head, WordNodePtr nodeToAdd);
void addDirectiveByteToWordList(int validInput[LINE_LENGTH], WordNodePtr *head, int directive, DirectiveWordType givenWordType, int DC);
void addDirectiveAsciz(char *str, WordNodePtr *head, DirectiveWordType givenWordType, int DC);
void addDirectiveICF(WordNodePtr *head,int ICF);
void addLabelAddress(WordNodePtr *head,int ICcounter,long labelAddress,InstructionWordType commandType,Bool isExtern);


#endif //RONIPROJECT_WORDLIST_H
