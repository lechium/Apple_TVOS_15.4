//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSCopying-Protocol.h>

@class PKAddCarKeyPassConfiguration, PKAppletSubcredential, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingRequest, PKEntitlementWhitelist, PKPaymentProvisioningController;

@interface PKSubcredentialPairingFlowControllerContext <NSCopying>
{
    _Bool _passwordManuallyEntered;	// 8 = 0x8
    _Bool _shouldRequestInvitation;	// 9 = 0x9
    _Bool _declineRelatedInvitations;	// 10 = 0xa
    PKAddCarKeyPassConfiguration *_configuration;	// 16 = 0x10
    PKEntitlementWhitelist *_appEntitlementWhitelist;	// 24 = 0x18
    PKAppletSubcredential *_credentialToShare;	// 32 = 0x20
    PKAppletSubcredentialSharingRequest *_remoteDeviceSharingRequest;	// 40 = 0x28
    PKAppletSubcredentialSharingInvitation *_remoteDeviceInvitation;	// 48 = 0x30
    PKPaymentProvisioningController *_provisioningController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000014909a
@property(retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(nonatomic) _Bool declineRelatedInvitations; // @synthesize declineRelatedInvitations=_declineRelatedInvitations;
@property(nonatomic) _Bool shouldRequestInvitation; // @synthesize shouldRequestInvitation=_shouldRequestInvitation;
@property(retain, nonatomic) PKAppletSubcredentialSharingInvitation *remoteDeviceInvitation; // @synthesize remoteDeviceInvitation=_remoteDeviceInvitation;
@property(retain, nonatomic) PKAppletSubcredentialSharingRequest *remoteDeviceSharingRequest; // @synthesize remoteDeviceSharingRequest=_remoteDeviceSharingRequest;
@property(retain, nonatomic) PKAppletSubcredential *credentialToShare; // @synthesize credentialToShare=_credentialToShare;
@property(nonatomic) _Bool passwordManuallyEntered; // @synthesize passwordManuallyEntered=_passwordManuallyEntered;
@property(retain, nonatomic) PKEntitlementWhitelist *appEntitlementWhitelist; // @synthesize appEntitlementWhitelist=_appEntitlementWhitelist;
@property(retain, nonatomic) PKAddCarKeyPassConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000148e3b
- (id)initWithFlowType:(long long)arg1;	// IMP=0x0000000000148d2a

@end

