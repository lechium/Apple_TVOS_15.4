//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIScene;

@protocol _UISceneComponentProviding <NSObject>
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (id)initWithScene:(UIScene *)arg1;

@optional
- (void)_sceneWillInvalidate:(UIScene *)arg1;
- (void)_scene:(UIScene *)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_scene:(UIScene *)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (NSArray *)_actionHandlersForScene:(UIScene *)arg1;
- (NSArray *)_settingsDiffActionsForScene:(UIScene *)arg1;
@end

