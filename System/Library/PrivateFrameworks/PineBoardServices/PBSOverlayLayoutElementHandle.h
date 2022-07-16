//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/BSDescriptionProviding-Protocol.h>
#import <PineBoardServices/BSInvalidatable-Protocol.h>
#import <PineBoardServices/PBSOverlayLayoutElement-Protocol.h>

@class NSString, PBSOverlayLayoutController, PBSOverlayLayoutElement, PBSOverlayLayoutElementIdentifier, _PBSOverlayLayoutHandleElement;
@protocol BSInvalidatable;

@interface PBSOverlayLayoutElementHandle : NSObject <BSDescriptionProviding, PBSOverlayLayoutElement, BSInvalidatable>
{
    CDUnknownBlockType _hintHandler;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    _PBSOverlayLayoutHandleElement *_settings;	// 24 = 0x18
    id <BSInvalidatable> _stateCaptureHandle;	// 32 = 0x20
    PBSOverlayLayoutController *_controller;	// 40 = 0x28
    PBSOverlayLayoutElementIdentifier *_identifier;	// 48 = 0x30
}

+ (id)newControlCenterElementHandle;	// IMP=0x0000000000039a50
+ (id)newBulletinElementHandle;	// IMP=0x0000000000039a10
- (void).cxx_destruct;	// IMP=0x000000000003b330
@property(readonly, copy, nonatomic) PBSOverlayLayoutElementIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak PBSOverlayLayoutController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
@property(readonly, copy, nonatomic) _PBSOverlayLayoutHandleElement *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType hintHandler; // @synthesize hintHandler=_hintHandler;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003b040
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003afa0
- (id)succinctDescriptionBuilder;	// IMP=0x000000000003ae80
- (id)succinctDescription;	// IMP=0x000000000003ae10
- (id)_stateDump;	// IMP=0x000000000003ab60
- (id)_updateLayoutElement:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x000000000003a9d0
- (void)_removeLayoutElementWithTransitionContext:(id)arg1;	// IMP=0x000000000003a8b0
- (id)_zeroOffsetHint;	// IMP=0x000000000003a850
@property(readonly, copy, nonatomic) PBSOverlayLayoutElement *element;
- (void)controller:(id)arg1 didReceiveHandleHint:(id)arg2 withTransitionContext:(id)arg3;	// IMP=0x000000000003a700
- (id)updateElement:(CDUnknownBlockType)arg1 withTransitionContext:(id)arg2;	// IMP=0x000000000003a360
- (void)invalidateWithTransitionContext:(id)arg1;	// IMP=0x000000000003a230
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic, getter=isFixed) _Bool fixed;
@property(readonly, nonatomic) struct CGVector stickiness;
@property(readonly, nonatomic) struct CGRect frame;
- (void)invalidate;	// IMP=0x000000000003a0e0
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000003a030
- (id)init;	// IMP=0x0000000000039fd0
- (id)initWithLayoutLevel:(long long)arg1;	// IMP=0x0000000000039f10
- (id)initWithController:(id)arg1 identifier:(id)arg2 layoutLevel:(long long)arg3;	// IMP=0x0000000000039a90

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
