//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, NSData, NSDateInterval, NSUUID;

@interface HKQuantityDatum : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_UUID;	// 8 = 0x8
    HKQuantity *_quantity;	// 16 = 0x10
    NSDateInterval *_dateInterval;	// 24 = 0x18
    NSData *_resumeContext;	// 32 = 0x20
    CDUnknownBlockType _saveCompletion;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012f06c
- (void).cxx_destruct;	// IMP=0x000000000012f45f
@property(copy, nonatomic) CDUnknownBlockType saveCompletion; // @synthesize saveCompletion=_saveCompletion;
@property(readonly, copy, nonatomic) NSData *resumeContext; // @synthesize resumeContext=_resumeContext;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, copy, nonatomic) HKQuantity *quantity; // @synthesize quantity=_quantity;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)description;	// IMP=0x000000000012f361
- (unsigned long long)hash;	// IMP=0x000000000012f2f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012f248
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012f23d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012f109
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012f074
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 quantity:(id)arg3 resumeContext:(id)arg4;	// IMP=0x000000000012ef5f
- (id)init;	// IMP=0x000000000012eee5

@end
