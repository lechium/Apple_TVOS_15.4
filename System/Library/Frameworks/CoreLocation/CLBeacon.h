//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class CLBeaconInternal, NSDate, NSNumber, NSUUID;

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding>
{
    CLBeaconInternal *_internal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004f98c
- (void)setReferenceFrame:(int)arg1;	// IMP=0x000000000004fe8b
- (int)referenceFrame;	// IMP=0x000000000004fe83
- (id)description;	// IMP=0x000000000004fdad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004fda2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004fbe7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004f994
- (void)dealloc;	// IMP=0x000000000004f905
- (id)initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6 timestamp:(double)arg7;	// IMP=0x000000000004f8cf
- (id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6;	// IMP=0x000000000004f7f7
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) long long rssi;
@property(readonly, nonatomic) double accuracy;
@property(readonly, nonatomic) long long proximity;
@property(readonly, copy, nonatomic) NSNumber *minor;
@property(readonly, copy, nonatomic) NSNumber *major;
@property(readonly, copy, nonatomic) NSUUID *proximityUUID;
@property(readonly, copy, nonatomic) NSUUID *UUID;

@end

