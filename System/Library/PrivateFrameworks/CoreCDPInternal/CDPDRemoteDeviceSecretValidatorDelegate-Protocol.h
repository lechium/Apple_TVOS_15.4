//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/CDPDDeviceSecretValidatorDelegate-Protocol.h>

@class CDPCustodianRecoveryInfo, CDPDRemoteDeviceSecretValidator;

@protocol CDPDRemoteDeviceSecretValidatorDelegate <CDPDDeviceSecretValidatorDelegate>
- (void)remoteSecretValidator:(CDPDRemoteDeviceSecretValidator *)arg1 attemptCustodianRecoveryWithInfo:(CDPCustodianRecoveryInfo *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)cancelRemoteSecretValidatorApplicationToJoinCircle:(CDPDRemoteDeviceSecretValidator *)arg1;
- (void)remoteSecretValidator:(CDPDRemoteDeviceSecretValidator *)arg1 applyToJoinCircleWithJoinHandler:(void (^)(_Bool, NSError *))arg2;
@end

