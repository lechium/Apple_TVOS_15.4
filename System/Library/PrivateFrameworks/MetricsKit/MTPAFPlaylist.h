//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface MTPAFPlaylist : NSObject
{
    NSArray *_metricsData;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000014323
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy) NSArray *metricsData; // @synthesize metricsData=_metricsData;
- (void)updateEventData:(id)arg1;	// IMP=0x00000000000141dc
- (void)addItemStartAtSeconds:(double)arg1 durationSeconds:(double)arg2 metricsData:(id)arg3;	// IMP=0x0000000000014175
- (void)addItemStartAtMilliseconds:(unsigned long long)arg1 durationMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3;	// IMP=0x0000000000014160
- (void)addItemStartAtMilliseconds:(unsigned long long)arg1 endAtMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3;	// IMP=0x0000000000014087
- (id)currentItems;	// IMP=0x0000000000013fff
- (id)initWithSharedMetricsData:(id)arg1;	// IMP=0x0000000000013f2e

@end

