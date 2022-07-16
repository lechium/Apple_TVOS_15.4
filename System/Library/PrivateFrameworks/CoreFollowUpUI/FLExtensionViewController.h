//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CoreFollowUpUI/FLExtensionRemoteContextInterface-Protocol.h>
#import <CoreFollowUpUI/NSExtensionRequestHandling-Protocol.h>

@class NSExtensionContext, NSString;

@interface FLExtensionViewController : UIViewController <NSExtensionRequestHandling, FLExtensionRemoteContextInterface>
{
    NSExtensionContext *_context;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000000002383
+ (id)_exportedInterface;	// IMP=0x0000000000002363
- (void).cxx_destruct;	// IMP=0x0000000000002852
- (void)followUpPerformUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002842
- (void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002753
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000026c3
- (void)finishProcessingWithUserInfo:(id)arg1;	// IMP=0x00000000000024c3
- (void)finishProcessing;	// IMP=0x00000000000024af
- (id)syncHostInterface;	// IMP=0x0000000000002429
- (id)hostInterface;	// IMP=0x00000000000023a3
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x00000000000022d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

