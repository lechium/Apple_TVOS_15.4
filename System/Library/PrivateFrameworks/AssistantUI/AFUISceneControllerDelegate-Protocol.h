//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFUISceneClientSettings, AFUISceneConfiguration, AFUISceneController, FBScene;

@protocol AFUISceneControllerDelegate <NSObject>
- (AFUISceneConfiguration *)sceneConfigurationForDelegate;

@optional
- (void)sceneController:(AFUISceneController *)arg1 sceneDidUpdateClientSettings:(AFUISceneClientSettings *)arg2;
- (void)sceneController:(AFUISceneController *)arg1 sceneWasInvalidated:(FBScene *)arg2 forReason:(unsigned long long)arg3;
- (void)sceneController:(AFUISceneController *)arg1 willInvalidateScene:(FBScene *)arg2 forReason:(unsigned long long)arg3;
- (void)sceneController:(AFUISceneController *)arg1 sceneContentStateDidChange:(FBScene *)arg2;
@end

