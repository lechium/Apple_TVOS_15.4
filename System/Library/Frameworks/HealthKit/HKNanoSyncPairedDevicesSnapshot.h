//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKNanoSyncPairedDeviceInfo, NSSet;

@interface HKNanoSyncPairedDevicesSnapshot : NSObject <NSCopying, NSSecureCoding>
{
    HKNanoSyncPairedDeviceInfo *_activeDeviceInfo;	// 8 = 0x8
    NSSet *_allDeviceInfos;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001f7387
- (void).cxx_destruct;	// IMP=0x000000000000d7b3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f747d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f738f
- (id)description;	// IMP=0x00000000001f71b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f71ad
- (unsigned long long)hash;	// IMP=0x00000000001f716e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d632
- (id)deviceInfoForSourceBundleIdentifier:(id)arg1;	// IMP=0x00000000001f6f37
@property(readonly, copy) NSSet *allDeviceInfos;
@property(readonly) HKNanoSyncPairedDeviceInfo *activeDeviceInfo;
- (id)initWithPairedDeviceInfos:(id)arg1;	// IMP=0x000000000000d3d6

@end

