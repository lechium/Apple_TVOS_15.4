//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface InAppDownloadTimeEstimator : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_times;	// 16 = 0x10
    NSMutableArray *_values;	// 24 = 0x18
    _Bool _canPause;	// 32 = 0x20
    double _changeRate;	// 40 = 0x28
    unsigned long long _currentValue;	// 48 = 0x30
    double _estimatedTimeRemaining;	// 56 = 0x38
    unsigned long long _maxValue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000001a09c
- (void)_updateStatisticsFromSnapshots;	// IMP=0x0010000000019e97
- (void)setCurrentValue:(unsigned long long)arg1;	// IMP=0x0010000000019caf
@property(readonly, nonatomic) double estimatedTimeRemaining;
- (id)initWithMaxValue:(unsigned long long)arg1;	// IMP=0x0010000000019b44

@end

