//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class _HMNetworkConfigurationProfile;

@protocol _HMNetworkConfigurationProfileDelegate <NSObject>
- (void)networkConfigurationProfileDidUpdateWiFiCredentialType:(_HMNetworkConfigurationProfile *)arg1;
- (void)networkConfigurationProfileDidUpdateWiFiReconfigurationSupport:(_HMNetworkConfigurationProfile *)arg1;
- (void)networkConfigurationProfileDidUpdateAccessViolation:(_HMNetworkConfigurationProfile *)arg1;
- (void)networkConfigurationProfileDidUpdateAllowedHosts:(_HMNetworkConfigurationProfile *)arg1;
- (void)networkConfigurationProfileDidUpdateNetworkAccessMode:(_HMNetworkConfigurationProfile *)arg1;
- (void)networkConfigurationProfileDidUpdateProtectionMode:(_HMNetworkConfigurationProfile *)arg1;
@end

