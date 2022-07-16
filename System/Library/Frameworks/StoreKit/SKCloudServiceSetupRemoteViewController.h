//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKCloudServiceSetupExtensionClientInterface-Protocol.h>

@class NSString;
@protocol SKCloudServiceSetupRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController <SKCloudServiceSetupExtensionClientInterface>
{
    id <SKCloudServiceSetupRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x0000000000021fca
+ (id)exportedInterface;	// IMP=0x0000000000021fb1
- (void).cxx_destruct;	// IMP=0x00000000000222fb
@property(nonatomic) __weak id <SKCloudServiceSetupRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentSafariViewControllerWithURL:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002223e
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000221c6
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022154
- (void)dismissSafariViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000220d9
- (void)dismissCloudServiceSetupViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002205e
- (void)didFinishLoadingWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000021fe3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
