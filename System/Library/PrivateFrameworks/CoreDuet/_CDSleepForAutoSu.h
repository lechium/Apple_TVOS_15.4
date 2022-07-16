//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CDAutoSuConfig;
@protocol _DKKnowledgeQuerying;

@interface _CDSleepForAutoSu : NSObject
{
    _Bool _enableCaching;	// 8 = 0x8
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 16 = 0x10
    _CDAutoSuConfig *_autoSuConfig;	// 24 = 0x18
}

+ (id)tuningDictionary;	// IMP=0x000000000000b930
+ (id)readConfigurationFromDefaults;	// IMP=0x000000000000b8c8
+ (id)sanitizeTuningConfiguration:(id)arg1;	// IMP=0x000000000000b872
+ (id)defaultTuningConfiguration;	// IMP=0x000000000000b7c7
- (void).cxx_destruct;	// IMP=0x000000000000cd29
@property _Bool enableCaching; // @synthesize enableCaching=_enableCaching;
@property(retain) _CDAutoSuConfig *autoSuConfig; // @synthesize autoSuConfig=_autoSuConfig;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (id)predictNextDateForLastUnlockAttemptOfTheDay;	// IMP=0x000000000000cb92
- (id)predicitLastUnlockForDay:(id)arg1;	// IMP=0x000000000000ca78
- (id)predictForDate:(id)arg1 fromState:(id)arg2 withConfig:(id)arg3;	// IMP=0x000000000000c557
- (id)predictForDate:(id)arg1 fromState:(id)arg2;	// IMP=0x000000000000c4bd
- (id)retrieveSleepProbabilities:(id)arg1;	// IMP=0x000000000000c2a6
- (id)getUnlockAndSoftwareUpdateTimesWithConfig:(id)arg1 referenceDate:(id)arg2;	// IMP=0x000000000000c19a
- (id)predictedSleepDictionaryForDate:(id)arg1 usingKnowledge:(id)arg2;	// IMP=0x000000000000baa9
- (id)predictedSleepDictionaryForDate:(id)arg1;	// IMP=0x000000000000ba02
- (id)getUnlockAndSoftwareUpdateTimes;	// IMP=0x000000000000b6de
- (id)makeDictionaryForEventStreamWhenPredictionTemporarilyUnavailable:(id)arg1;	// IMP=0x000000000000b628
- (id)defaultTimesWhenPredictionUnavailable:(id)arg1 withConfig:(id)arg2;	// IMP=0x000000000000b3a7
- (id)defaultTimesWhenPredictionUnavailable:(id)arg1;	// IMP=0x000000000000b32a
- (id)proposeTimesFromRelativeOffsetsForDate:(id)arg1 lastUnlock:(int)arg2 suStart:(int)arg3 suEnd:(int)arg4 unrestrictedSleepEnd:(int)arg5 config:(id)arg6;	// IMP=0x000000000000adcd
- (id)initWithKnowledgeStore:(id)arg1;	// IMP=0x000000000000a775
- (id)init;	// IMP=0x000000000000a73d

@end

