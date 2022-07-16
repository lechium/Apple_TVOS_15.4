//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InAppMessages/IAMViewControllerMetricsDelegate-Protocol.h>
#import <InAppMessages/IAMWebMessageControllerDelegate-Protocol.h>

@class IAMWebMessageController, ICInAppMessageEntry, NSString, NSURL;
@protocol IAMWebMessagePresentationCoordinatorDelegate;

@interface IAMWebMessagePresentationCoordinator : NSObject <IAMWebMessageControllerDelegate, IAMViewControllerMetricsDelegate>
{
    NSURL *_webArchiveURL;	// 8 = 0x8
    CDUnknownBlockType _modalViewControllerDismissedCompletion;	// 16 = 0x10
    _Bool _isPresenting;	// 24 = 0x18
    id <IAMWebMessagePresentationCoordinatorDelegate> _delegate;	// 32 = 0x20
    IAMWebMessageController *_webMessageController;	// 40 = 0x28
    ICInAppMessageEntry *_webMessageEntry;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000407b
@property(retain, nonatomic) ICInAppMessageEntry *webMessageEntry; // @synthesize webMessageEntry=_webMessageEntry;
@property(retain, nonatomic) IAMWebMessageController *webMessageController; // @synthesize webMessageController=_webMessageController;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) __weak id <IAMWebMessagePresentationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewController:(id)arg1 didReportDismissalAction:(long long)arg2;	// IMP=0x0000000000003de9
- (void)webMessageControllerWebViewDidRequestAction:(id)arg1 actionConfiguration:(id)arg2 options:(id)arg3;	// IMP=0x0000000000003b67
- (void)webMessageControllerWebViewDidRequestOpenURL:(id)arg1 url:(id)arg2 options:(id)arg3;	// IMP=0x0000000000003947
- (void)webMessageControllerWebViewDidReportEvent:(id)arg1 event:(id)arg2;	// IMP=0x000000000000389d
- (void)webMessageControllerWebViewDidRequestClose:(id)arg1;	// IMP=0x0000000000003889
- (void)_dismissModalViewController:(CDUnknownBlockType)arg1;	// IMP=0x00000000000037ac
- (void)_handleOpenURL:(id)arg1;	// IMP=0x00000000000035cb
- (void)_handleWebMessageDismissed;	// IMP=0x00000000000033c3
- (void)_modalViewControllerDismissalTransitionDidEnd:(id)arg1;	// IMP=0x000000000000329c
- (_Bool)present;	// IMP=0x0000000000002d8f
- (void)load;	// IMP=0x0000000000002955
- (id)presentingViewController;	// IMP=0x00000000000028b2
- (id)initWithWebMessageEntry:(id)arg1 webArchiveURL:(id)arg2;	// IMP=0x0000000000002803

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

