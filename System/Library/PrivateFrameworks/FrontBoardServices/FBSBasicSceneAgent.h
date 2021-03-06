//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/FBSSceneAgent-Protocol.h>

@class NSString;
@protocol FBSSceneHandle;

@interface FBSBasicSceneAgent : NSObject <FBSSceneAgent, BSDescriptionProviding>
{
    id <FBSSceneHandle> _scene;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005ab78
@property(readonly, nonatomic) __weak id <FBSSceneHandle> scene; // @synthesize scene=_scene;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000005a943
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000005a8f3
- (id)succinctDescriptionBuilder;	// IMP=0x000000000005a850
- (id)succinctDescription;	// IMP=0x000000000005a800
@property(readonly, copy) NSString *description;
- (void)_configureWithScene:(id)arg1;	// IMP=0x000000000005a7db
- (void)scene:(id)arg1 reviewEvent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a5f9
- (void)didReceiveMessage:(id)arg1 fromCounterpartAgent:(id)arg2 withResponseSender:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a5e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

