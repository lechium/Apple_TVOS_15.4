//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFMailboxPredictor-Protocol.h>

@class NSCache, NSDictionary, NSMutableString, NSString;
@protocol MFQueryableLibraryAdapter, MFUserProfileProvider;

@interface MFHeuristicsMailboxPredictor : NSObject <MFMailboxPredictor>
{
    id <MFUserProfileProvider> _userProfileProvider;	// 8 = 0x8
    id <MFQueryableLibraryAdapter> _library;	// 16 = 0x10
    NSDictionary *_parameters;	// 24 = 0x18
    NSCache *_mailboxIDCache;	// 32 = 0x20
    NSMutableString *_debugLog;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableString *debugLog; // @synthesize debugLog=_debugLog;
@property(retain, nonatomic) NSCache *mailboxIDCache; // @synthesize mailboxIDCache=_mailboxIDCache;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) id <MFQueryableLibraryAdapter> library; // @synthesize library=_library;
@property(retain, nonatomic) id <MFUserProfileProvider> userProfileProvider; // @synthesize userProfileProvider=_userProfileProvider;
- (id)_allowedRecipientsForMessage:(id)arg1;	// IMP=0x00000000000291b9
- (_Bool)_isAllowedRecipient:(id)arg1;	// IMP=0x0000000000029074
- (id)_normalizedTermFrequencyTopHitFromDictionary:(id)arg1 withThreshold:(double)arg2;	// IMP=0x0000000000028e10
- (id)_objectWithMeasure:(double)arg1 timesHigherThanFollowUpInMeasures:(id)arg2;	// IMP=0x0000000000028d1e
- (id)_topHitFromMailboxDictionary:(id)arg1 message:(id)arg2;	// IMP=0x0000000000028c60
- (id)_topHitFromMailboxDictionary:(id)arg1;	// IMP=0x0000000000028b5b
- (id)_removeSpecialMailboxesInCounts:(id)arg1 message:(id)arg2;	// IMP=0x0000000000028892
- (id)_userCreatedMailboxIDs;	// IMP=0x00000000000286a6
- (id)_recipientCountsForMessage:(id)arg1;	// IMP=0x000000000002861f
- (id)_listIDCountsForMessage:(id)arg1;	// IMP=0x0000000000028588
- (id)_senderCountsForMessage:(id)arg1;	// IMP=0x0000000000028449
- (id)_conversationIDCountsForMessage:(id)arg1;	// IMP=0x00000000000283b2
- (_Bool)_limitToRecents;	// IMP=0x0000000000028374
- (id)_countsForField:(id)arg1 message:(id)arg2;	// IMP=0x000000000002825d
- (id)_weightedModePredictionsForMessage:(id)arg1;	// IMP=0x0000000000027a32
- (id)_summedWeightedPredictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x0000000000027262
- (id)_orderedModePredictionForMessage:(id)arg1;	// IMP=0x0000000000026c17
- (id)_predictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x0000000000026bb2
- (_Bool)_modeParameterIs:(id)arg1;	// IMP=0x0000000000026b6f
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id *)arg3;	// IMP=0x0000000000026392
- (void)dealloc;	// IMP=0x0000000000026333
- (id)_mergeDefaultParameters:(id)arg1 withParameters:(id)arg2;	// IMP=0x0000000000026063
- (id)initWithUserProfileProvider:(id)arg1 libraryAdapter:(id)arg2 parameters:(id)arg3;	// IMP=0x0000000000026008
- (id)initWithUserProfileProvider:(id)arg1 libraryAdapter:(id)arg2;	// IMP=0x0000000000025db6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
