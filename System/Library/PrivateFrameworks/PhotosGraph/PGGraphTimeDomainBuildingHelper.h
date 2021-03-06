//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PGGraph;

@interface PGGraphTimeDomainBuildingHelper : NSObject
{
    PGGraph *_graph;	// 8 = 0x8
    NSMutableDictionary *_calendarUnitNodeByValueByUnit;	// 16 = 0x10
    NSMutableDictionary *_seasonNodeBySeasonName;	// 24 = 0x18
    NSMutableDictionary *_dayOfWeekNodeByDayOfWeek;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003f5d01
@property(readonly, nonatomic) NSMutableDictionary *dayOfWeekNodeByDayOfWeek; // @synthesize dayOfWeekNodeByDayOfWeek=_dayOfWeekNodeByDayOfWeek;
@property(readonly, nonatomic) NSMutableDictionary *seasonNodeBySeasonName; // @synthesize seasonNodeBySeasonName=_seasonNodeBySeasonName;
@property(readonly, nonatomic) NSMutableDictionary *calendarUnitNodeByValueByUnit; // @synthesize calendarUnitNodeByValueByUnit=_calendarUnitNodeByValueByUnit;
@property(nonatomic) __weak PGGraph *graph; // @synthesize graph=_graph;
- (id)description;	// IMP=0x00000000003f5c87
- (id)dayOfWeekNodeForDayOfWeek:(long long)arg1;	// IMP=0x00000000003f5b82
- (id)seasonNodeForSeasonName:(id)arg1;	// IMP=0x00000000003f5ac1
- (id)calendarUnitNodeForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;	// IMP=0x00000000003f58ff
- (id)initWithGraph:(id)arg1;	// IMP=0x00000000003f584b

@end

