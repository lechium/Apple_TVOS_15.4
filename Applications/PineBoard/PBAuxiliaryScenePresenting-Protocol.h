//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class FBProcess, FBSSceneIdentity, FBScene, UIActivityContinuationAction;

@protocol PBAuxiliaryScenePresenting <NSObject>
@property(readonly, nonatomic) long long presentingLayoutLevel;
- (void)dismissAuxiliaryScene:(FBScene *)arg1 completion:(void (^)(void))arg2;
- (void)presentAuxiliaryScene:(FBScene *)arg1;
- (FBSSceneIdentity *)sceneIdentifierForActivity:(UIActivityContinuationAction *)arg1 withProcess:(FBProcess *)arg2;
@end
