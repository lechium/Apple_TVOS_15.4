//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKSubcredentialProvisioningViewModelProtocol-Protocol.h>

@class NSString, PKSubcredentialProvisioningConfiguration, PKSubcredentialProvisioningController;

@interface PKSubcredentialProvisioningViewModel : NSObject <PKSubcredentialProvisioningViewModelProtocol>
{
    PKSubcredentialProvisioningController *_provisioningController;	// 8 = 0x8
    PKSubcredentialProvisioningConfiguration *_config;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001a224e
@property(retain, nonatomic) PKSubcredentialProvisioningConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) PKSubcredentialProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
- (void)rescindSimilarInvitationsToSharingRequest:(id)arg1 withWebService:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a1a0e
- (void)setNewAuthRandomIfNecessaryWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a182c
- (void)cancelProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a1787
- (void)startProvisioning;	// IMP=0x00000000001a13fc
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000001a138f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

