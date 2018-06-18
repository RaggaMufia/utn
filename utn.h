#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

/** Funciones encargadas de recibir un dato
*   ingresado por el usuario y devolver ese dato
*/

#endif // UTN_H_INCLUDED

/** \brief DATOS NUMERICOS ENTEROS
 *
 * \param mensaje[] char Mensaje que describe que se debe ingresar
 * \return int Equivale al dato que se pide
 *
 */
int getInt(char *mensaje);

/** \brief DATOS NUMERICOS FLOTANTES
 *
 * \param mensaje[] char
 * \return float
 *
 */
float getFloat(char *mensaje);

/** \brief CARACTER UNICO
 *
 * \param mensaje[] char
 * \param retorno char
 * \return char
 *
 */
char getChar(char mensaje[], char retorno);

/** \brief CADENA DE CARACTERES
 *
 * \param mensaje[] char
 * \param retorno[] char
 * \return char*
 *
 */
char* getString(char mensaje[], char retorno[]);
