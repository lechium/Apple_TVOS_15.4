//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneSnapshotAction.h>

@class NSString, RBSAssertion;

@interface FBSceneSnapshotAction : FBSSceneSnapshotAction
{
    NSString *_sceneID;	// 8 = 0x8
    RBSAssertion *_assertion;	// 16 = 0x10
    NSString *_description;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005e45c
@property(readonly, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void)invalidate;	// IMP=0x000000000005e37d
- (void)dealloc;	// IMP=0x000000000005e334
- (id)initWithScene:(id)arg1 requests:(id)arg2 expirationInterval:(double)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005dc9d

@end

