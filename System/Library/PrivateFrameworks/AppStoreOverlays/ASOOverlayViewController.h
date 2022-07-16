//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplicationRotationFollowingController.h>

#import <AppStoreOverlays/ASORemoteContextProvider-Protocol.h>
#import <AppStoreOverlays/ASORemoteViewControllerDelegate-Protocol.h>

@class ASOHostContext, ASOOverlayManager, ASORemoteOverlay, ASORemoteViewController, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ASOOverlayViewController : UIApplicationRotationFollowingController <ASORemoteViewControllerDelegate, ASORemoteContextProvider>
{
    _Bool _isViewServiceLoading;	// 8 = 0x8
    ASORemoteViewController *_remoteViewController;	// 16 = 0x10
    ASOHostContext *_context;	// 24 = 0x18
    ASORemoteOverlay *_currentOverlay;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_viewServiceQueue;	// 40 = 0x28
    NSOperationQueue *_presentationQueue;	// 48 = 0x30
    ASOOverlayManager *_overlayManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000003ede
@property(nonatomic) __weak ASOOverlayManager *overlayManager; // @synthesize overlayManager=_overlayManager;
@property(retain, nonatomic) NSOperationQueue *presentationQueue; // @synthesize presentationQueue=_presentationQueue;
@property(nonatomic) _Bool isViewServiceLoading; // @synthesize isViewServiceLoading=_isViewServiceLoading;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *viewServiceQueue; // @synthesize viewServiceQueue=_viewServiceQueue;
@property(retain, nonatomic) ASORemoteOverlay *currentOverlay; // @synthesize currentOverlay=_currentOverlay;
@property(nonatomic) __weak ASOHostContext *context; // @synthesize context=_context;
@property(retain, nonatomic) ASORemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)shutdownViewServiceIfOverlayOffScreen;	// IMP=0x0000000000003cd5
- (void)didEnterBackground;	// IMP=0x0000000000003c71
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000003bec
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000003a0d
- (void)didFinishDismissingOverlay:(id)arg1;	// IMP=0x000000000000392c
- (void)willStartPresentingOverlay:(id)arg1;	// IMP=0x0000000000003846
- (id)remoteViewControllerForOverlayViewService;	// IMP=0x0000000000003834
- (id)hostContextForOverlayViewService;	// IMP=0x0000000000003822
- (void)_loadRemoteViewController:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003123
- (void)_loadViewServiceIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x00000000000029bd
- (void)loadViewServiceIfNeeded;	// IMP=0x000000000000286a
- (void)failAllQueuedOverlaysWithError:(id)arg1;	// IMP=0x0000000000002557
- (void)dismissOverlay;	// IMP=0x000000000000243c
- (void)presentOverlay:(id)arg1;	// IMP=0x000000000000227d
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000020de
- (void)viewDidLoad;	// IMP=0x0000000000001f4c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000001e65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

