//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFBulletin, AFUISiriRemoteSceneViewController, NSString;

@protocol AFUISiriRemoteSceneViewControllerDataSource <NSObject>
- (unsigned long long)lockStateForSiriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1;
- (AFBulletin *)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 bulletinWithIdentifier:(NSString *)arg2;
@end

