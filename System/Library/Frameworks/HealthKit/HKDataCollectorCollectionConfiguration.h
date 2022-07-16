//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@interface HKDataCollectorCollectionConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    double _collectionInterval;	// 8 = 0x8
    double _maxUnsentDatumAge;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014600a
@property(nonatomic) double maxUnsentDatumAge; // @synthesize maxUnsentDatumAge=_maxUnsentDatumAge;
@property(nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
- (id)description;	// IMP=0x000000000014611d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001460a7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000146012
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000145fff
- (id)initWithCollectionInterval:(double)arg1 maxUnsentDatumAge:(double)arg2;	// IMP=0x0000000000145fad

@end

