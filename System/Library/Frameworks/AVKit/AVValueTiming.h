//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/NSCopying-Protocol.h>
#import <AVKit/NSMutableCopying-Protocol.h>
#import <AVKit/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface AVValueTiming : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010c87a
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010c872
+ (id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;	// IMP=0x000000000010cd02
+ (double)currentTimeStamp;	// IMP=0x000000000010cd4a
@property(readonly, nonatomic) double rate;
@property(readonly, nonatomic) double anchorTimeStamp;
@property(readonly, nonatomic) double anchorValue;
- (CDStruct_f25faad3)_timing;	// IMP=0x000000000010c492
- (Class)classForCoder;	// IMP=0x000000000010c481
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010c3ee
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010c350
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010c318
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010c2e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010c279
- (unsigned long long)hash;	// IMP=0x000000000010c215
- (id)initWithValueTiming:(id)arg1;	// IMP=0x000000000010ca73
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;	// IMP=0x000000000010c9d7
- (_Bool)isEqualToValueTiming:(id)arg1;	// IMP=0x000000000010cbd0
- (double)timeStampForValue:(double)arg1;	// IMP=0x000000000010cb80
- (double)valueForTimeStamp:(double)arg1;	// IMP=0x000000000010cb3a
@property(readonly, nonatomic) double currentValue;

@end
