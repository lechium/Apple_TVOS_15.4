//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class FBSScene, FBSSceneTransitionContext, NSSet, UICanvas, _UICanvasSceneLaunchOptions;

@protocol _UICanvasSceneActionsHandler <NSObject>
- (NSSet *)respondToActions:(NSSet *)arg1 forScene:(FBSScene *)arg2 inCanvas:(UICanvas *)arg3 fromTransitionContext:(FBSSceneTransitionContext *)arg4;

@optional
- (_UICanvasSceneLaunchOptions *)launchOptionsFromActions:(NSSet *)arg1 forScene:(FBSScene *)arg2 canvas:(UICanvas *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
@end

