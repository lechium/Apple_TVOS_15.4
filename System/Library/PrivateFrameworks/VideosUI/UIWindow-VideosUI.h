//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class UIViewController;

@interface UIWindow (VideosUI)
+ (double)_OSXNumColumnsForGridStyle:(long long)arg1 gridType:(long long)arg2 sizeClass:(long long)arg3;	// IMP=0x00000000000be71c
+ (double)_newNumColumnsForGridStyle:(long long)arg1 gridType:(long long)arg2 sizeClass:(long long)arg3;	// IMP=0x00000000000bc6e8
+ (double)_numColumnsForGridStyle:(long long)arg1 gridType:(long long)arg2 sizeClass:(long long)arg3;	// IMP=0x00000000000ba6fe
+ (struct UIEdgeInsets)_safeAreaInsetsForDeviceWithWindowWidth:(double)arg1;	// IMP=0x00000000000ba6ac
+ (long long)vui_interfaceOrientation;	// IMP=0x00000000000ba5f0
+ (id)vui_keyWindow;	// IMP=0x00000000000ba506
+ (double)_vui_interitemSpaceForSizeClass:(long long)arg1 gridType:(long long)arg2;	// IMP=0x00000000000ba4e6
+ (long long)_vui_currentSizeClassForWindowWidth:(double)arg1 safeArea:(struct UIEdgeInsets)arg2;	// IMP=0x00000000000ba3f1
+ (long long)vui_currentSizeClassForWindowWidth:(double)arg1;	// IMP=0x00000000000ba37c
+ (long long)vui_currentSizeClass;	// IMP=0x00000000000ba2e4
+ (double)vui_collectionInteritemSpace:(long long)arg1 gridType:(long long)arg2 windowWidth:(double)arg3;	// IMP=0x00000000000ba280
+ (double)vui_collectionInteritemSpace:(long long)arg1 gridType:(long long)arg2;	// IMP=0x00000000000ba1d4
+ (double)_vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2 numGridColumns:(unsigned long long)arg3 windowWidth:(double)arg4 sizeClass:(long long)arg5 padding:(struct UIEdgeInsets)arg6;	// IMP=0x00000000000ba009
+ (double)vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2 numGridColumns:(unsigned long long)arg3 windowWidth:(double)arg4;	// IMP=0x00000000000b9f35
+ (double)vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2 numGridColumns:(unsigned long long)arg3;	// IMP=0x00000000000b9e7f
+ (double)vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2;	// IMP=0x00000000000b9e4d
+ (double)vui_numColumnsForGridStyle:(long long)arg1 gridType:(long long)arg2 sizeClass:(long long)arg3;	// IMP=0x00000000000b9e12
+ (struct UIEdgeInsets)_paddingForSizeClass:(long long)arg1 safeArea:(struct UIEdgeInsets)arg2;	// IMP=0x00000000000b9db4
+ (struct UIEdgeInsets)vui_paddingForSizeClass:(long long)arg1;	// IMP=0x00000000000b9d52
+ (struct UIEdgeInsets)vui_paddingForWindowWidth:(double)arg1;	// IMP=0x00000000000b9c99
+ (struct UIEdgeInsets)vui_padding;	// IMP=0x00000000000b9be9
@property(nonatomic, getter=isVuiHidden) _Bool vuiHidden;
@property(retain) UIViewController *vuiRootViewController;
@end
