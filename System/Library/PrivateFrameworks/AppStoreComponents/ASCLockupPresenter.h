//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPromise, ASCAppearMetricsPresenter, ASCLockup, ASCLockupRequest, ASCLockupViewGroup, ASCOfferPresenter, ASCPresenterContext, ASCSignpostSpan;
@protocol ASCLockupPresenterObserver, ASCLockupPresenterView;

__attribute__((visibility("hidden")))
@interface ASCLockupPresenter : NSObject
{
    _Bool _showsPlaceholderContent;	// 8 = 0x8
    id <ASCLockupPresenterObserver> _observer;	// 16 = 0x10
    ASCLockup *_lockup;	// 24 = 0x18
    ASCLockupViewGroup *_group;	// 32 = 0x20
    ASCLockupRequest *_request;	// 40 = 0x28
    CDUnknownBlockType _viewRenderSpanProvider;	// 48 = 0x30
    id <ASCLockupPresenterView> _view;	// 56 = 0x38
    ASCPresenterContext *_context;	// 64 = 0x40
    ASCOfferPresenter *_offerPresenter;	// 72 = 0x48
    ASCAppearMetricsPresenter *_metricsPresenter;	// 80 = 0x50
    AMSPromise *_pendingRequestedLockup;	// 88 = 0x58
    ASCSignpostSpan *_pendingViewRender;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000009227
@property(nonatomic) _Bool showsPlaceholderContent; // @synthesize showsPlaceholderContent=_showsPlaceholderContent;
@property(retain, nonatomic) ASCSignpostSpan *pendingViewRender; // @synthesize pendingViewRender=_pendingViewRender;
@property(retain, nonatomic) AMSPromise *pendingRequestedLockup; // @synthesize pendingRequestedLockup=_pendingRequestedLockup;
@property(readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter; // @synthesize metricsPresenter=_metricsPresenter;
@property(readonly, nonatomic) ASCOfferPresenter *offerPresenter; // @synthesize offerPresenter=_offerPresenter;
@property(readonly, nonatomic) ASCPresenterContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak id <ASCLockupPresenterView> view; // @synthesize view=_view;
@property(copy, nonatomic) CDUnknownBlockType viewRenderSpanProvider; // @synthesize viewRenderSpanProvider=_viewRenderSpanProvider;
@property(copy, nonatomic) ASCLockupRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) ASCLockupViewGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) ASCLockup *lockup; // @synthesize lockup=_lockup;
@property(nonatomic) __weak id <ASCLockupPresenterObserver> observer; // @synthesize observer=_observer;
- (id)description;	// IMP=0x0000000000008ffc
- (void)retryGroup:(id)arg1;	// IMP=0x0000000000008edd
- (void)daemonDidRebootstrap:(id)arg1;	// IMP=0x0000000000008e80
- (void)endViewRender;	// IMP=0x0000000000008a2e
- (void)beginViewRender;	// IMP=0x00000000000087bf
- (void)iconArtwork:(id)arg1 didFailFetchWithError:(id)arg2;	// IMP=0x00000000000085c5
- (void)iconArtwork:(id)arg1 didFetchImage:(id)arg2;	// IMP=0x00000000000082c0
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000007ddb
- (void)request:(id)arg1 didCompleteWithLockup:(id)arg2;	// IMP=0x0000000000007ab8
- (void)requestWillFetchLockup:(id)arg1;	// IMP=0x00000000000079d5
- (void)performFollowUpWork:(CDUnknownBlockType)arg1;	// IMP=0x000000000000796c
- (void)performIconFetch;	// IMP=0x00000000000074bb
- (void)performLockupFetch;	// IMP=0x0000000000007014
- (_Bool)retryRequestIfNeeded;	// IMP=0x0000000000006e2a
- (void)reloadDefaultContent;	// IMP=0x0000000000006d7d
- (void)clearContent;	// IMP=0x0000000000006c19
- (void)showPlaceholderContent;	// IMP=0x0000000000006a3d
@property(readonly, nonatomic) _Bool prefersRightToLeftViewLayout;
- (void)dealloc;	// IMP=0x00000000000064a5
- (id)initWithView:(id)arg1 offerPresenter:(id)arg2 metricsPresenter:(id)arg3;	// IMP=0x00000000000063ed
- (id)initWithView:(id)arg1 offerPresenter:(id)arg2 metricsPresenter:(id)arg3 context:(id)arg4;	// IMP=0x000000000000629e

@end

