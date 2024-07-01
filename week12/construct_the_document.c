#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;//denotes number of words in a sentence
};

struct paragraph {
    struct sentence* data  ;
    int sentence_count;//denotes number of sentences in a paragraph
};

struct document {
    struct paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
};

struct document get_document(char* text) {
    int counter = 1;
    char *ptr = text;
    while (*ptr != '\0')
    {
        if (*ptr == '\n')
            counter++;
        ptr++;
    }
    struct document Doc;
    Doc.paragraph_count = counter;

    Doc.data = malloc(counter * sizeof(struct paragraph));
    if (Doc.data == NULL)
        exit(505);
    ptr = text;
    int counter_s = 0;
    counter = 0;
    while (*ptr != '\0')
    {
        if (*ptr == '.')
            counter_s++;
        if (*ptr == '\n' || (*ptr == '.' && *(ptr+1) == '\0'))
        {
            Doc.data[counter].sentence_count = counter_s;
            Doc.data[counter].data = malloc(sizeof(struct sentence) * counter_s);
            if (Doc.data[counter].data == NULL)
                exit(505);
            counter++;
            counter_s = 0;
        }
        ptr++;
    }

    ptr = text;
    counter_s = 0;
    counter = 0;
    int counter_w = 0;
    while (*ptr != '\0')
    {
        if (*ptr == ' ')
            counter_w++;
        else if (*ptr == '.')
        {
            counter_w++;
            Doc.data[counter].data[counter_s].word_count = counter_w;
            Doc.data[counter].data[counter_s].data = malloc(sizeof(struct word) * counter_w);
            if (Doc.data[counter].data[counter_s].data == NULL)
                exit(505);
            counter_w = 0;
            counter_s++;
        }
        else if (*ptr == '\n')
        {
            counter++;
            counter_s = 0;
        }
        ptr++;
    }
    ptr = text;
    counter_s = 0;
    counter = 0;
    counter_w = 0;

    char *tok = strtok(ptr, " ");
    while (tok)
    {
        char *ptr1 = tok;
        Doc.data[counter].data[counter_s].data[counter_w].data = tok;

        while (*ptr1 != '\0')
        {
            if (*ptr1 == '.')
            {
                *ptr1 = '\0';
                counter_s++;
                counter_w = 0;
                if (*(ptr1 + 1) == '\0' || *(ptr1 + 1) == '\n')
                {
                    counter++;
                    counter_s = 0;
                    if (counter < Doc.paragraph_count)
                        Doc.data[counter].data[counter_s].data[counter_w].data = ptr1 + 2;
                    break;
                }
                else
                {
                    if (counter_s < Doc.data[counter].sentence_count)
                        Doc.data[counter].data[counter_s].data[counter_w].data = ptr1 + 1;
                    break;
                }
            }
            ptr1++;
        }
        counter_w++;
        tok = strtok(NULL , " ");
    }
    return Doc;
}

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
    return Doc.data[n-1].data[m-1].data[k-1];
}

struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) {
    return Doc.data[m-1].data[k-1];
}

struct paragraph kth_paragraph(struct document Doc, int k) {
    return Doc.data[k-1];
}


void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence sen) {
    for(int i = 0; i < sen.word_count; i++) {
        print_word(sen.data[i]);
        if (i != sen.word_count - 1) {
            printf(" ");
        }
    }
}

void print_paragraph(struct paragraph para) {
    for(int i = 0; i < para.sentence_count; i++){
        print_sentence(para.data[i]);
        printf(".");
    }
}

void print_document(struct document doc) {
    for(int i = 0; i < doc.paragraph_count; i++) {
        print_paragraph(doc.data[i]);
        if (i != doc.paragraph_count - 1)
            printf("\n");
    }
}

char* get_input_text() {
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

int main()
{
    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);
        }

        else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen= kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        }

        else{
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
        }
        printf("\n");
    }
}