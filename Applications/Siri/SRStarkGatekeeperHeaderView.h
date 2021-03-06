//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSString, SRCarPlayHeaderButton, SRStarkCancelButton, SiriUICachedPreferences, UIFocusContainerGuide;
@protocol SRStarkGatekeeperHeaderViewDelegate, UIFocusItem;

@interface SRStarkGatekeeperHeaderView : UIView
{
    id <UIFocusItem> userFocusedItem;	// 8 = 0x8
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 16 = 0x10
    id <SRStarkGatekeeperHeaderViewDelegate> _delegate;	// 24 = 0x18
    UIFocusContainerGuide *_gatekeeperHeaderViewFocusContainerGuide;	// 32 = 0x20
    NSString *_appBundleIdentifier;	// 40 = 0x28
    SRStarkCancelButton *_cancelButton;	// 48 = 0x30
    SRCarPlayHeaderButton *_trailingButton;	// 56 = 0x38
}

+ (Class)_carPlayHeaderButtonClassForHeaderButtonType:(unsigned long long)arg1;	// IMP=0x002000000001a5f6
+ (unsigned long long)_carPlayHeaderButtonTypeForDirectActionEvent:(long long)arg1;	// IMP=0x001000000001a5da
+ (unsigned long long)_carPlayHeaderButtonTypeForAceObject:(id)arg1;	// IMP=0x001000000001a474
+ (unsigned long long)_gatekeeperTypeForBundleIdentifier:(id)arg1;	// IMP=0x0010000000019a3b
+ (id)gatekeeperForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000018e14
+ (id)gatekeeperForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000018cd0
- (void).cxx_destruct;	// IMP=0x002000000001a7e6
@property(readonly, nonatomic) SRCarPlayHeaderButton *trailingButton; // @synthesize trailingButton=_trailingButton;
@property(readonly, nonatomic) SRStarkCancelButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) UIFocusContainerGuide *gatekeeperHeaderViewFocusContainerGuide; // @synthesize gatekeeperHeaderViewFocusContainerGuide=_gatekeeperHeaderViewFocusContainerGuide;
@property(nonatomic) __weak id <SRStarkGatekeeperHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_currentTurnContext, setter=_setCurrentTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(retain, nonatomic) id <UIFocusItem> userFocusedItem; // @synthesize userFocusedItem;
- (id)accessibilityIdentifier;	// IMP=0x001000000001a703
- (void)_announceButtonTapped:(id)arg1;	// IMP=0x001000000001a624
- (id)_trailingButtonForCarPlayHeaderButtonType:(unsigned long long)arg1;	// IMP=0x001000000001a46c
- (void)_updateTrailingButton:(id)arg1;	// IMP=0x001000000001a3d8
- (void)_updateTrailingButtonForCarPlayHeaderButtonType:(unsigned long long)arg1;	// IMP=0x001000000001a38c
- (void)_updateTrailingButtonForDirectActionEvent:(long long)arg1;	// IMP=0x001000000001a2d5
- (void)_updateTrailingButtonForAceObject:(id)arg1;	// IMP=0x001000000001a209
- (void)_updateAppBundleIdentifier:(id)arg1;	// IMP=0x001000000001a1ae
- (void)cachedPreferences:(id)arg1 announceNotificationsInCarPlayTemporarilyDisabledChanged:(_Bool)arg2;	// IMP=0x001000000001a1a8
- (_Bool)viewContainsFocusItem:(id)arg1;	// IMP=0x001000000001a0dc
- (id)updatedFocusItemForCurrentFocusItem:(id)arg1;	// IMP=0x0010000000019fb1
- (id)preferredFocusEnvironments;	// IMP=0x0010000000019edc
- (void)layoutSubviews;	// IMP=0x0010000000019ae5
- (void)_logGatekeeperDismissedManually;	// IMP=0x0010000000019905
- (void)logGatekeeperAppeared;	// IMP=0x00100000000197cf
- (void)_dismissalButtonTapped:(id)arg1;	// IMP=0x001000000001957d
@property(readonly, nonatomic) SiriUICachedPreferences *cachedPreferences;
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x00100000000194c8
- (id)initWithRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000001941d
- (id)_initWithAppBundleIdentifier:(id)arg1 directActionEvent:(long long)arg2 aceObject:(id)arg3 currentTurnContext:(id)arg4;	// IMP=0x00100000000191b3
- (void)updateForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000001910e
- (void)updateForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000019072

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

