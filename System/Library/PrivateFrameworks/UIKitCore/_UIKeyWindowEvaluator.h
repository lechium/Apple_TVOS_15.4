//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDebugDescriptionProviding-Protocol.h>

@class NSString, UIWindow, _UIKeyWindowSceneStack;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface _UIKeyWindowEvaluator : NSObject <BSDebugDescriptionProviding>
{
    unsigned long long _countOfFBSSceneBackedScenesByShiftedIdiom[11];	// 8 = 0x8
    unsigned long long _defaultEvaluationStrategyByShiftedIdiom[11];	// 96 = 0x60
    _UIKeyWindowSceneStack *_keyWindowSceneStack;	// 184 = 0xb8
    _UIKeyWindowSceneStack *_excludedSceneStack;	// 192 = 0xc0
    UIWindow *_applicationKeyWindow;	// 200 = 0xc8
    id <BSInvalidatable> _stateCaptureToken;	// 208 = 0xd0
}

+ (id)sharedEvaluator;	// IMP=0x0000000000c1cdd7
- (void).cxx_destruct;	// IMP=0x0000000000c1f783
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000c1d243
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000c1d1f3
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000c1d1a3
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000c1d082
- (id)succinctDescription;	// IMP=0x0000000000c1d032
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000c1cf86

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
