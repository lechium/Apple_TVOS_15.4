//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class NSDate;

@interface UIApplication (UIAccessibilityElementTraversal)
- (id)_accessibilityElementWindowsWithOptions:(id)arg1 referenceWindow:(id)arg2;	// IMP=0x0000000000010ec1
- (id)_accessibilityTraversalWindows;	// IMP=0x0000000000010cec
- (void)_accessibilityAddKeyboardWindowToArray:(id)arg1 forModalWindow:(id)arg2;	// IMP=0x0000000000010a3d
- (id)_accessibilityViewChildrenWithOptions:(id)arg1 referenceWindow:(id)arg2;	// IMP=0x0000000000010584
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;	// IMP=0x0000000000010570
- (_Bool)_accessibilityEnumerateSiblingsWithParent:(id *)arg1 options:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001055c
- (_Bool)_accessibilitySystemAppServerIsReady;	// IMP=0x0000000000050386
- (void)_accessibilityUpdateIsSystemAppServer;	// IMP=0x0000000000050375
- (_Bool)_accessibilityIsSystemAppServer;	// IMP=0x0000000000050301
- (_Bool)_accessibilityIsAppReadyToBeProbed;	// IMP=0x000000000005998d
- (double)_accessibilityMaximumAllowedOutOfBoundsPercent;	// IMP=0x0000000000059950
@property(copy, nonatomic) CDUnknownBlockType accessibilityKeyboardKeyDispatchOverride;
@property(retain, nonatomic) NSDate *accessibilityLastGesturedTextInputStatusChange;
- (id)accessibilityPresentingViewController;	// IMP=0x000000000006db48
@end

