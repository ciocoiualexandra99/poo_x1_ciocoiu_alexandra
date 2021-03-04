#include "Canvas.h"
#include <iostream>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
Canvas::Canvas(int width, int height)
{
	w = width;
	h = height;
	back = new char*[height];
	for (int i = 0; i < height; i++)
		back[i] = new char[width];
	for (int i = 0; i < width; i++)
		for (int j = 0; j < height; j++)
			back[i][j] = 32;
}

void Canvas::SetPoint(int x, int y, char ch)
{
	if (ch < 0 or ch > 255) return;
	if (x < 0 or x > w or y < 0 or y > h) return;
	back[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = abs(x2 - x1);
	int sx = x1 < x2 ? 1 : -1;
	int dy = -abs(y2 - y1);
	int sy = y1 < y2 ? 1 : -1;
	int err = dx + dy;
	while (1)
	{
		SetPoint(x1, y1, ch);
		if (x1 == x2 && y1 == y2) break;
		int e2 = 2 * err;
		if (e2 >= dy)
		{
			err += dy;
			x1 += sx;
		}
		if (e2 <= dx)
		{
			err += dx;
			y1 += sy;
		}
	}
}

void Canvas::Print()
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			std::cout << back[i][j];
		std::cout << '\n';
	}
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < 360; i++)
		DrawLine(x, y, x + cos(i * 3.14 / 180) * ray, y + sin(i * 3.14 / 180) * ray * 2,ch);
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < 360; i++)
		SetPoint(x + cos(i * 3.14 / 180) * ray, y + sin(i * 3.14 / 180) * ray * 2, ch);
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	DrawLine(top, left, top, right, ch);
	DrawLine(top, right, bottom, right, ch);
	DrawLine(bottom, right, bottom, left, ch);
	DrawLine(bottom, left, top, left, ch);
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top; i <= bottom; i++)
		DrawLine(left, i, right, i, ch);
}

void Canvas::Clear()
{
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			back[i][j] = 32;
}




