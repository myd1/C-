#ifndef DATA_DEFINITION_H_INCLUDED
#define DATA_DEFINITION_H_INCLUDED

/**< ����˵���Ϣ */
typedef struct menu_bar  {
    int x1;
    int y1;
    int x2;
    int y2;
    int value_x;
    int value_y;
    char value[100];
}menu_bar;

/**< �������ھ��ε�����ṹ�� */
typedef struct rectangle_coordinate
{
    int x1;         /**< ���ϽǺ�����   */
    int y1;         /**< ���Ͻ�������   */
    int x2;         /**< ���½Ǻ�����   */
    int y2;         /**< ���½�������   */
    char name[20];     /**< ��������       */
    int name_x;     /**< �������ƺ����� */
    int name_y;     /**< ������������   */
    int value_x;    /**< ����ֵ�ĺ����� */
    int value_y;    /**< ����ֵ�������� */
}rectangle_coordinate;


/**< �����Ӻ������ϱ߿����꣨�Ӻ����±߿�Ĭ��Ϊ�������ϱ߿� */
typedef struct subfun
{
    int x1;
    int x2;
    int y;
    int name_x;
    int name_y;
    char name[20];
}subfun;


#endif // DATA_DEFINITION_H_INCLUDED
