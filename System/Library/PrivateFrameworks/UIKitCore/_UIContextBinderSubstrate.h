//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIContextBinding-Protocol.h>

@class FBSScene, NSString;

@interface _UIContextBinderSubstrate : NSObject <_UIContextBinding>
{
    FBSScene *_scene;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000021c224
@property(readonly, nonatomic) FBSScene *scene; // @synthesize scene=_scene;
- (void)detachContext:(id)arg1;	// IMP=0x000000000021c1ef
- (void)attachContext:(id)arg1;	// IMP=0x000000000021c1c4
- (id)initWithScene:(id)arg1;	// IMP=0x000000000021c159

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

