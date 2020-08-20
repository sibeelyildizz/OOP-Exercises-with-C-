#ifndef LISTTYPE_H
#define LISTTYPE_H


class listType
{
    public:
        listType();
        bool isEmptyList();
        bool isFullList();
        void search(int searchItem,int& found);
        void insert(int newElement);
        void remove(int removeElement);
        void destroy();
        void printList();


        virtual ~listType();


    private:
        int list[1000];
        int length;
};

#endif // LISTTYPE_H
