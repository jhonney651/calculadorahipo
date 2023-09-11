#include <ncurses.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;
    initscr();
    printw("Calculadora da Hipotenusa de um Triangulo Retangulo\n\n");
    printw("Informe o valor do primeiro cateto: ");
    scanw("%f", &cateto1);
    printw("Informe o valor do segundo cateto: ");
    scanw("%f", &cateto2);
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    printw("A medida da hipotenusa eh: %.2f", hipotenusa);
    refresh();
    getch();
    endwin();
    return 0;
}
