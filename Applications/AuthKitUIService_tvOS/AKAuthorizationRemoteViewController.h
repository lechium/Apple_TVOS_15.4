//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AKAuthorizationTTSUViewController, AKAuthorizationTVServicePresenter, NSString;

@interface AKAuthorizationRemoteViewController : UIViewController
{
    AKAuthorizationTVServicePresenter *_presenter;	// 8 = 0x8
    AKAuthorizationTTSUViewController *_ttsuViewController;	// 16 = 0x10
}

+ (id)_remoteViewControllerInterface;	// IMP=0x00200000000020af
+ (id)_exportedInterface;	// IMP=0x0010000000001f36
- (void).cxx_destruct;	// IMP=0x00200000000028b9
@property(retain, nonatomic) AKAuthorizationTTSUViewController *ttsuViewController; // @synthesize ttsuViewController=_ttsuViewController;
@property(retain, nonatomic) AKAuthorizationTVServicePresenter *presenter; // @synthesize presenter=_presenter;
- (id)_imageIORepresentationWithImage:(id)arg1 type:(id)arg2 options:(id)arg3;	// IMP=0x0010000000002751
- (void)_handleFetchAppIconMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000214d
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001f1f
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001e27
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0010000000001d45
- (void)authorizationTTSUViewControllerDidDismiss:(id)arg1;	// IMP=0x0010000000001d06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

