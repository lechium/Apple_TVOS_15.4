//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class CADisplayLink, NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneDisplayLink : NSObject <_UISceneComponentProviding>
{
    NSMutableArray *_targetsAndActions;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    UIScene *_scene;	// 24 = 0x18
}

+ (id)sceneDisplayLinkForWindowScene:(id)arg1;	// IMP=0x000000000059a6df
- (void).cxx_destruct;	// IMP=0x000000000059b21f
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)_displayLinkTick:(id)arg1;	// IMP=0x000000000059adb5
- (void)_updateStatus;	// IMP=0x000000000059ab9d
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;	// IMP=0x000000000059ab8b
- (void)unregisterTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000059a8a4
- (void)registerTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000059a7e0
- (id)initWithScene:(id)arg1;	// IMP=0x000000000059a77c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

