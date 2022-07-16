//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFormatter, EKEventStore, _CDInteractionStore;

@interface _PSSuggestionFromTextPredictor : NSObject
{
    EKEventStore *_eventStore;	// 8 = 0x8
    _CDInteractionStore *_interactionStore;	// 16 = 0x10
    CNContactFormatter *_contactFormatter;	// 24 = 0x18
}

+ (_Bool)isEligibleUnstructuredEvent:(id)arg1;	// IMP=0x000000000005d5da
- (void).cxx_destruct;	// IMP=0x000000000005df1d
- (id)suggestionsFromUnstructuredCalendarEventsWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 priorScoreThreshold:(float)arg4;	// IMP=0x000000000005dc13
- (id)suggestionsFromPortraitExtractionsWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 priorScoreThreshold:(float)arg4 reason:(id)arg5;	// IMP=0x000000000005d747
- (id)suggestionsFromIncompleteRemindersWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 priorScoreThreshold:(float)arg4;	// IMP=0x000000000005d73a
- (id)suggestionFromText:(id)arg1 priorScoreThreshold:(float)arg2 bundleID:(id)arg3 reason:(id)arg4;	// IMP=0x000000000005d43b
- (id)suggestionFromContactPriors:(id)arg1 priorScoreThreshold:(float)arg2 bundleID:(id)arg3 reason:(id)arg4;	// IMP=0x000000000005c994
- (id)initWithEventStore:(id)arg1 interactionStore:(id)arg2;	// IMP=0x000000000005c8df

@end

