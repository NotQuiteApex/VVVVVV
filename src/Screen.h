#ifndef SCREEN_H
#define SCREEN_H

// #include <SDL.h>
#include <citro2d.h>

class Screen
{
public:
	Screen();

	void ResizeScreen(int x, int y);
	void GetWindowSize(int* x, int* y);

	// void UpdateScreen(SDL_Surface* buffer, SDL_Rect* rect);
	void ClearScreen(int colour);
	void FlipScreen();

	// const SDL_PixelFormat* GetFormat();
	// Citro2D version later lol

	void toggleFullScreen();
	void toggleStretchMode();
	void toggleLinearFilter();

	// bool isWindowed;
	// bool isFiltered;
	const bool badSignalEffect = false; // I'm not gonna bother. Let the compiler deal with it lol
	// bool glScreen;
	// int stretchMode;

	// SDL_Window *m_window;
	// SDL_Renderer *m_renderer;
	// SDL_Texture *m_screenTexture;
	// SDL_Surface* m_screen;

	// We only need to make a single rendertarget for 3DS. At least for now.
	// Currently there is no 3D effect with only one side (left). Later on there
	// will need to be 2 targets for the top screen and another for the bottom.
	C3D_RenderTarget * m_top = C2D_CreateScreenTarget(GFX_TOP, GFX_LEFT);

	// SDL_Rect filterSubrect;
};



#endif /* SCREEN_H */
