//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SFDeviceDiscovery;

@protocol SDXPCDeviceDiscoveryInterface
- (void)deviceDiscoveryTriggerEnhancedDiscovery:(NSString *)arg1;
- (void)deviceDiscoveryFastScanCancel:(NSString *)arg1;
- (void)deviceDiscoveryFastScanTrigger:(NSString *)arg1;
- (void)deviceDiscoveryUpdate:(SFDeviceDiscovery *)arg1;
- (void)deviceDiscoveryActivate:(SFDeviceDiscovery *)arg1 completion:(void (^)(NSError *))arg2;
@end

