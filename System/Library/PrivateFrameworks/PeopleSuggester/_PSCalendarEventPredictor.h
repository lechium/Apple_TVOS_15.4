//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, EKEventStore;

@interface _PSCalendarEventPredictor : NSObject
{
    EKEventStore *_eventStore;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
}

+ (id)createFinalSuggestions:(id)arg1 context:(id)arg2;	// IMP=0x000000000008e35d
+ (id)getZKWSuggestionForCalendarEvent:(id)arg1 context:(id)arg2 contactsMap:(id)arg3;	// IMP=0x000000000008dd7b
+ (_Bool)isMaybeFaceTimeEvent:(id)arg1 earliestStartDate:(id)arg2 latestStartDate:(id)arg3 maxParticipants:(unsigned long long)arg4;	// IMP=0x000000000008d7fe
+ (_Bool)currentUserIsEligibleForEvent:(id)arg1;	// IMP=0x000000000008d533
+ (unsigned long long)_numOfOtherParticipantsInEvent:(id)arg1;	// IMP=0x000000000008d398
+ (CDUnknownBlockType)participantComparatorWithContactsMap:(id)arg1;	// IMP=0x000000000008d1c6
+ (CDUnknownBlockType)eventComparatorWithPredictionContext:(id)arg1 contactsMap:(id)arg2;	// IMP=0x000000000008ca51
+ (_Bool)hasFaceTimeSignalInEvent:(id)arg1;	// IMP=0x000000000008c8be
+ (_Bool)isEligibleParticipant:(id)arg1 context:(id)arg2 contactsMap:(id)arg3;	// IMP=0x000000000008c658
+ (_Bool)isCorecipientParticipant:(id)arg1 seedRecipients:(id)arg2 contactsMap:(id)arg3;	// IMP=0x000000000008c122
+ (id)_handleFromParticipant:(id)arg1;	// IMP=0x000000000008c08e
- (void).cxx_destruct;	// IMP=0x000000000008f40e
- (id)contactKeysToFetch;	// IMP=0x000000000008f308
- (id)zkwSuggestionsFromCalendarWithPredictionContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 maxParticipants:(unsigned long long)arg4;	// IMP=0x000000000008ec1f
- (id)getParticipantContactsMapFromEvent:(id)arg1;	// IMP=0x000000000008e8d6
- (id)initWithEventStore:(id)arg1 contactStore:(id)arg2;	// IMP=0x000000000008bff5
- (id)init;	// IMP=0x000000000008bf8d

@end
