//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface _CDAutoSuCache : NSObject
{
    NSDictionary *_predictedSleep;	// 8 = 0x8
    NSDate *_predictedSleepValidityStartDate;	// 16 = 0x10
    NSDate *_predictedSleepValidityEndDate;	// 24 = 0x18
}

+ (id)sharedCache;	// IMP=0x000000000000a2f9
- (void).cxx_destruct;	// IMP=0x000000000000a70a
@property(retain) NSDate *predictedSleepValidityEndDate; // @synthesize predictedSleepValidityEndDate=_predictedSleepValidityEndDate;
@property(retain) NSDate *predictedSleepValidityStartDate; // @synthesize predictedSleepValidityStartDate=_predictedSleepValidityStartDate;
@property(retain) NSDictionary *predictedSleep; // @synthesize predictedSleep=_predictedSleep;
- (id)cachedPredictedSleepDictionaryForDate:(id)arg1;	// IMP=0x000000000000a4c7
- (void)setCachedPredictedSleepDictionary:(id)arg1 validityStartDate:(id)arg2 validityEndDate:(id)arg3;	// IMP=0x000000000000a3f4
- (void)clear;	// IMP=0x000000000000a37e

@end
