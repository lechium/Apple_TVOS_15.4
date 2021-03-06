//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneSettingsDiffAction-Protocol.h>

@class NSString;
@protocol _UICanvasSettingsDiffAction;

__attribute__((visibility("hidden")))
@interface _UISceneCanvasSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>
{
    id <_UICanvasSettingsDiffAction> _canvasDiffAction;	// 8 = 0x8
}

+ (id)sceneArrayFromCanvasArray:(id)arg1;	// IMP=0x000000000002f63f
- (void).cxx_destruct;	// IMP=0x000000000002f8e3
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;	// IMP=0x000000000002f7df
- (id)initWithCanvasDiffAction:(id)arg1;	// IMP=0x000000000002f774

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

