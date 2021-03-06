//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKSource, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface EKInviteeAlternativeTimeSearcher : NSObject
{
    _Bool _noConflictRequired;	// 8 = 0x8
    _Bool _availabilityRequestInProgress;	// 9 = 0x9
    _Bool _internalSearchingForMoreTimesWhenAllAttendeesCanAttend;	// 10 = 0xa
    _Bool _internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;	// 11 = 0xb
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_processingQueue;	// 24 = 0x18
    NSDate *_internalOriginalStartDate;	// 32 = 0x20
    NSDate *_internalOriginalEndDate;	// 40 = 0x28
    NSDate *_originalRangeStartDate;	// 48 = 0x30
    NSMutableArray *_internalProposedStarts;	// 56 = 0x38
    EKSource *_source;	// 64 = 0x40
    NSString *_ignoredEventID;	// 72 = 0x48
    NSOperationQueue *_availabilityRequestsQueue;	// 80 = 0x50
    NSMutableDictionary *_participantAddressesToParticipants;	// 88 = 0x58
    NSString *_organizerAddress;	// 96 = 0x60
    NSDate *_nextAvailabilityRangeStartDate;	// 104 = 0x68
    double _availabilitySearchDurationMultiplier;	// 112 = 0x70
    unsigned long long _remainingSearchAttempts;	// 120 = 0x78
    NSMutableArray *_leftoverSpans;	// 128 = 0x80
    NSMutableArray *_internalTimesWhenAllAttendeesCanAttend;	// 136 = 0x88
    NSMutableArray *_internalTimesWhenSomeAttendeesCanAttend;	// 144 = 0x90
    NSMutableArray *_internalProposedTimes;	// 152 = 0x98
    NSMutableArray *_internalOriginalConflictedParticipants;	// 160 = 0xa0
    CDUnknownBlockType _stateChanged;	// 168 = 0xa8
}

+ (void)_validateSpans:(id)arg1;	// IMP=0x000000000003cdad
+ (id)_selfOrganizerForNewlyScheduledEventWithAddress:(id)arg1;	// IMP=0x000000000003cc56
+ (long long)_invalidBinarySearchIndex;	// IMP=0x000000000003cc49
+ (long long)_binarySearchForIndexOfTimeSpanInArray:(id)arg1 containingDate:(id)arg2;	// IMP=0x000000000003ca3f
+ (id)_rankNonOptimalTimeSpans:(id)arg1;	// IMP=0x000000000003badf
+ (id)_findHighestRankedNonOptimalTimeSpans:(id)arg1;	// IMP=0x000000000003b6b1
+ (void)_insertUniqueParticipants:(id)arg1 intoExistingParticipantsArray:(id)arg2;	// IMP=0x000000000003a55d
+ (id)_allButFirstItemInArray:(id)arg1;	// IMP=0x0000000000039a45
+ (id)_allButLastItemInArray:(id)arg1;	// IMP=0x00000000000399bc
+ (_Bool)_span:(id)arg1 hasSameConflictedParticipantsAsSpan:(id)arg2;	// IMP=0x0000000000039851
+ (id)_addressesForParticipants:(id)arg1;	// IMP=0x00000000000395fe
+ (id)_findLeftoverSpans:(id)arg1 usingFreeTimes:(id)arg2 andNonOptimalTimes:(id)arg3;	// IMP=0x00000000000392be
+ (id)stateAsString:(long long)arg1;	// IMP=0x00000000000380c1
- (void).cxx_destruct;	// IMP=0x000000000003d71b
@property(copy, nonatomic) CDUnknownBlockType stateChanged; // @synthesize stateChanged=_stateChanged;
@property(nonatomic) _Bool internalSearchingForMoreTimesWhenSomeAttendeesCanAttend; // @synthesize internalSearchingForMoreTimesWhenSomeAttendeesCanAttend=_internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
@property(nonatomic) _Bool internalSearchingForMoreTimesWhenAllAttendeesCanAttend; // @synthesize internalSearchingForMoreTimesWhenAllAttendeesCanAttend=_internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
@property(retain, nonatomic) NSMutableArray *internalOriginalConflictedParticipants; // @synthesize internalOriginalConflictedParticipants=_internalOriginalConflictedParticipants;
@property(retain, nonatomic) NSMutableArray *internalProposedTimes; // @synthesize internalProposedTimes=_internalProposedTimes;
@property(retain, nonatomic) NSMutableArray *internalTimesWhenSomeAttendeesCanAttend; // @synthesize internalTimesWhenSomeAttendeesCanAttend=_internalTimesWhenSomeAttendeesCanAttend;
@property(retain, nonatomic) NSMutableArray *internalTimesWhenAllAttendeesCanAttend; // @synthesize internalTimesWhenAllAttendeesCanAttend=_internalTimesWhenAllAttendeesCanAttend;
@property(retain, nonatomic) NSMutableArray *leftoverSpans; // @synthesize leftoverSpans=_leftoverSpans;
@property(nonatomic) unsigned long long remainingSearchAttempts; // @synthesize remainingSearchAttempts=_remainingSearchAttempts;
@property(nonatomic) double availabilitySearchDurationMultiplier; // @synthesize availabilitySearchDurationMultiplier=_availabilitySearchDurationMultiplier;
@property(retain, nonatomic) NSDate *nextAvailabilityRangeStartDate; // @synthesize nextAvailabilityRangeStartDate=_nextAvailabilityRangeStartDate;
@property(nonatomic) _Bool availabilityRequestInProgress; // @synthesize availabilityRequestInProgress=_availabilityRequestInProgress;
@property(retain, nonatomic) NSString *organizerAddress; // @synthesize organizerAddress=_organizerAddress;
@property(retain, nonatomic) NSMutableDictionary *participantAddressesToParticipants; // @synthesize participantAddressesToParticipants=_participantAddressesToParticipants;
@property(retain, nonatomic) NSOperationQueue *availabilityRequestsQueue; // @synthesize availabilityRequestsQueue=_availabilityRequestsQueue;
@property(retain, nonatomic) NSString *ignoredEventID; // @synthesize ignoredEventID=_ignoredEventID;
@property(retain, nonatomic) EKSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *internalProposedStarts; // @synthesize internalProposedStarts=_internalProposedStarts;
@property(retain, nonatomic) NSDate *originalRangeStartDate; // @synthesize originalRangeStartDate=_originalRangeStartDate;
@property(retain, nonatomic) NSDate *internalOriginalEndDate; // @synthesize internalOriginalEndDate=_internalOriginalEndDate;
@property(retain, nonatomic) NSDate *internalOriginalStartDate; // @synthesize internalOriginalStartDate=_internalOriginalStartDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool noConflictRequired; // @synthesize noConflictRequired=_noConflictRequired;
- (id)_generateTimeSpansForResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000000003bc91
- (id)_filterOutUnreasonableTimeSlots:(id)arg1;	// IMP=0x000000000003b314
- (id)_generateNonOptimalTimesFromTimeSpans:(id)arg1;	// IMP=0x000000000003a99f
- (id)_generateOpenFreeTimesFromTimeSpans:(id)arg1;	// IMP=0x000000000003a159
- (id)_mergeAdjacentSpansWithSameConflictedParticipants:(id)arg1;	// IMP=0x0000000000039e8b
- (id)_spliceLeftTimeSpans:(id)arg1 andNewTimeSpans:(id)arg2;	// IMP=0x0000000000039ad1
- (void)_haltSearchWithError:(_Bool)arg1;	// IMP=0x0000000000039244
- (void)_processResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x0000000000038dbf
- (id)_participantforParticipantAddress:(id)arg1;	// IMP=0x0000000000038ce2
- (void)_transitionToConflictFoundStateAndSearch;	// IMP=0x0000000000038c61
- (void)_sendStateChange:(long long)arg1;	// IMP=0x0000000000038b1e
- (void)_resetSearchFallbackNumbers;	// IMP=0x0000000000038a91
- (void)_attemptSearch;	// IMP=0x0000000000038114
- (void)resetWithEvent:(id)arg1 organizerAddressForNewlyScheduledEvent:(id)arg2;	// IMP=0x0000000000035915
- (void)searchForMoreTimesWhenSomeAttendeesCanAttend;	// IMP=0x0000000000035836
- (void)searchForMoreTimesWhenAllAttendeesCanAttend;	// IMP=0x0000000000035745
@property(readonly, nonatomic) _Bool searchingForMoreTimesWhenSomeAttendeesCanAttend;
@property(readonly, nonatomic) _Bool searchingForMoreTimesWhenAllAttendeesCanAttend;
@property(readonly, nonatomic) NSArray *proposedTimes;
@property(readonly, nonatomic) NSArray *timesWhenSomeAttendeesCanAttend;
@property(readonly, nonatomic) NSArray *timesWhenAllAttendeesCanAttend;
@property(readonly, nonatomic) NSArray *originalConflictedParticipants;
@property(readonly, nonatomic) NSDate *originalEndDate;
@property(readonly, nonatomic) NSDate *originalStartDate;
- (void)dealloc;	// IMP=0x0000000000034cec
- (id)initWithStateChangedCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034a54

@end

