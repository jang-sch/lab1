#ifndef _FONTS_H_ //"if not defined, go ahead and do as follows"
#define _FONTS_H_ //"if is defined, do nothing"
typedef struct t_rect {
	int left;
	int top;
	int right;
	int bot;
	int width;
	int height;
	int center;
	int centerx;
	int centery;
} Rect;
extern void initialize_fonts(void); //extern says "im giving you prototype for a func
extern void cleanup_fonts(void);    //the function is not defined here, it's externally def
extern void ggprint16(Rect *r, int advance, int cref, const char *fmt, ...); //cref = color
extern void ggprint12(Rect *r, int advance, int cref, const char *fmt, ...);
extern void ggprint13(Rect *r, int advance, int cref, const char *fmt, ...);
extern void ggprint10(Rect *r, int advance, int cref, const char *fmt, ...);
extern void ggprint08(Rect *r, int advance, int cref, const char *fmt, ...);
extern void ggprint07(Rect *r, int advance, int cref, const char *fmt, ...);
extern void ggprint06(Rect *r, int advance, int cref, const char *fmt, ...);
extern void ggprint8b(Rect *r, int advance, int cref, const char *fmt, ...);
#endif //_FONTS_H_

