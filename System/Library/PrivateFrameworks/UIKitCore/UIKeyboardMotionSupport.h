//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScreenBasedObject-Protocol.h>

@class NSDictionary, NSString, UIScreen, UIWindowScene;
@protocol UISplitKeyboardSource;

__attribute__((visibility("hidden")))
@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject>
{
    UIScreen *_screen;	// 8 = 0x8
    UIWindowScene *_canvas;	// 16 = 0x10
    id <UISplitKeyboardSource> _controller;	// 24 = 0x18
}

+ (id)supportForUIScene:(id)arg1;	// IMP=0x00000000009bb651
+ (id)supportForScreen:(id)arg1;	// IMP=0x00000000009bb5d4
- (_Bool)generateSplitNotificationForNewPlacement:(id)arg1;	// IMP=0x00000000009bb953
- (void)translateToPlacement:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000009bb93c
- (void)translateToPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000009bb87a
@property(nonatomic) id <UISplitKeyboardSource> masterController;
- (void)_updatedController;	// IMP=0x00000000009bb814
- (void)_connectController:(id)arg1;	// IMP=0x00000000009bb80a
- (void)_disconnectingController:(id)arg1;	// IMP=0x00000000009bb7fc
- (void)dealloc;	// IMP=0x00000000009bb7a8
- (id)_intendedCanvas;	// IMP=0x00000000009bb79e
@property(readonly) UIScreen *_intendedScreen;
@property(readonly) NSDictionary *_options;
- (_Bool)_matchingOptions:(id)arg1;	// IMP=0x00000000009bb780
- (id)_initWithCanvas:(id)arg1 options:(id)arg2;	// IMP=0x00000000009bb727
- (id)_initWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x00000000009bb6ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

