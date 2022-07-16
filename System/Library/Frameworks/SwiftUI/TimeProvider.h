//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDateFormatter, NSMutableArray;

@interface TimeProvider
{
    NSDateFormatter *_dateFormatter;	// 8 = 0x8
    NSMutableArray *_sizingFallbackBlocks;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000add5
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)_timeTextWithDropMinutes:(_Bool)arg1 dropDesignator:(_Bool)arg2;	// IMP=0x000000000000ab5f
- (id)_sessionTextForIndex:(long long)arg1;	// IMP=0x000000000000a6b0
- (id)initWithDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4;	// IMP=0x000000000000a626
- (id)initWithDate:(id)arg1;	// IMP=0x000000000000a57d

@end

