//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDMediaBrowserDataSource-Protocol.h>

@class HMDDevice, HMFSystemInfo, NSString;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>
{
}

+ (id)shortDescription;	// IMP=0x0000000000aaeb48
@property(readonly) HMDDevice *currentDevice;
@property(readonly) HMFSystemInfo *systemInfo;
@property(readonly) _Bool requiresHomePodPairing;
@property(readonly) _Bool isAppleMediaAccessory;
@property(readonly) NSString *currentAccessoryMediaRouteIdentifier;

@end

