//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSource, CNContactStore, NSXPCConnection, _PSSuggesterConfiguration;
@protocol OS_dispatch_queue;

@interface _PSSuggester : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSXPCConnection *_userConnection;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_feedbackQueue;	// 32 = 0x20
    BMSource *_feedbackSource;	// 40 = 0x28
    CNContactStore *_contactStore;	// 48 = 0x30
    _PSSuggesterConfiguration *_configuration;	// 56 = 0x38
}

+ (id)suggesterWithDaemon;	// IMP=0x000000000002b0b6
- (void).cxx_destruct;	// IMP=0x000000000002fc73
@property(readonly, nonatomic) _PSSuggesterConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)writeFeedbackForContactsAutocompleteSuggestions:(id)arg1;	// IMP=0x000000000002f8de
- (void)provideFeedbackForContactsAutocompleteSuggestions:(id)arg1;	// IMP=0x000000000002f761
- (void)provideFeedbackForMessagesZkwSuggestions:(id)arg1;	// IMP=0x000000000002f6cf
- (void)deleteInteractionsMatchingSuggestLessFeedback:(id)arg1;	// IMP=0x000000000002efdf
- (void)provideSuggestLessFeedbackForShareSheetSuggestion:(id)arg1;	// IMP=0x000000000002ee5e
- (void)provideFeedbackForSuggestions:(id)arg1;	// IMP=0x000000000002e1f1
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2;	// IMP=0x000000000002df7d
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;	// IMP=0x000000000002de9a
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)arg1;	// IMP=0x000000000002dd13
- (id)rankedFamilySuggestions;	// IMP=0x000000000002dad7
- (id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2;	// IMP=0x000000000002d7d2
- (id)autocompleteSearchResultsWithPredictionContext:(id)arg1;	// IMP=0x000000000002d485
- (id)rankedZKWSuggestionsFromContext:(id)arg1;	// IMP=0x000000000002cba5
- (id)_getUserDaemonXPCConnection;	// IMP=0x000000000002cad6
- (id)rankedSiriNLContactSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 interactionId:(id)arg3;	// IMP=0x000000000002c75c
- (id)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(_Bool)arg2;	// IMP=0x000000000002c3bc
- (id)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2;	// IMP=0x000000000002c05a
- (id)shareExtensionSuggestionsFromContext:(id)arg1;	// IMP=0x000000000002be30
- (id)suggestInteractionsFromContext:(id)arg1;	// IMP=0x000000000002b8ef
- (id)shareSheetInteractionsFromContext:(id)arg1 maximumNumberOfSuggestions:(long long)arg2;	// IMP=0x000000000002b705
- (id)shareSheetInteractionsFromContext:(id)arg1;	// IMP=0x000000000002b67b
- (id)contactStore;	// IMP=0x000000000002b61f
- (void)dealloc;	// IMP=0x000000000002b5c4
- (id)initWithConfiguration:(id)arg1 feedbackRecording:(_Bool)arg2;	// IMP=0x000000000002b221
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000002b20d
- (id)initWithDaemonUsingConfiguration:(id)arg1;	// IMP=0x000000000002b119
- (id)init;	// IMP=0x000000000002b05c

@end

