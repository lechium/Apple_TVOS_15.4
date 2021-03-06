//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CLVehicleHeading : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000057269
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) double trueHeading;
- (id)shortDescription;	// IMP=0x000000000005750a
- (id)description;	// IMP=0x000000000005748d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005743c
- (void)dealloc;	// IMP=0x0000000000057401
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000057348
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057271
- (id)initWithClientVehicleHeading:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000000571f9

@end

