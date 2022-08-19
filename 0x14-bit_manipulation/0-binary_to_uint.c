#include "main.h"



/**
 *
 *  * binary_to_uint - converts a binary number to an unsigned int
 *
 *   * @b: binary
 *
 *    *
 *
 *     * Return: converted number
 *
 *      */

unsigned int binary_to_uint(const char *b)

{

		unsigned int i;

			int l, b_two;



				if (!b)

							return (0);

					i = 0;



						for (l = 0; b[l] != '\0'; l++)

									;

							for (l--, b_two = 1; l >= 0; l--, b_two *= 2)

									{

												if (b[l] != '0' && b[l] != '1')

															{

																			return (0);

																					}



														if (b[l] & 1)

																	{

																					i += b_two;

																							}

															}

								return (i);

}
