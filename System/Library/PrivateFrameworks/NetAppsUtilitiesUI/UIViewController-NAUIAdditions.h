//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (NAUIAdditions)
+ (id)recursiveDescription;	// IMP=0x0000000000008f9f
- (void)naui_applicationWillEnterForeground;	// IMP=0x0000000000008f99
- (void)naui_applicationDidEnterBackground;	// IMP=0x0000000000008f93
- (_Bool)naui_isDescendantOfViewController:(id)arg1;	// IMP=0x0000000000008f1d
- (void)naui_loadViewIfNecessary;	// IMP=0x0000000000008efa
- (_Bool)naui_hasAxisWithRegularSizeClassOrGreater;	// IMP=0x0000000000008ec1
- (_Bool)naui_isVerticalSizeClassRegularOrGreater;	// IMP=0x0000000000008e68
- (_Bool)naui_isHorizontalSizeClassRegularOrGreater;	// IMP=0x0000000000008e0f
- (_Bool)naui_canAnimate;	// IMP=0x0000000000008dcb
- (void)naui_addChildViewWithViewController:(id)arg1 toView:(id)arg2;	// IMP=0x0000000000008d33
- (void)naui_addChildViewWithViewController:(id)arg1;	// IMP=0x0000000000008cbe
- (id)recursiveDescription;	// IMP=0x00000000000092f0
- (id)_recursiveDescriptionWithInset:(id)arg1;	// IMP=0x0000000000008fb8
@end
