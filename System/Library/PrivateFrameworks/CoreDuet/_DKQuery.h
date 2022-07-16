//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _DKQuery : NSObject <NSSecureCoding>
{
    _Bool _executeConcurrently;	// 8 = 0x8
}

+ (id)queryNotExecutableError;	// IMP=0x000000000008d97a
+ (id)executableQueryForQuery:(id)arg1;	// IMP=0x000000000008d926
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008d7d8
+ (id)predicateForEventsWithNoSource;	// IMP=0x000000000008d7b6
+ (id)predicateForEventsWithNullSourceDeviceID;	// IMP=0x000000000008d79d
+ (id)predicateForEventsWithSourceDeviceIDs:(id)arg1;	// IMP=0x000000000008d56e
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 itemIDs:(id)arg3;	// IMP=0x000000000008d3ce
+ (id)predicateForEventsWithSourceGroupIDs:(id)arg1;	// IMP=0x000000000008d05a
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 groupIDs:(id)arg3;	// IMP=0x000000000008cf1d
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000008cdbf
+ (id)predicateForEventsWithBundleID:(id)arg1;	// IMP=0x000000000008cd9a
+ (id)predicateForEventsWithSourceID:(id)arg1;	// IMP=0x000000000008cd44
+ (id)endDateSortDescriptorAscending:(_Bool)arg1;	// IMP=0x000000000008cd22
+ (id)startDateSortDescriptorAscending:(_Bool)arg1;	// IMP=0x000000000008cd00
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValueBetween:(double)arg2 andValue:(double)arg3;	// IMP=0x000000000008c8e3
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValue:(double)arg2;	// IMP=0x000000000008c6ea
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andIntegerValue:(long long)arg2;	// IMP=0x000000000008c4fd
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 likeStringValue:(id)arg2;	// IMP=0x000000000008c410
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andStringValue:(id)arg2;	// IMP=0x000000000008c240
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 inValues:(id)arg2;	// IMP=0x000000000008c130
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andValue:(id)arg2;	// IMP=0x000000000008c094
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;	// IMP=0x000000000008bf01
+ (id)predicateForEventsWithStringValueInValues:(id)arg1;	// IMP=0x000000000008bdb8
+ (id)predicateForEventsWithStringValue:(id)arg1;	// IMP=0x000000000008bd93
+ (id)predicateForEventsWithDoubleValueBetween:(double)arg1 and:(double)arg2;	// IMP=0x000000000008bbcc
+ (id)predicateForEventsWithDoubleValue:(double)arg1;	// IMP=0x000000000008bb59
+ (id)predicateForEventsExcludingIntegerValue:(long long)arg1;	// IMP=0x000000000008bae6
+ (id)predicateForEventsWithIntegerValue:(long long)arg1;	// IMP=0x000000000008ba73
+ (id)predicateForEventsWithQuantityValue:(id)arg1;	// IMP=0x000000000008ba42
+ (id)predicateForEventsWithIdentifierValue:(id)arg1;	// IMP=0x000000000008b9e0
+ (id)predicateForEventsWithCategoryValue:(id)arg1;	// IMP=0x000000000008b9ac
+ (id)predicateForEventsWithStreamNames:(id)arg1;	// IMP=0x000000000008b987
+ (id)predicateForEventsWithStreamName:(id)arg1;	// IMP=0x000000000008b962
+ (id)predicateForEventsWithCreationInDateRangeFromAfter:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b93a
+ (id)predicateForEventsWithCreationInDateRangeFrom:(id)arg1 toBefore:(id)arg2;	// IMP=0x000000000008b912
+ (id)localCreationDateSortDescriptorAscending:(_Bool)arg1;	// IMP=0x000000000008b8f0
+ (id)predicateForEventsWithLocalCreationInDateRangeFromAfter:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b8c8
+ (id)predicateForEventsWithLocalCreationInDateRangeFrom:(id)arg1 toBefore:(id)arg2;	// IMP=0x000000000008b8a0
+ (id)predicateForEventsWithMinumumDuration:(double)arg1;	// IMP=0x000000000008b88e
+ (id)predicateForEventsWithMinimumDuration:(double)arg1;	// IMP=0x000000000008b81b
+ (id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)arg1 endSecondOfDay:(unsigned long long)arg2;	// IMP=0x000000000008b76e
+ (id)predicateForEventsWithDayOfWeek:(unsigned long long)arg1;	// IMP=0x000000000008b5f8
+ (id)predicateForEventsIntersectingDateRangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b5d3
+ (id)predicateForEventsContainingDateRangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b5ab
+ (id)predicateForEventsWithStartDateOrCreationDateBefore:(id)arg1;	// IMP=0x000000000008b583
+ (id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b44f
+ (id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b31b
+ (id)predicateForEventsWithEndInDateRangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b2f3
+ (id)predicateForEventsWithStartInDateRangeFromAfter:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b2cb
+ (id)predicateForEventsWithStartInDateRangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b2a3
+ (id)predicateForEventsWithStartDateAfter:(id)arg1;	// IMP=0x000000000008b27e
+ (id)predicateForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x000000000008b26c
+ (id)predicateForObjectsWithUUIDs:(id)arg1;	// IMP=0x000000000008afa6
+ (id)predicateForObjectWithUUID:(id)arg1;	// IMP=0x000000000008af37
@property(nonatomic) _Bool executeConcurrently; // @synthesize executeConcurrently=_executeConcurrently;
- (id)description;	// IMP=0x000000000008d8bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008d864
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008d7e0

@end

