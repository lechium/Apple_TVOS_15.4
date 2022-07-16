//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusMovementPerformerDelegate-Protocol.h>
#import <UIKitCore/_UIFocusSystemDelegate-Protocol.h>

@class NSString, UIWindowScene, _UIFocusScrollManager;

__attribute__((visibility("hidden")))
@interface _UIScreenFocusSystemManager : NSObject <_UIFocusSystemDelegate, _UIFocusMovementPerformerDelegate>
{
    _Bool _handlesFocusMovementAction;	// 8 = 0x8
    _Bool _allowsForwardingFocusMovementActions;	// 9 = 0x9
    UIWindowScene *_windowScene;	// 16 = 0x10
    _UIFocusScrollManager *_scrollManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000060df3d
@property(nonatomic, getter=_uiktest_allowsForwardingFocusMovementActions, setter=_uiktest_setAllowsForwardingFocusMovementActions:) _Bool allowsForwardingFocusMovementActions; // @synthesize allowsForwardingFocusMovementActions=_allowsForwardingFocusMovementActions;
@property(readonly, nonatomic) _UIFocusScrollManager *scrollManager; // @synthesize scrollManager=_scrollManager;
@property(readonly, nonatomic) __weak UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
- (_Bool)_shouldForwardFocusMovementRequest:(id)arg1;	// IMP=0x000000000060ddbf
- (_Bool)_handleFailedFocusMovementRequest:(id)arg1 withPerformer:(id)arg2;	// IMP=0x000000000060d936
- (_Bool)_focusSystem:(id)arg1 performFocusMovementWithInfo:(id)arg2;	// IMP=0x000000000060d7d7
- (_Bool)_shouldWaitForFocusMovementActionToEnableFocusSystem:(id)arg1;	// IMP=0x000000000060d7ce
- (id)_focusItemContainerForFocusSystem:(id)arg1;	// IMP=0x000000000060d77e
- (id)_focusMapContainerForFocusSystem:(id)arg1;	// IMP=0x000000000060d72e
- (void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2;	// IMP=0x000000000060d5e0
- (_Bool)_focusSystem:(id)arg1 shouldRestoreFocusInContext:(id)arg2;	// IMP=0x000000000060d3df
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1;	// IMP=0x000000000060d32b
- (id)initWithScene:(id)arg1 scrollManager:(id)arg2;	// IMP=0x000000000060d08d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

