//------------------------------------------------------
//  ����:  MAIN.H
//  ��������:  ������� ������ ���������� DirectDraw
//------------------------------------------------------

#define ClassName "DX_Window"
#define AppName "DirectDraw Application"

BOOL InitDirectDraw (HWND hwnd);
void RemoveDirectDraw (void);

void DrawFrame(void);
void NextTick( void );
void MoveSprites(void);
void ChangeColor(void);