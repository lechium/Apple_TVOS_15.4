//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPeerPaymentSetupFlowControllerConfiguration-Protocol.h>

@class NSString;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentSetupFlowProvisionConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration>
{
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003cebd8
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
- (unsigned long long)peerPaymentSetupConfigurationType;	// IMP=0x00000000003ceba9
- (id)initWithSetupDelegate:(id)arg1;	// IMP=0x00000000003ceb45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

