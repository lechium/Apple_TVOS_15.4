//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CLVehicleSpeed : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005767b
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) double speed;
- (id)shortDescription;	// IMP=0x000000000005790f
- (id)description;	// IMP=0x0000000000057892
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000057841
- (void)dealloc;	// IMP=0x0000000000057806
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005774d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057683
- (id)initWithClientVehicleSpeed:(CDStruct_6a5f25ec)arg1;	// IMP=0x0000000000057605

@end

