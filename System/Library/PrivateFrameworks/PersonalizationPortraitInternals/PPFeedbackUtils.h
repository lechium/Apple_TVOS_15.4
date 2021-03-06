//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPFeedbackUtils : NSObject
{
}

+ (id)featuresForScoreDict:(id)arg1;	// IMP=0x0000000000007001
+ (void)recordUniversalSearchSpotlightStatsFromFeedback:(id)arg1 clientBundleId:(id)arg2 clientIdentifier:(id)arg3;	// IMP=0x0000000000006c13
+ (void)recordUserEventsFromFeedback:(id)arg1 matchingFeedbackItems:(id)arg2 clientBundleId:(id)arg3 clientIdentifier:(id)arg4 domain:(unsigned char)arg5;	// IMP=0x0000000000005b1d
+ (id)scoredItemWithFeaturesForFeatureDictionary:(id)arg1 score:(float)arg2;	// IMP=0x0000000000005862
+ (id)feedbackMetadataForBaseFeedback:(id)arg1;	// IMP=0x0000000000005791
+ (id)feedbackItemForPPFeedbackItem:(id)arg1;	// IMP=0x0000000000005716
+ (void)addBoilerplateToFeedbackLog:(id)arg1;	// IMP=0x00000000000054f5
+ (_Bool)shouldSampleExtraction:(id)arg1;	// IMP=0x0000000000005449
+ (_Bool)shouldSample:(id)arg1;	// IMP=0x000000000000529d
+ (id)feedbackItemsByItemString:(id)arg1;	// IMP=0x0000000000005018

@end

