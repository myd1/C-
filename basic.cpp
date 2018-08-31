#include "basic.h"

/**< ����ȴ����� */
void wait_for_key (void)
{
    int k = 0;
    k = getch();
    if (k == key_esc)
    {
        menu();
    }
}

/**< �������Ӵ��� */
void start (void)
{
    setinitmode(0);
    //setinitmode(0);
    initgraph(960,720);
}

/**< �رտ��Ӵ��� */
void close (void)
{
    closegraph();
}

/**< ������ʾ��� */
void show_frame (void)
{
    /**< �����������ɫ����Ϊ��ɫ */
    setcolor(GREEN);

    /**< ������� */
    rectangle(OUT_FRAME_X1, OUT_FRAME_Y1, OUT_FRAME_X2, OUT_FRAME_Y2);

    /**< ���⣨���ܳ������ݣ� */
    line (OUT_FRAME_X1, HIDELINE_FRAME_Y, OUT_FRAME_X2, HIDELINE_FRAME_Y);

    /**< �м�ָ��� */
    line(MID_FRAME_LINE_X , HIDELINE_FRAME_Y, MID_FRAME_LINE_X, OUT_FRAME_Y2);

    /**< �������ϱ߿� */
    line(OUT_FRAME_X1, OUTPUT_FRAME_Y, MID_FRAME_LINE_X, OUTPUT_FRAME_Y);

    /**< ��������ɫ����Ϊ��ɫ */
    setcolor(YELLOW);

    /**< ��ʾ����������� */
    outtextxy(OUT_FRAME_X1 + 5, HIDELINE_FRAME_Y + 5, "main��");
    outtextxy(MID_FRAME_LINE_X + 5, HIDELINE_FRAME_Y + 5, "��������");
    outtextxy(OUT_FRAME_X1 + 5, OUT_FRAME_Y1 + 5, "���⣺");
    outtextxy(OUTPUT_VALUE_X, OUTPUT_FRAME_Y + 5, "������:");

    /**< ��������ɫ����Ϊ��ɫ */
    setcolor(WHITE);
}

/**< ��ֱˮƽ��ͷ */
void link_ptr (int x1, int y1, int x2, int y2)
{
    int x3, y3, x4, y4;
    line (x1, y1, x2, y2);

    /**< ��ͷ��ֱ���� */
    if (x1 == x2 && y2 > y1)
    {
        x3 = x2 + 10;
        x4 = x2 - 10;
        y3 = y4 = y2 - 17;
    }
    /**< ��ͷ��ֱ���� */
    else if (x1 == x2 && y2 < y1)
    {
        x3 = x2 + 10;
        x4 = x2 - 10;
        y3 = y4 = y2 + 17;
    }
    /**< ��ͷˮƽ���� */
    else if (x1 > x2 && y1 == y2)
    {
        x3 = x4 = x2 + 17;
        y3 = y2 + 10;
        y4 = y2 - 10;
    }
    /**< ��ͷˮƽ���� */
    else if (x1 < x2 && y1 == y2)
    {
        x3 = x4 = x2 - 17;
        y3 = y2 + 10;
        y4 = y2 - 10;
    }
    line (x2, y2, x3, y3);
    line (x2, y2, x4, y4);
}

/**< ��̬��ʾbar */
void show_bar(int x1, int y1, int x2, int y2)
{
    while(y1 <= y2)
    {
        line(x1, y1, x2, y1);
        y1++;
        Sleep(10);
    }
}

/**< �ж�һ���Ƿ�������֮�䣬m��ȡΪ���ĺ������������ */
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

/**< ��������ǰ�ļ�ͷ */
void show_code_pointer (int x, int y)
{
    outtextxy (x, y, "--->");
}

/**< �رմ���ǰ�ļ�ͷ */
void hide_code_pointer (int x, int y)
{
    outtextxy (x, y, "     ");
}
