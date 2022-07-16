//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQueryAnchor, NSArray, NSData;

@interface HKSampleIteratorQueryCursor : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_queryDescriptors;	// 8 = 0x8
    NSArray *_sortDescriptors;	// 16 = 0x10
    HKQueryAnchor *_followingAnchor;	// 24 = 0x18
    HKQueryAnchor *_upToAndIncludingAnchor;	// 32 = 0x20
    NSArray *_distinctByKeyPaths;	// 40 = 0x28
    NSData *_state;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d2e01
- (void).cxx_destruct;	// IMP=0x00000000000d323b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d3230
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d2ec6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d2e09
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d2ca5
- (unsigned long long)hash;	// IMP=0x00000000000d2c16
@property(readonly, copy, nonatomic) NSData *state;
@property(readonly, copy, nonatomic) NSArray *distinctByKeyPaths;
@property(readonly, copy, nonatomic) HKQueryAnchor *upToAndIncludingAnchor;
@property(readonly, copy, nonatomic) HKQueryAnchor *followingAnchor;
@property(readonly, copy, nonatomic) NSArray *sortDescriptors;
@property(readonly, copy, nonatomic) NSArray *queryDescriptors;
- (id)initWithQueryDescriptors:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 state:(id)arg6;	// IMP=0x00000000000d29e2
- (id)initWithQueryDescriptors:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5;	// IMP=0x00000000000d29c6
- (id)init;	// IMP=0x00000000000d294c

@end

