//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSHashTable, NSString, UIScene;

@interface _UIPlaybackControlsStateManager : NSObject <_UISceneComponentProviding>
{
    UIScene *_scene;	// 8 = 0x8
    NSHashTable *_fullscreenPlaybackAssertions;	// 16 = 0x10
    NSHashTable *_controlsPresentedAssertions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006aadbb
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (id)_beginPresentingPlaybackControls;	// IMP=0x00000000006aa931
- (id)_beginFullscreenPlaybackSession;	// IMP=0x00000000006aa706
- (id)initWithScene:(id)arg1;	// IMP=0x00000000006aa637

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
