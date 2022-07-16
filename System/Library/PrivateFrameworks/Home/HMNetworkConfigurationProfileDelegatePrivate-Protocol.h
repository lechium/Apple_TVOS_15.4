//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HMNetworkConfigurationProfileDelegate-Protocol.h>

@class HMNetworkConfigurationProfile;

@protocol HMNetworkConfigurationProfileDelegatePrivate <HMNetworkConfigurationProfileDelegate>

@optional
- (void)profileDidUpdateWiFiCredentialType:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateWiFiReconfigurationSupport:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateAccessViolation:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateAllowedHosts:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateNetworkProtectionMode:(HMNetworkConfigurationProfile *)arg1;
@end

