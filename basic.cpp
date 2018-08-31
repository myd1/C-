#include "basic.h"

/**< 处理等待按键 */
void wait_for_key (void)
{
    int k = 0;
    k = getch();
    if (k == key_esc)
    {
        menu();
    }
}

/**< 创建可视窗口 */
void start (void)
{
    setinitmode(0);
    //setinitmode(0);
    initgraph(960,720);
}

/**< 关闭可视窗口 */
void close (void)
{
    closegraph();
}

/**< 创建演示框架 */
void show_frame (void)
{
    /**< 将框架线条颜色设置为绿色 */
    setcolor(GREEN);

    /**< 最外层框架 */
    rectangle(OUT_FRAME_X1, OUT_FRAME_Y1, OUT_FRAME_X2, OUT_FRAME_Y2);

    /**< 标题（介绍程序内容） */
    line (OUT_FRAME_X1, HIDELINE_FRAME_Y, OUT_FRAME_X2, HIDELINE_FRAME_Y);

    /**< 中间分隔线 */
    line(MID_FRAME_LINE_X , HIDELINE_FRAME_Y, MID_FRAME_LINE_X, OUT_FRAME_Y2);

    /**< 交互区上边框 */
    line(OUT_FRAME_X1, OUTPUT_FRAME_Y, MID_FRAME_LINE_X, OUTPUT_FRAME_Y);

    /**< 将线条颜色设置为黄色 */
    setcolor(YELLOW);

    /**< 显示各个框架名称 */
    outtextxy(OUT_FRAME_X1 + 5, HIDELINE_FRAME_Y + 5, "main：");
    outtextxy(MID_FRAME_LINE_X + 5, HIDELINE_FRAME_Y + 5, "代码区：");
    outtextxy(OUT_FRAME_X1 + 5, OUT_FRAME_Y1 + 5, "标题：");
    outtextxy(OUTPUT_VALUE_X, OUTPUT_FRAME_Y + 5, "交互区:");

    /**< 将线条颜色设置为白色 */
    setcolor(WHITE);
}

/**< 垂直水平箭头 */
void link_ptr (int x1, int y1, int x2, int y2)
{
    int x3, y3, x4, y4;
    line (x1, y1, x2, y2);

    /**< 箭头竖直向下 */
    if (x1 == x2 && y2 > y1)
    {
        x3 = x2 + 10;
        x4 = x2 - 10;
        y3 = y4 = y2 - 17;
    }
    /**< 箭头竖直向上 */
    else if (x1 == x2 && y2 < y1)
    {
        x3 = x2 + 10;
        x4 = x2 - 10;
        y3 = y4 = y2 + 17;
    }
    /**< 箭头水平向左 */
    else if (x1 > x2 && y1 == y2)
    {
        x3 = x4 = x2 + 17;
        y3 = y2 + 10;
        y4 = y2 - 10;
    }
    /**< 箭头水平向右 */
    else if (x1 < x2 && y1 == y2)
    {
        x3 = x4 = x2 - 17;
        y3 = y2 + 10;
        y4 = y2 - 10;
    }
    line (x2, y2, x3, y3);
    line (x2, y2, x4, y4);
}

/**< 动态显示bar */
void show_bar(int x1, int y1, int x2, int y2)
{
    while(y1 <= y2)
    {
        line(x1, y1, x2, y1);
        y1++;
        Sleep(10);
    }
}

/**< 判断一点是否在两点之间，m可取为鼠标的横坐标或纵坐标 */
int between (int m, int x, int y)
{
    if (m >= x && m <= y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/**< 创建代码前的箭头 */
void show_code_pointer (int x, int y)
{
    outtextxy (x, y, "--->");
}

/**< 关闭代码前的箭头 */
void hide_code_pointer (int x, int y)
{
    outtextxy (x, y, "     ");
}
