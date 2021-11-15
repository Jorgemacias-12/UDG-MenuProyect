#ifndef menuData_h
#define menuData_h

#include <wchar.h>
#include <windows.h>

wchar_t dataMenuControls[2][100] = {L"| [DERECHA] ==> | <== [IZQUIERDA] | [ENTER] SELCCIONAR |",
                                    L"| [ARRIBA] ^ | v [ABAJO] | [ENTER] SELCCIONAR | [ESC] REGRESAR |"};

wchar_t dataMenuOptions[3][40] = {L"| [CONCEPTOS] | EJERCICIOS | SALIR |",
                                  L"| CONCEPTOS | [EJERCICIOS] | SALIR |",
                                  L"| CONCEPTOS | EJERCICIOS | [SALIR] |"};
wchar_t dataMenuConcepts[25][50] = {L"1.1 LENGUAJE DE PROGRAMACIÓN C",
                                    L"1.2 ESTRUCTURA GENERAL DE UN PROGRAMA",
                                    L"1.3 CÓMO INSERTAR COMENTARIOS",
                                    L"1.4 PALABRAS RESERVADAS",
                                    L"1.5 IDENTIFICADORES",
                                    L"1.6 TIPOS DE DATOS EN LENGUAJE C",
                                    L"1.7 CALIFICADORES DE DATOS",
                                    L"1.8 VARIABLES - DECLARACIÓN Y EJEMPLOS",
                                    L"1.9 CONSTANTES - DIRECTIVA #DEFINE",
                                    L"1.10 SECUENCIAS DE ESCAPE",
                                    L"1.11 INCLUSIÓN DE ARCHIVOS #INCLUDE",
                                    L"1.12 OPERADORES ARITMÉTICOS BÁSICOS",
                                    L"1.13 FUNCIONES PRINTF() Y SCANF()",
                                    L"1.14 OPERADORES RELACIONALES <, >, ==",
                                    L"1.15 CONDICIONALES IF, ELSEIF Y SWITCH",
                                    L"1.16 OPERADORES LÓGICOS AND, OR, NOT",
                                    L"1.17 BUCLES WHILE, DO WHILE Y FOR",
                                    L"1.18 VARIABLES LOCALES Y GLOBALES EN C",
                                    L"1.19 FUNCIONES EN C",
                                    L"1.20 ARRAYS, ARREGLOS O CADENAS",
                                    L"1.21 MATRICES BIDIMENSIONAL",
                                    L"1.22 PUNTEROS ¿QUÉ SON?",
                                    L"1.23 ESTRUCTURAS Y UNIONES EN C",
                                    L"1.24 ARCHIVOS DE TEXTO FOPEN(), FCLOSE()",
                                    L"1.25 PILAS, COLAS Y LISTAS"};
wchar_t dataMenuPractice[19][50] = {L"1. BINARIO A DECIMAL",
                                    L"2. SUMA CONTINUA DE NÚMEROS",
                                    L"3. POTENCIA DE UN NÚMERO",
                                    L"4. ÁREA DE TRIANGULO",
                                    L"5. MAYOR ENTRE 3 NÚMEROS",
                                    L"6. SUMA DE LOS PRIMEROS 20 NÚMEROS IMPARES",
                                    L"7. CALCULAR ÁREA Y VOLUMEN DE ESFERA",
                                    L"8. DETERMINAR NÚMERO PRIMO",
                                    L"9. MAYOR ENTRE 10 NÚMEROS",
                                    L"10. SUMA DE PARES DEL 2 AL 100",
                                    L"11. CALCULAR FACTORIAL",
                                    L"12. DETERMINAR NÚMERO ENTERO POSITVO PRIMO",
                                    L"13. MÁXIMO DE UN VECTOR DE ENTEROS",
                                    L"14. GANANCIAS DE LA SEMANA",
                                    L"15. GANANCIAS DEL MES",
                                    L"16. NÚMEROS ORDENADOS ASCENDENTEMENTE",
                                    L"17. AGENDA",
                                    L"18. EXTRAER VOCALES, CONSONANTES Y DÍGITOS",
                                    L"19. MOSTRAR, AGREGAR Y VACIAR EN PILA"};
                                    
wchar_t dataMenuExit[] = L"ADIÓS USUARIO:";

LPCTSTR appTitle = "PROYECTO MENU";

#endif