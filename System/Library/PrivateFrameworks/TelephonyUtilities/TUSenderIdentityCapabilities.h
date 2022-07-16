//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, NSUUID, TUCTCapabilityInfo, TUCallCapabilitiesXPCClient, TUSenderIdentityCapabilitiesState;

@interface TUSenderIdentityCapabilities : NSObject
{
    NSUUID *_senderIdentityUUID;	// 8 = 0x8
    NSString *_thumperCallingLocalDeviceID;	// 16 = 0x10
    TUSenderIdentityCapabilitiesState *_state;	// 24 = 0x18
    TUCallCapabilitiesXPCClient *_client;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000010501
@property(readonly, nonatomic) TUCallCapabilitiesXPCClient *client; // @synthesize client=_client;
@property(readonly, copy, nonatomic) TUSenderIdentityCapabilitiesState *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *thumperCallingLocalDeviceID; // @synthesize thumperCallingLocalDeviceID=_thumperCallingLocalDeviceID;
@property(readonly, copy, nonatomic) NSUUID *senderIdentityUUID; // @synthesize senderIdentityUUID=_senderIdentityUUID;
- (id)debugDescription;	// IMP=0x000000000001024f
- (void)_sendNotificationsAndCallbacksComparingToOldSenderIdentityCapabilities:(id)arg1;	// IMP=0x000000000000f586
- (void)cancelPinRequestFromPrimaryDeviceForThumperCalling;	// IMP=0x000000000000f4e2
- (void)requestPinFromPrimaryDeviceForThumperCalling;	// IMP=0x000000000000f43e
- (void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(_Bool)arg1;	// IMP=0x000000000000f26f
- (void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2;	// IMP=0x000000000000f078
- (void)invalidateAndRefreshThumperCallingProvisioningURL;	// IMP=0x000000000000efb2
- (void)setThumperCallingEnabled:(_Bool)arg1;	// IMP=0x000000000000eeb6
- (void)invalidateAndRefreshWiFiCallingProvisioningURL;	// IMP=0x000000000000edf0
- (void)setWiFiCallingRoamingEnabled:(_Bool)arg1;	// IMP=0x000000000000ecf4
- (void)setWiFiCallingEnabled:(_Bool)arg1;	// IMP=0x000000000000ebf8
- (void)setVoLTECallingEnabled:(_Bool)arg1;	// IMP=0x000000000000eafc
@property(readonly, nonatomic, getter=isThumperCallingAllowedOnDefaultPairedSecondaryDevice) _Bool thumperCallingAllowedOnDefaultPairedSecondaryDevice;
- (_Bool)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1;	// IMP=0x000000000000e61e
@property(readonly, copy, nonatomic) NSData *thumperCallingProvisioningPostData;
@property(readonly, nonatomic, getter=isThumperCallingProvisioningURLInvalid) _Bool thumperCallingProvisioningURLInvalid;
@property(readonly, copy, nonatomic) NSURL *thumperCallingProvisioningURL;
@property(readonly, nonatomic) int thumperCallingProvisioningStatus;
@property(readonly, nonatomic, getter=isThumperCallingCurrentlyAvailable) _Bool thumperCallingCurrentlyAvailable;
@property(readonly, nonatomic) TUCTCapabilityInfo *thumperCallingCapabilityInfo;
@property(readonly, nonatomic, getter=isThumperCallingEnabled) _Bool thumperCallingEnabled;
@property(readonly, nonatomic, getter=isThumperCallingAllowedForCurrentDevice) _Bool thumperCallingAllowedForCurrentDevice;
@property(readonly, nonatomic) _Bool supportsThumperCallingOverCellularData;
@property(readonly, nonatomic) _Bool supportsThumperCalling;
@property(readonly, copy, nonatomic) NSData *wiFiCallingProvisioningPostData;
@property(readonly, nonatomic, getter=isWiFiCallingProvisioningURLInvalid) _Bool wiFiCallingProvisioningURLInvalid;
@property(readonly, copy, nonatomic) NSURL *wiFiCallingProvisioningURL;
@property(readonly, nonatomic) int wiFiCallingProvisioningStatus;
@property(readonly, nonatomic, getter=isEmergencyWiFiCallingCurrentlyAvailable) _Bool emergencyWiFiCallingCurrentlyAvailable;
@property(readonly, nonatomic) _Bool supportsEmergencyWiFiCalling;
@property(readonly, nonatomic, getter=isWiFiCallingCurrentlyAvailable) _Bool wiFiCallingCurrentlyAvailable;
@property(readonly, nonatomic) TUCTCapabilityInfo *wiFiCallingCapabilityInfo;
@property(readonly, nonatomic, getter=isWiFiCallingRoamingEnabled) _Bool wiFiCallingRoamingEnabled;
@property(readonly, nonatomic) _Bool supportsWiFiCallingRoaming;
@property(readonly, nonatomic, getter=isWiFiCallingEnabled) _Bool wiFiCallingEnabled;
@property(readonly, nonatomic) _Bool supportsWiFiCalling;
@property(readonly, nonatomic, getter=isVoLTECallingCurrentlyAvailable) _Bool voLTECallingCurrentlyAvailable;
@property(readonly, nonatomic) TUCTCapabilityInfo *voLTECallingCapabilityInfo;
@property(readonly, nonatomic, getter=isVoLTECallingEnabled) _Bool voLTECallingEnabled;
@property(readonly, nonatomic) _Bool supportsVoLTECalling;
@property(readonly, nonatomic, getter=isCSCallingCurrentlyAvailable) _Bool csCallingCurrentlyAvailable;
@property(readonly, nonatomic) _Bool canAttemptEmergencyCallsWithoutCellularConnection;
@property(readonly, nonatomic) _Bool canAttemptTelephonyCallsWithoutCellularConnection;
@property(readonly, nonatomic) _Bool supportsSimultaneousVoiceAndData;
- (id)initWithSenderIdentityUUID:(id)arg1 state:(id)arg2 client:(id)arg3;	// IMP=0x000000000000d715

@end

