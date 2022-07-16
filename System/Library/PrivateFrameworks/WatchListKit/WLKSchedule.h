//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface WLKSchedule : NSObject
{
    NSMutableArray *_mutableEvents;	// 8 = 0x8
    NSDictionary *_dictionary;	// 16 = 0x10
    NSString *_serviceID;	// 24 = 0x18
    NSString *_externalServiceID;	// 32 = 0x20
    NSString *_channelID;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    NSDate *_endDate;	// 56 = 0x38
    NSNumber *_cleanupTime;	// 64 = 0x40
    NSDate *_earliestEventDate;	// 72 = 0x48
    NSDate *_latestEventDate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000004da4c
@property(readonly, copy, nonatomic) NSDate *latestEventDate; // @synthesize latestEventDate=_latestEventDate;
@property(readonly, copy, nonatomic) NSDate *earliestEventDate; // @synthesize earliestEventDate=_earliestEventDate;
@property(readonly, nonatomic) NSNumber *cleanupTime; // @synthesize cleanupTime=_cleanupTime;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, copy, nonatomic) NSString *externalServiceID; // @synthesize externalServiceID=_externalServiceID;
@property(readonly, copy, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
- (unsigned long long)hash;	// IMP=0x000000000004d9e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004d97d
- (_Bool)_isDate:(id)arg1 containedByDate:(id)arg2 andDate:(id)arg3;	// IMP=0x000000000004d8f2
- (void)prune;	// IMP=0x000000000004d79d
- (id)eventAfterDate:(id)arg1;	// IMP=0x000000000004d5d7
- (id)adjacentEventsForDate:(id)arg1 fuzziness:(double)arg2;	// IMP=0x000000000004d2d7
- (id)eventForDate:(id)arg1;	// IMP=0x000000000004d0c0
@property(readonly, copy, nonatomic) NSArray *events;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004cc7b

@end

