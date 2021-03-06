//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/MAUniquelyIdentifiableNode-Protocol.h>

@class MANodeFilter, NSString, PGGraphCalendarUnitNode, PGGraphDateNodeCollection, PGGraphSeasonNode;

@interface PGGraphDateNode <MAUniquelyIdentifiableNode>
{
    NSString *_name;	// 8 = 0x8
}

+ (id)holidayOfDate;	// IMP=0x000000000042330c
+ (id)momentOfDate;	// IMP=0x00000000004231d4
+ (id)weekOfMonthOfDate;	// IMP=0x000000000042317d
+ (id)weekOfYearOfDate;	// IMP=0x0000000000423126
+ (id)dayOfDate;	// IMP=0x00000000004230cf
+ (id)monthOfDate;	// IMP=0x0000000000423078
+ (id)monthDayOfDate;	// IMP=0x0000000000423021
+ (id)yearOfDate;	// IMP=0x0000000000422fca
+ (id)seasonOfDate;	// IMP=0x0000000000422f73
+ (id)filterWithDateNames:(id)arg1;	// IMP=0x0000000000422e9f
+ (id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3;	// IMP=0x0000000000422d44
+ (id)filter;	// IMP=0x0000000000422d0f
- (void).cxx_destruct;	// IMP=0x000000000042223d
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)associatedNodesForRemoval;	// IMP=0x000000000042208d
- (id)lastWeekDateNodes;	// IMP=0x0000000000421ce7
- (id)sameWeekDateNodes;	// IMP=0x00000000004219b6
- (id)localDate;	// IMP=0x0000000000421769
@property(readonly, nonatomic) PGGraphSeasonNode *seasonNode;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000042159b
- (void)enumerateHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000042157a
- (void)enumerateHolidayEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000421559
@property(readonly) long long day;
@property(readonly) long long month;
@property(readonly) long long monthDay;
@property(readonly) long long year;
@property(readonly) PGGraphCalendarUnitNode *weekOfMonthNode;
@property(readonly) PGGraphCalendarUnitNode *weekOfYearNode;
@property(readonly) PGGraphCalendarUnitNode *dayNode;
@property(readonly) PGGraphCalendarUnitNode *monthNode;
@property(readonly) PGGraphCalendarUnitNode *monthDayNode;
@property(readonly) PGGraphCalendarUnitNode *yearNode;
- (unsigned short)domain;	// IMP=0x000000000042114a
- (id)label;	// IMP=0x000000000042112b
@property(readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;
@property(readonly) PGGraphDateNodeCollection *collection;
- (id)description;	// IMP=0x0000000000421050
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000420f78
- (id)propertyDictionary;	// IMP=0x0000000000420efe
- (_Bool)hasProperties:(id)arg1;	// IMP=0x0000000000420e5b
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x0000000000420dfe
- (id)initWithName:(id)arg1;	// IMP=0x0000000000420d90

@end

