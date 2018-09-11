/**
 * Implements a dictionary's functionality.
 */
#include<stdio.h>
#include <stdbool.h>
#include<stdlib.h>
#include<string.h>
#include "dictionary.h"


typedef struct node
{
    bool is_word;
    struct node* children[27];
}node;

node*first;

int word_count = 0;


bool unload_helpers(node*node_ptr);

int get_index(char c);
struct node* create_init_node();


/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char *word)
{
    // TODO
    node* node_ptr = first;
    for(int i = 0, len =strlen(word) + 1; i<len; i++)
    {
        if(word[i] == '\0')
        {
            if(node_ptr -> is_word == true)
                return true;
            else
                return false;
        }
        int index = get_index(word[i]);
        if((node_ptr -> children)[index] == NULL)
            return false;

        node_ptr = node_ptr -> children[index];
    }
    return false;
}

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
bool load(const char *dictionary)
{
    // TODO
    FILE* dict_ptr = fopen(dictionary,"r");
    if(dict_ptr == NULL)
    {
        fprintf(stderr,"file dosenot exists");
        return false;
    }

   first = create_init_node();
   int index;
   struct node*node_ptr = first;

    for(char c = fgetc(dict_ptr); c != EOF; c = fgetc(dict_ptr))
    {
        if(c != '\n')
        {
            if (node_ptr == NULL)
                node_ptr = create_init_node();

            index = get_index(c);
            if((node_ptr -> children)[index] == NULL)
            {
            (node_ptr -> children)[index] = create_init_node();
            }
            node_ptr = (node_ptr->children)[index];
        }
        else
        {
      //mark the end of the word
           node_ptr -> is_word = true;
           word_count++;
           node_ptr = first;
        }
    }

    fclose(dict_ptr);

    return true;
}
int get_index(char c)
{
    if(c == '\'')
    {
    return 26;
    }
    else if(c>= 'a' && c<='z')
    {
    return c - 'a';
    }
    else if(c>= 'A' && c<= 'Z')
    {
    return c-'A';
    }
   return -1;

}

struct node* create_init_node()
{
    struct node* node_ptr = malloc(sizeof(node));
    node_ptr -> is_word = false;

    for(int i = 0; i < 27; i++)
    {
        (node_ptr -> children)[i] = NULL;
    }
    return node_ptr;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
    return word_count;
}

/**
 * Unloads dictionary from memory. Returns true if successful else false.
*/
bool unload(void)
{
    // TODO

    if(unload_helpers(first))
    return true;

 return false;
}

bool unload_helpers(node*node_ptr)
{
    if (node_ptr == NULL)
    {
        return false;
    }

    for (int i = 0; i < 27; i++)
    {
        unload_helpers(node_ptr->children[i]);
    }

    free(node_ptr);

    return true;
}