//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ICSTimeZone
{
    id _systemTimeZone;	// 8 = 0x8
}

+ (id)name;	// IMP=0x00000000000076f0
+ (id)timeZoneWithSystemTimeZoneName:(id)arg1;	// IMP=0x000000000000aae6
+ (_Bool)_isTimeZone:(id)arg1 pseudoDSTForDate:(id)arg2;	// IMP=0x00000000000099f9
+ (id)blocksAfterDate:(id)arg1 untilDate:(id)arg2 forTimeZone:(id)arg3;	// IMP=0x0000000000007a1b
+ (long long)matchTypeForSubarray:(id)arg1 inTZChangeArray:(id)arg2;	// IMP=0x0000000000025ee3
+ (_Bool)perfectMatchForSubarray:(id)arg1 inTZChangeArray:(id)arg2;	// IMP=0x0000000000025d0a
+ (id)slowTimeZoneNames;	// IMP=0x0000000000025989
+ (id)quickTimeZoneNames;	// IMP=0x0000000000025939
- (void).cxx_destruct;	// IMP=0x0000000000007939
- (id)systemTimeZoneForDate:(id)arg1;	// IMP=0x000000000000784f
@property(retain, nonatomic) NSString *tzid;
- (id)initWithSystemTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3;	// IMP=0x00000000000076fd
- (id)_previousDSTTransitionForDate:(id)arg1 timezone:(id)arg2;	// IMP=0x000000000000a7df
- (id)initWithTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3;	// IMP=0x0000000000009e47
- (id)initWithSystemTimeZone:(id)arg1;	// IMP=0x0000000000009b7a
- (id)getNSTimeZone:(id)arg1;	// IMP=0x0000000000025b51
- (id)getNSTimeZoneFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x0000000000024c17
- (_Bool)isEqualToNSTimeZone:(id)arg1 forDate:(id)arg2;	// IMP=0x0000000000024982
- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x0000000000026177

@end

