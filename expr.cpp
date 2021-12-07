#include <iostream.h>

main(void)
{
        /* Ce programme va nous permettre d'illustrer
        l'utilisation des expressions, de l'incr‚mentation
        et des commentaires dans un programme */

        int resultat, a, b, parite;

        cout << "Entrez la valeur de a: ";
        cin >> a;

        cout << "Entrez la valeur de b: ";
        cin >> b;

        cout << "Entrez la valeur de parite: ";
        cin >> parite;

        parite %= 2;

        resultat = ((parite == 0) * a) + ((parite == 1) * b);
        cout << "Parite a choisi la valeur " << resultat << endl;
}
