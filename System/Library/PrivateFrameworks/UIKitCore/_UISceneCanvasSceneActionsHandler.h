//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneBSActionHandler-Protocol.h>

@class NSString;
@protocol _UICanvasSceneActionsHandler;

__attribute__((visibility("hidden")))
@interface _UISceneCanvasSceneActionsHandler : NSObject <_UISceneBSActionHandler>
{
    id <_UICanvasSceneActionsHandler> _canvasSceneActionsHandler;	// 8 = 0x8
}

+ (id)sceneArrayFromCanvasArray:(id)arg1;	// IMP=0x000000000002f8f3
- (void).cxx_destruct;	// IMP=0x000000000002fd8d
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000002fd41
- (id)_launchOptionsFromActions:(id)arg1 forFBSScene:(id)arg2 uiSceneSession:(id)arg3 transitionContext:(id)arg4;	// IMP=0x000000000002fb84
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;	// IMP=0x000000000002fa93
- (id)initWithCanvasSceneActionsHandler:(id)arg1;	// IMP=0x000000000002fa28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
