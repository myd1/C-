#ifndef DATA_DEFINITION_H_INCLUDED
#define DATA_DEFINITION_H_INCLUDED

/**< 保存菜单信息 */
typedef struct menu_bar  {
    int x1;
    int y1;
    int x2;
    int y2;
    int value_x;
    int value_y;
    char value[100];
}menu_bar;

/**< 创建关于矩形的坐标结构体 */
typedef struct rectangle_coordinate
{
    int x1;         /**< 左上角横坐标   */
    int y1;         /**< 左上角纵坐标   */
    int x2;         /**< 右下角横坐标   */
    int y2;         /**< 右下角纵坐标   */
    char name[20];     /**< 矩形名称       */
    int name_x;     /**< 矩形名称横坐标 */
    int name_y;     /**< 矩形名称坐标   */
    int value_x;    /**< 矩形值的横坐标 */
    int value_y;    /**< 矩形值的纵坐标 */
}rectangle_coordinate;


/**< 创建子函数的上边框坐标（子函数下边框默认为输入区上边框） */
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
