//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface ADDeviceSyncIncrementalChange : NSObject
{
    unsigned long long _generation;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSArray *_insertedOrUpdatedItems;	// 24 = 0x18
    NSArray *_deletedItemUUIDs;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001c989a
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c9e41
- (void).cxx_destruct;	// IMP=0x00100000001c9b6a
@property(readonly, copy, nonatomic) NSArray *deletedItemUUIDs; // @synthesize deletedItemUUIDs=_deletedItemUUIDs;
@property(readonly, copy, nonatomic) NSArray *insertedOrUpdatedItems; // @synthesize insertedOrUpdatedItems=_insertedOrUpdatedItems;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001c9a7d
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001c98a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001c988f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001c9715
- (unsigned long long)hash;	// IMP=0x00100000001c9679
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000001c93f8
- (id)description;	// IMP=0x00100000001c93e4
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 insertedOrUpdatedItems:(id)arg3 deletedItemUUIDs:(id)arg4;	// IMP=0x00100000001c92f2
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c9eb0

@end

