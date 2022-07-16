//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNQuickActionsManagerDelegate-Protocol.h>
#import <ContactsUI/UIAlertControllerSystemProvidedPresentationDelegate-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>

@class CNQuickActionsManager, NSArray, NSString, UIAlertController, UIView;

__attribute__((visibility("hidden")))
@interface CNAvatarCardAlertController <CNQuickActionsManagerDelegate, UIAlertControllerSystemProvidedPresentationDelegate, UIGestureRecognizerDelegate>
{
    UIView *_sourceView;	// 8 = 0x8
    _Bool _expanded;	// 16 = 0x10
    CNQuickActionsManager *_actionsManager;	// 24 = 0x18
    NSArray *_actions;	// 32 = 0x20
    UIAlertController *_alertController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006008d
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CNQuickActionsManager *actionsManager; // @synthesize actionsManager=_actionsManager;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000005fff6
- (void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;	// IMP=0x000000000005fe20
- (id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1;	// IMP=0x000000000005fe0e
- (_Bool)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(struct CGPoint)arg2;	// IMP=0x000000000005fd4a
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;	// IMP=0x000000000005fd38
- (void)dismissAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005fc3a
- (void)presentAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005fb94
- (void)_performAction:(id)arg1;	// IMP=0x000000000005fa1e
- (void)_refreshAlertController;	// IMP=0x000000000005f4d1
- (void)_updateWithActions:(id)arg1;	// IMP=0x000000000005f408
- (void)_updateActions;	// IMP=0x000000000005f082
- (id)sourceView;	// IMP=0x000000000005f06d
- (void)setSourceView:(id)arg1;	// IMP=0x000000000005efb2
- (void)setContact:(id)arg1;	// IMP=0x000000000005ef58
- (_Bool)isVisible;	// IMP=0x000000000005eef5
- (id)init;	// IMP=0x000000000005ee70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
