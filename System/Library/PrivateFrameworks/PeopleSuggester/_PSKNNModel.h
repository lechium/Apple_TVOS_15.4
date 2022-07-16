//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, _CDInteractionCache, _CDInteractionStore, _PSContactResolver;
@protocol _DKKnowledgeQuerying;

@interface _PSKNNModel : NSObject
{
    _Bool __PSInteractionModelInUse;	// 8 = 0x8
    unsigned long long _k;	// 16 = 0x10
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 24 = 0x18
    _CDInteractionStore *_interactionStore;	// 32 = 0x20
    _PSContactResolver *_contactResolver;	// 40 = 0x28
    NSArray *_filterBundleIds;	// 48 = 0x30
    _CDInteractionCache *_messageInteractionCache;	// 56 = 0x38
    _CDInteractionCache *_shareInteractionCache;	// 64 = 0x40
    NSArray *_groupActivityInteractionCache;	// 72 = 0x48
    unsigned long long __PSKnnTopKShares;	// 80 = 0x50
    unsigned long long __PSKnnMessagesZkwTopNFilter;	// 88 = 0x58
    unsigned long long __PSKnnModelRecencyMarginToPromoteShares;	// 96 = 0x60
    unsigned long long __PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;	// 104 = 0x68
    unsigned long long __PSKnnModelRecencyMarginToRetainShares;	// 112 = 0x70
    unsigned long long __PSKnnModelShareSheetMinimumOccurenceRegularizer;	// 120 = 0x78
    unsigned long long __PSKnnModelSharePlayMinimumOccurenceRegularizer;	// 128 = 0x80
    unsigned long long __PSKnnTopKGroupActivities;	// 136 = 0x88
    unsigned long long __PSKnnModelRecencyMarginToRetainGroupActivities;	// 144 = 0x90
    unsigned long long __PSKnnModelGroupActivitiesMinimumOccuranceRegularizer;	// 152 = 0x98
    NSDictionary *__PSKnnModelMinimumOccurenceOfInteractionByMechanism;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000007a068
@property(retain, nonatomic) NSDictionary *_PSKnnModelMinimumOccurenceOfInteractionByMechanism; // @synthesize _PSKnnModelMinimumOccurenceOfInteractionByMechanism=__PSKnnModelMinimumOccurenceOfInteractionByMechanism;
@property(nonatomic) _Bool _PSInteractionModelInUse; // @synthesize _PSInteractionModelInUse=__PSInteractionModelInUse;
@property(nonatomic) unsigned long long _PSKnnModelGroupActivitiesMinimumOccuranceRegularizer; // @synthesize _PSKnnModelGroupActivitiesMinimumOccuranceRegularizer=__PSKnnModelGroupActivitiesMinimumOccuranceRegularizer;
@property(nonatomic) unsigned long long _PSKnnModelRecencyMarginToRetainGroupActivities; // @synthesize _PSKnnModelRecencyMarginToRetainGroupActivities=__PSKnnModelRecencyMarginToRetainGroupActivities;
@property(nonatomic) unsigned long long _PSKnnTopKGroupActivities; // @synthesize _PSKnnTopKGroupActivities=__PSKnnTopKGroupActivities;
@property(nonatomic) unsigned long long _PSKnnModelSharePlayMinimumOccurenceRegularizer; // @synthesize _PSKnnModelSharePlayMinimumOccurenceRegularizer=__PSKnnModelSharePlayMinimumOccurenceRegularizer;
@property(nonatomic) unsigned long long _PSKnnModelShareSheetMinimumOccurenceRegularizer; // @synthesize _PSKnnModelShareSheetMinimumOccurenceRegularizer=__PSKnnModelShareSheetMinimumOccurenceRegularizer;
@property(nonatomic) unsigned long long _PSKnnModelRecencyMarginToRetainShares; // @synthesize _PSKnnModelRecencyMarginToRetainShares=__PSKnnModelRecencyMarginToRetainShares;
@property(nonatomic) unsigned long long _PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId; // @synthesize _PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId=__PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;
@property(nonatomic) unsigned long long _PSKnnModelRecencyMarginToPromoteShares; // @synthesize _PSKnnModelRecencyMarginToPromoteShares=__PSKnnModelRecencyMarginToPromoteShares;
@property(nonatomic) unsigned long long _PSKnnMessagesZkwTopNFilter; // @synthesize _PSKnnMessagesZkwTopNFilter=__PSKnnMessagesZkwTopNFilter;
@property(nonatomic) unsigned long long _PSKnnTopKShares; // @synthesize _PSKnnTopKShares=__PSKnnTopKShares;
@property(retain, nonatomic) NSArray *groupActivityInteractionCache; // @synthesize groupActivityInteractionCache=_groupActivityInteractionCache;
@property(retain, nonatomic) _CDInteractionCache *shareInteractionCache; // @synthesize shareInteractionCache=_shareInteractionCache;
@property(retain, nonatomic) _CDInteractionCache *messageInteractionCache; // @synthesize messageInteractionCache=_messageInteractionCache;
@property(readonly, nonatomic) NSArray *filterBundleIds; // @synthesize filterBundleIds=_filterBundleIds;
@property(readonly, nonatomic) _PSContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(readonly, nonatomic) unsigned long long k; // @synthesize k=_k;
- (id)extractNearestNeighborsForMapsQueryResult:(id)arg1 andNeighbors:(id)arg2 frequencyOnly:(_Bool)arg3;	// IMP=0x0000000000079741
- (id)featuresFromMapsFeedbackEvents:(id)arg1;	// IMP=0x000000000007923f
- (id)mapsShareEtaDefaultKnnSuggestions:(id)arg1 maxSuggestions:(unsigned long long)arg2;	// IMP=0x0000000000078ba7
- (id)rankedMapsShareEtaSuggestions:(id)arg1 maxSuggestions:(unsigned long long)arg2;	// IMP=0x0000000000078b9a
- (unsigned long long)indexToInsertNeighbor:(id)arg1 array:(id)arg2;	// IMP=0x0000000000078a65
- (id)neighborsFromTrainingData:(id)arg1 k:(unsigned long long)arg2 queryPoint:(id)arg3;	// IMP=0x0000000000078762
- (id)sliceStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ofArray:(id)arg3;	// IMP=0x0000000000078554
- (id)featuresFromInteractionsSplitRecipients:(id)arg1;	// IMP=0x0000000000077d4a
- (id)featuresFromInteractions:(id)arg1;	// IMP=0x0000000000077892
- (id)rankedLabelsFromInteractionsSiriNLWithInteractions:(id)arg1 andDistances:(id)arg2 freqOnly:(_Bool)arg3;	// IMP=0x0000000000076ca9
- (id)rankedLabelsFromInteractionsSingleRecipientArray:(id)arg1 andDistances:(id)arg2 freqOnly:(_Bool)arg3 contactsOnly:(_Bool)arg4 scoreLikeShareSheet:(_Bool)arg5;	// IMP=0x0000000000075c11
- (id)rankedLabelsFromInteractionsMaintainRecipientsArray:(id)arg1 andDistances:(id)arg2 freqOnly:(_Bool)arg3;	// IMP=0x0000000000074084
- (id)extractNearestNeighborLabelsForQueryResult:(id)arg1 andNeighbors:(id)arg2 frequencyOnly:(_Bool)arg3 rankerType:(long long)arg4 contactsOnly:(_Bool)arg5;	// IMP=0x0000000000073bc8
- (id)mergedSuggestionsFromShares:(id)arg1 andInteractions:(id)arg2;	// IMP=0x0000000000073977
- (id)featureVectorFromAbsolutePredictionTime:(double)arg1 bundleId:(id)arg2;	// IMP=0x0000000000073891
- (id)featureVectorFromPredictionDate:(id)arg1 bundleId:(id)arg2;	// IMP=0x00000000000737a0
- (id)targetBundleIdsForFilterBundlesIds:(id)arg1;	// IMP=0x00000000000735d4
- (id)filterGroupActivityInteractionsWithMinimumOccurences:(unsigned long long)arg1 contextBundleId:(id)arg2 filterOutNonMatchingSourceBundleIDs:(_Bool)arg3;	// IMP=0x0000000000072f34
- (id)filterShareInteractions:(id)arg1 minimumOccurencesByMechanism:(id)arg2 contextBundleId:(id)arg3 filterOutNonMatchingSourceBundleIDs:(_Bool)arg4;	// IMP=0x0000000000072558
- (id)splitShareLabels:(id)arg1 suggestionDate:(id)arg2 contextBundleId:(id)arg3;	// IMP=0x0000000000071750
- (id)interactionLabelsForQueryResult:(id)arg1 queryPoint:(id)arg2 rankerType:(long long)arg3 frequencyOnly:(_Bool)arg4 contactsOnly:(_Bool)arg5;	// IMP=0x000000000007165a
- (id)normalizedScoresForInputDictionary:(id)arg1;	// IMP=0x0000000000071370
- (id)softmaxAppliedOnScoresForInputDictionary:(id)arg1;	// IMP=0x0000000000070f75
- (id)messagesGroupsMatchingSearchPrefix:(id)arg1 inInteractions:(id)arg2;	// IMP=0x00000000000709fb
- (id)suggestionProxiesBasedOnNonSharingInteractionsWithPredictionContext:(id)arg1;	// IMP=0x00000000000709ee
- (id)suggestionProxiesBasedOnExpanseInteractionsWithPredictionContext:(id)arg1 withOnlyTopCandidates:(_Bool)arg2 withFilterOutNonMatchingSourceBundleIDs:(_Bool)arg3;	// IMP=0x00000000000709e1
- (id)suggestionProxiesBasedOnSharingInteractionsWithPredictionContext:(id)arg1 withOnlyTopShares:(_Bool)arg2 withFilterOutNonMatchingSourceBundleIDs:(_Bool)arg3;	// IMP=0x00000000000709d4
- (id)suggestionProxiesWithPredictionContext:(id)arg1;	// IMP=0x00000000000709c7
- (id)rankedGlobalSuggestionsForSiriNLWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2;	// IMP=0x0000000000070376
- (id)rankedGlobalSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 contactsOnly:(_Bool)arg3 interactions:(id)arg4 contactIdsCurrentlyInStore:(id)arg5;	// IMP=0x000000000006fb70
- (id)normalizedStringFromString:(id)arg1;	// IMP=0x000000000006faf9
- (id)rankedNameSuggestionsWithPredictionContext:(id)arg1 forName:(id)arg2;	// IMP=0x000000000006eab0
- (id)_rankedZkwSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 maxSuggestions:(unsigned long long)arg3 frequencyOnly:(_Bool)arg4 interactions:(id)arg5 interactionCache:(id)arg6;	// IMP=0x000000000006e145
- (id)rankedMessagesZkwSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 maxSuggestions:(unsigned long long)arg3 frequencyOnly:(_Bool)arg4 interactions:(id)arg5;	// IMP=0x000000000006e07e
- (id)rankedCoRecipientSuggestionsWithPredictionContext:(id)arg1 modelConfiguration:(id)arg2 maxSuggestions:(unsigned long long)arg3;	// IMP=0x000000000006d333
- (id)rankedZkwSuggestionsWithPredictionContext:(id)arg1 modelConfiguration:(id)arg2 maxSuggestions:(unsigned long long)arg3;	// IMP=0x000000000006cb19
- (id)candidatePropertyFromCandidates:(id)arg1;	// IMP=0x000000000006cb0c
- (id)indexesOfObjectsWithKey:(id)arg1 withValues:(id)arg2 inArray:(id)arg3;	// IMP=0x000000000006c99f
- (long long)suggestionExists:(id)arg1 withValue:(id)arg2 inArray:(id)arg3;	// IMP=0x000000000006c88b
- (id)filterSuggestionsFrom:(id)arg1 byFilteringOutSeedRecipients:(id)arg2;	// IMP=0x000000000006c769
- (id)messagesGroupResultsForPredictionContext:(id)arg1;	// IMP=0x000000000006bdcb
- (id)rankedMessagesAutocompleteSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 candidates:(id)arg3;	// IMP=0x000000000006bdbe
- (id)rankedNonMessagesAutocompleteSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 candidates:(id)arg3 performSecondarySearch:(_Bool)arg4;	// IMP=0x000000000006bdb1
- (id)rankedAutocompleteSuggestionsWithPredictionContext:(id)arg1 candidates:(id)arg2;	// IMP=0x000000000006ba23
- (id)rankedHandlesFromCandidateHandles:(id)arg1;	// IMP=0x000000000006b2ed
- (id)rankedSiriMLCRHandles:(id)arg1 context:(id)arg2;	// IMP=0x000000000006ab01
- (void)updateModelProperties:(id)arg1;	// IMP=0x000000000006a042
- (id)initWithK:(unsigned long long)arg1 interactionStore:(id)arg2 filterByBundleIds:(id)arg3 knowledgeStore:(id)arg4 contactResolver:(id)arg5 messageInteractionCache:(id)arg6 shareInteractionCache:(id)arg7 groupActivityInteractionCache:(id)arg8;	// IMP=0x0000000000069e40

@end

