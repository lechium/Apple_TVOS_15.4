//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIPopoverSceneManager : NSObject
{
}

+ (id)sharedPopoverSceneManager;	// IMP=0x0000000000bd1c30
- (void)detachPopoverSceneWithIdentifier:(id)arg1 fromPoint:(struct CGPoint)arg2 withCompletionCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000bd1ca5
- (void)updateSupportsDetach:(_Bool)arg1 forPopoverWithSceneIdentifier:(id)arg2;	// IMP=0x0000000000bd1c9f
- (void)updatePopoverSceneWithIdentifier:(id)arg1 userInterfaceStyle:(long long)arg2;	// IMP=0x0000000000bd1c99
- (void)updatePopoverSceneWithIdentifier:(id)arg1 sourceRectInParentUIWindow:(struct CGRect)arg2 contentSize:(struct CGSize)arg3 preferredHorizontalAlignment:(long long)arg4 showsArrow:(_Bool)arg5 isRTL:(_Bool)arg6;	// IMP=0x0000000000bd1c93
- (void)closePopoverSceneForIdentifier:(id)arg1 popoverWindow:(id)arg2 returningToWindow:(id)arg3 withTransitionCoordinator:(id)arg4;	// IMP=0x0000000000bd1c8d
- (id)createPopoverSceneForContentViewController:(id)arg1 sourceView:(id)arg2 sourceRectInParentUIWindow:(struct CGRect)arg3 contentSize:(struct CGSize)arg4 permittedArrowDirections:(long long)arg5 showsArrow:(_Bool)arg6 userInterfaceStyle:(long long)arg7 withCompletionBlock:(CDUnknownBlockType)arg8;	// IMP=0x0000000000bd1c85

@end

