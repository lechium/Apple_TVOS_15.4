//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAppletSubcredentialSharingInvitation, PKPaymentWebService;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKSubcredentialProvisioningRequestRemoteInvitationOperation
{
    PKPaymentWebService *_remoteDeviceWebService;	// 8 = 0x8
    id <PKPaymentWebServiceTargetDeviceProtocol> _remoteTargetDevice;	// 16 = 0x10
    PKAppletSubcredentialSharingInvitation *_invitation;	// 24 = 0x18
}

+ (_Bool)canRequestInvitation:(id)arg1;	// IMP=0x00000000003d40e2
- (void).cxx_destruct;	// IMP=0x00000000003d4569
- (void)performOperation;	// IMP=0x00000000003d42d9
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000003d40f9

@end
