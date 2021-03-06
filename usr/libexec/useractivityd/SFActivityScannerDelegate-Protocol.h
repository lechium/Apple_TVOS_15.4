//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSSet, SFActivityAdvertisement, SFActivityScanner, SFPeerDevice;

@protocol SFActivityScannerDelegate <NSObject>

@optional
- (void)activityScanner:(SFActivityScanner *)arg1 pairedDevicesChanged:(NSSet *)arg2;
- (void)activityScanner:(SFActivityScanner *)arg1 lostDeviceWithDevice:(SFPeerDevice *)arg2;
- (void)activityScanner:(SFActivityScanner *)arg1 foundDeviceWithDevice:(SFPeerDevice *)arg2;
- (void)activityScanner:(SFActivityScanner *)arg1 receivedAdvertisement:(SFActivityAdvertisement *)arg2;
@end

