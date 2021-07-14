
#define TITLE_LEN 10
#define AUTHOR_LEN 10
#define DESIGN_LEN 10


struct catalog_item
{
    int stock_number;
    float price;
    int item_type;
    char title[TITLE_LEN + 1];
    char author[AUTHOR_LEN + 1];
    int num_pages;
    char design[DESIGN_LEN + 1];
    int colors;
    int sizes;
};


struct catalog_item2
{
    int stock_number;
    float price;
    int item_type;
    union {
        struct
        {
            char title[TITLE_LEN + 1];
            char author[AUTHOR_LEN + 1];
            int num_pages;
        } book;
        struct
        {
            char design[DESIGN_LEN + 1];
        } mug;
        struct
        {
            char design[DESIGN_LEN + 1];
            int colors;
            int sizes;
        } shirt;        
    } item;
};





