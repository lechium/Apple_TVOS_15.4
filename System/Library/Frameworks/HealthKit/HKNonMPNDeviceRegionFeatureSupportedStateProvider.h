//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKDeviceRegionFeatureSupportedStateProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKNonMPNDeviceRegionFeatureSupportedStateProvider : NSObject <HKDeviceRegionFeatureSupportedStateProvider>
{
}

+ (unsigned long long)atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1;	// IMP=0x00000000000d5e53
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;	// IMP=0x00000000000d5e48
+ (unsigned long long)electrocardiogramSupportedOnPhone:(id)arg1 iOSVersionString:(id)arg2;	// IMP=0x00000000000d5e3d
+ (unsigned long long)electrocardiogramSupportedStateForCurrentDeviceRegion;	// IMP=0x00000000000d5e32
+ (unsigned long long)electrocardiogramSupportedStateForDeviceRegion:(id)arg1;	// IMP=0x00000000000d5e27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
