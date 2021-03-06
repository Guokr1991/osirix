/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSThemeFrame.h"

@interface NSGrayFrame : NSThemeFrame
{
    BOOL _bottomCornerRounded;
}

+ (void)initialize;
+ (void)drawBevel:(NSRect)fp8 inFrame:(NSRect)fp24 topCornerRounded:(BOOL)fp40 bottomCornerRounded:(BOOL)fp44;
+ (struct _NSSize)sizeOfTitlebarButtons:(unsigned int)fp8;
+ (float)_minXTitlebarWidgetInset:(unsigned int)fp8;
+ (float)_maxXTitlebarWidgetInset:(unsigned int)fp8;
- (id)initWithFrame:(NSRect)fp8 styleMask:(unsigned int)fp24 owner:(id)fp28;
- (void)_setUtilityWindow:(BOOL)fp8;
- (void)setBottomCornerRounded:(BOOL)fp8;
- (BOOL)bottomCornerRounded;
- (struct _NSSize)_topCornerSize;
- (struct _NSSize)_bottomCornerSize;
- (void)drawRect:(NSRect)fp8;
- (void)_drawTitleBar:(NSRect)fp8;
- (void)drawWindowBackgroundRect:(NSRect)fp8 level:(int)fp24;
- (void)drawWindowBackgroundRect:(NSRect)fp8;
- (void)drawWindowBackgroundRegion:(void *)fp8 level:(int)fp12;
- (void)drawWindowBackgroundRegion:(void *)fp8;
- (unsigned int)_shadowFlags;
- (id)contentFill;
- (float)_minYTitlebarButtonsOffset;
- (float)_minYTitlebarTitleOffset;
- (NSRect)_maxXminYResizeRect;
- (NSRect)_growBoxRect;
- (void)_drawGrowBoxWithClip:(NSRect)fp8;
- (BOOL)_inactiveButtonsNeedMask;
- (float)_minXTitlebarWidgetInset;
- (float)_maxXTitlebarWidgetInset;
- (struct _NSPoint)_toolbarButtonOrigin;
- (float)_windowTitlebarButtonSpacingWidth;
- (struct _NSSize)sizeOfTitlebarToolbarButton;

@end

