//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class PBSystemOverlayPresentationRequest, UIViewController;
@protocol PBSystemOverlayContentPresenting, PBSystemUIPresenting;

@interface PBSystemOverlayPresentationTransaction : BSTransaction
{
    PBSystemOverlayPresentationRequest *_request;	// 8 = 0x8
    UIViewController<PBSystemOverlayContentPresenting> *_viewController;	// 16 = 0x10
    long long _layoutLevel;	// 24 = 0x18
    id <PBSystemUIPresenting> _presentationDelegate;	// 32 = 0x20
    id _interruptionContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001a8ed0
@property(readonly, nonatomic) id interruptionContext; // @synthesize interruptionContext=_interruptionContext;
@property(readonly, nonatomic) __weak id <PBSystemUIPresenting> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) UIViewController<PBSystemOverlayContentPresenting> *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) PBSystemOverlayPresentationRequest *request; // @synthesize request=_request;
- (void)_begin;	// IMP=0x00100000001a89d0
- (void)interruptWithContext:(id)arg1;	// IMP=0x00100000001a8960
- (_Bool)_canBeInterrupted;	// IMP=0x00100000001a8920
- (id)initWithRequest:(id)arg1 viewController:(id)arg2 layoutLevel:(long long)arg3 presentationDelegate:(id)arg4;	// IMP=0x00100000001a8780
- (id)init;	// IMP=0x00100000001a8750

@end

