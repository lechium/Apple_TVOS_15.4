//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSSceneClientSettingsDiff, FBSSceneMessage, FBSSceneTransitionContext, FBSWorkspaceSceneRequestOptions, NSSet, NSString;
@protocol __BSAction__, __FBSWorkspaceSceneRemnant__;

@protocol FBSWorkspaceServiceClientInterface
- (oneway void)sceneID:(NSString *)arg1 sendMessage:(FBSSceneMessage *)arg2 withResponse:(void (^)(FBSSceneMessage *, NSError *))arg3;
- (oneway void)sceneID:(NSString *)arg1 didReceiveActions:(NSSet<__BSAction__> *)arg2;
- (oneway void)sceneID:(NSString *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (oneway void)requestSceneWithOptions:(FBSWorkspaceSceneRequestOptions *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)handshakeWithRemnants:(NSSet<__FBSWorkspaceSceneRemnant__> *)arg1;
@end

