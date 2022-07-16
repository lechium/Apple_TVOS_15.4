//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TUCallCapabilitiesDelegate-Protocol.h"

@class NSUUID;

@protocol TUCallCapabilitiesDelegatePrivate <TUCallCapabilitiesDelegate>

@optional
- (void)didChangeRelayCallingFeatures;
- (void)didChangeEmergencyCallbackPossible;
- (void)didChangeEmergencyCallbackMode;
- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeVoLTECallingCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didRemoveCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didAddCapabilitiesForSenderIdentityWithUUID:(NSUUID *)arg1;
- (void)didChangeCloudCallingDevices;
- (void)didChangeOutgoingRelayCallerID;
- (void)didChangeRelayCallingAvailability;
- (void)didChangeRelayCallingCapabilities;
- (void)didChangeFaceTimeCallingAvailability;
@end

