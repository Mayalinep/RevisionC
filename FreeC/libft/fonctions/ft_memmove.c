/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maya <maya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:23:39 by maya              #+#    #+#             */
/*   Updated: 2024/04/22 23:26:42 by maya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d = (char *)dst;
    const char *s = (const char *)src; // on convertit  en char
    size_t i = 0; // pour l'indexation de src et dst

    if (d < s) {
        while (i < len) {
            d[i] = s[i];  // Copie normale, de l'avant vers l'arrière
            i++;
        }
    } else {
        while (len > 0) {
            len--;
            d[len] = s[len];  // Copie inverse, de l'arrière vers l'avant
        }
    }

    return dst;
}
#include <stdio.h>
#include <string.h>  // Inclure pour utiliser memmove si pas encore implémenté

void *ft_memmove(void *dst, const void *src, size_t len);  // Prototype de la fonction

int main() 
{
    char text[20] = "Example String Text";
    
    printf("Original text: %s\n", text);
    
    // Test sans chevauchement
    printf("\n--- Test sans chevauchement ---\n");
    size_t index = 0;
    char *source = text + 15;  // Pointeur vers "Text"
    char *destination = text + 8;  // Pointeur vers la position 8
    while (index < 4) 
    {
        destination[index] = source[index];
        index++;
    }
    printf("Result after memmove: %s\n", text);
    
    // Réinitialisation de la chaîne
    strcpy(text, "Example String Text");  // Remettre la chaîne à son état original
    printf("\nOriginal text reset: %s\n", text);
    
    // Test avec chevauchement
    printf("\n--- Test avec chevauchement ---\n");
    index = 11;  // Car on va copier 12 caractères
    source = text + 8;  // Pointeur vers la position 8
    destination = text + 7;  // Pointeur vers la position 7
    while (index > 0) 
    {
        index--;
        destination[index] = source[index];  // Copie de l'arrière vers l'avant
    }
    printf("Result after memmove with overlap: %s\n", text);
    
    return 0;
}

