/**
 * @file Exercice1.H
 * @author Andrew SASSOYE
 */

#ifndef ALGO_EXERCICE1_H
#define ALGO_EXERCICE1_H

#include <stdbool.h>
#include "DataStructures/LinkedList.h"

/**
 * Un algorithme qui ajoute dans la liste un nouvel élément dont la valeur val est donnée
 * (à l’endroit qui permet le code le plus simple).
 *
 * @param list List to add element in
 * @param value Pointer to data of new element
 */
void addElement(LinkedList* list, void* value);

/**
 * Un algorithme qui recherche dans la liste la valeur val et retourne l’accès à l’élément qui le contient
 * (ou rien si la valeur ne s’y trouve pas). Si la valeur s’y trouve plusieurs fois,
 * l’algorithme en retourne la première occurrence.
 *
 */
Node* searchValInList(LinkedList* list, void* value);

/**
 * un algorithme qui retourne un booléen indiquant si la liste contient la valeur val.
 *
 * @param list LinkedList to verify
 * @param value Value to verify
 * @return true if value is in list
 * @return false if value is not in list
 */
bool containsValue(LinkedList* list, void* value);

/**
 * un algorithme qui supprime de la liste le premier élément contenant la valeur val.
 * L’algorithme retournera un booléen indiquant si la suppression a été réalisée :
 * vrai si val a été supprimé, et faux sinon (parce que la valeur ne s’y trouvait pas).
 *
 * @param list
 * @param value
 * @return
 */
bool removeElementByValue(LinkedList* list, void* value);

/**
 * un algorithme qui supprime de la liste toutes les occurrences de la valeur val
 * et retourne le nombre de suppressions réalisées.
 *
 * @param List to verify
 * @param value Value to check
 * @return number of elements removed.
 */
int removeAllElementsByValue(LinkedList* list, void* value);

#endif //ALGO_EXERCICE1_H
