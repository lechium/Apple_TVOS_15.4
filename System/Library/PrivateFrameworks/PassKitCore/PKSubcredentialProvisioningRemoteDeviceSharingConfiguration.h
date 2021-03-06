//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAppletSubcredentialSharingRequest, PKAppletSubcredentialSharingSession;
@protocol PKSubcredentialProvisioningUserAuthDelegate;

@interface PKSubcredentialProvisioningRemoteDeviceSharingConfiguration
{
    PKAppletSubcredentialSharingRequest *_sharingRequest;	// 16 = 0x10
    PKAppletSubcredentialSharingSession *_sharingSession;	// 24 = 0x18
    id <PKSubcredentialProvisioningUserAuthDelegate> _userAuthDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002573e2
@property(readonly, nonatomic) __weak id <PKSubcredentialProvisioningUserAuthDelegate> userAuthDelegate; // @synthesize userAuthDelegate=_userAuthDelegate;
@property(readonly, nonatomic) PKAppletSubcredentialSharingSession *sharingSession; // @synthesize sharingSession=_sharingSession;
@property(readonly, nonatomic) PKAppletSubcredentialSharingRequest *sharingRequest; // @synthesize sharingRequest=_sharingRequest;
- (id)description;	// IMP=0x00000000002572e9
- (long long)startingState;	// IMP=0x00000000002572de
- (id)transitionTable;	// IMP=0x00000000002572c5
- (id)initWithSharingRequest:(id)arg1 sharingSession:(id)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 userAuthDelegate:(id)arg5;	// IMP=0x0000000000257181

@end

