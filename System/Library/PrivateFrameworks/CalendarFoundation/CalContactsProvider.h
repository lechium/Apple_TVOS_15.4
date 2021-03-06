//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalContactsProviderProtocol-Protocol.h>

@class CNContact, CNContactStore, CNReputationStore, NSArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CalContactsProvider : NSObject <CalContactsProviderProtocol>
{
    CNContact *_meContact;	// 8 = 0x8
    CNContactStore *_store;	// 16 = 0x10
    CNReputationStore *_reputationStore;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_syncQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_contactStoreWorkQueue;	// 40 = 0x28
    NSString *_testMeContactIdentifer;	// 48 = 0x30
    NSMutableSet *_delegates;	// 56 = 0x38
    NSArray *_unitTestEmails;	// 64 = 0x40
    NSArray *_loadedMyEmailAddresses;	// 72 = 0x48
}

+ (id)birthdayStringForContactName:(id)arg1 eventDate:(id)arg2 birthDate:(id)arg3 lunarCalendar:(id)arg4;	// IMP=0x0000000000033ca1
+ (_Bool)isCalendarIslamic:(id)arg1;	// IMP=0x0000000000033c03
+ (_Bool)birthdayIsYearless:(id)arg1;	// IMP=0x0000000000033b88
+ (_Bool)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)arg1 inReputationStore:(id)arg2;	// IMP=0x00000000000339e4
+ (_Bool)shouldPermitOrganizerEmailFromJunkChecks:(id)arg1 inReputationStore:(id)arg2;	// IMP=0x000000000003392e
+ (id)reputationForHandle:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000003374b
+ (id)defaultProvider;	// IMP=0x000000000002f0f6
- (void).cxx_destruct;	// IMP=0x0000000000034309
@property(retain) NSArray *loadedMyEmailAddresses; // @synthesize loadedMyEmailAddresses=_loadedMyEmailAddresses;
@property(retain) NSArray *unitTestEmails; // @synthesize unitTestEmails=_unitTestEmails;
@property(retain) NSMutableSet *delegates; // @synthesize delegates=_delegates;
@property(retain) NSString *testMeContactIdentifer; // @synthesize testMeContactIdentifer=_testMeContactIdentifer;
@property(retain) NSObject<OS_dispatch_queue> *contactStoreWorkQueue; // @synthesize contactStoreWorkQueue=_contactStoreWorkQueue;
@property(retain) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain) CNReputationStore *reputationStore; // @synthesize reputationStore=_reputationStore;
@property(retain) CNContactStore *store; // @synthesize store=_store;
- (_Bool)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)arg1;	// IMP=0x0000000000033b11
- (_Bool)shouldPermitOrganizerEmailFromJunkChecks:(id)arg1;	// IMP=0x0000000000033a9a
- (_Bool)matchesOneOfMyPhoneNumbers:(id)arg1;	// IMP=0x00000000000335fe
- (id)myPhoneNumbers;	// IMP=0x000000000003356e
- (_Bool)urlMatchesOneOfMyEmails:(id)arg1;	// IMP=0x00000000000334f0
- (_Bool)matchesOneOfMyEmails:(id)arg1;	// IMP=0x0000000000033394
- (id)cachedEmailAddresses;	// IMP=0x0000000000033331
- (id)myEmailAddresses;	// IMP=0x00000000000331e2
- (id)cachedEmailAddress;	// IMP=0x0000000000033192
- (id)cachedEmailAddressArray;	// IMP=0x0000000000032fbb
- (id)myEmailAddress;	// IMP=0x0000000000032e6e
- (id)myAddressForLabel:(id)arg1;	// IMP=0x0000000000032c54
- (id)myWorkAddress;	// IMP=0x0000000000032c38
- (id)myHomeAddress;	// IMP=0x0000000000032c1c
- (id)myFullName;	// IMP=0x0000000000032c08
- (id)myNameWithStyle:(long long)arg1;	// IMP=0x0000000000032b5c
- (id)myShortDisplayName;	// IMP=0x0000000000032aa1
- (_Bool)contactIdentifierIsMe:(id)arg1;	// IMP=0x0000000000032a0c
- (void)donateEncodedLikenessString:(id)arg1 forEmailAddress:(id)arg2;	// IMP=0x0000000000032a06
- (id)myAvatarEncodedString;	// IMP=0x00000000000329f0
- (id)_fullNameForFirstContactMatchingPredicate:(id)arg1;	// IMP=0x00000000000328ae
- (id)fullNameForFirstContactMatchingPhoneNumber:(id)arg1;	// IMP=0x00000000000327ff
- (id)fullNameForFirstContactMatchingEmailAddress:(id)arg1;	// IMP=0x0000000000032799
- (id)contactsFromContactIdentifiers:(id)arg1 withKeys:(id)arg2;	// IMP=0x000000000003241b
- (id)unifiedContactMatchingName:(id)arg1 email:(id)arg2 url:(id)arg3 keysToFetch:(id)arg4;	// IMP=0x0000000000031b77
- (id)unifiedContactMatchingString:(id)arg1 keysToFetch:(id)arg2 matchType:(long long *)arg3;	// IMP=0x0000000000031ab8
- (id)unifiedContactWithIdentifier:(id)arg1;	// IMP=0x0000000000031a2b
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000003175f
- (id)unifiedContactWithName:(id)arg1;	// IMP=0x000000000003146f
- (id)unifiedContactWithPhoneNumber:(id)arg1;	// IMP=0x0000000000031151
- (id)unifiedContactWithEmailAddress:(id)arg1;	// IMP=0x0000000000030e61
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000030b10
- (id)unifiedMeContact;	// IMP=0x0000000000030afe
- (void)setTestMeContactIdentifier:(id)arg1;	// IMP=0x0000000000030aa5
- (id)_fetchedUnifiedMeContact;	// IMP=0x00000000000309b0
- (id)_meWithKeys:(id)arg1;	// IMP=0x00000000000306ec
- (void)_setLastHistoryToken:(id)arg1;	// IMP=0x000000000003066f
- (id)_lastHistoryToken;	// IMP=0x0000000000030611
- (void)_syncContacts;	// IMP=0x000000000002fd5f
- (void)meCardChanged:(id)arg1;	// IMP=0x000000000002fc64
- (void)contactsChanged:(id)arg1;	// IMP=0x000000000002fbdd
- (id)contactStore;	// IMP=0x000000000002faa8
- (void)setMeCardEmailsForUnitTesting:(id)arg1;	// IMP=0x000000000002fa2d
@property(retain) CNContact *meContact;
- (_Bool)contactAccessResolved;	// IMP=0x000000000002f73c
- (void)deregisterForContactChangeNotifications:(id)arg1;	// IMP=0x000000000002f6b0
- (void)registerForContactChangeNotifications:(id)arg1;	// IMP=0x000000000002f60b
- (id)initWithStore:(id)arg1;	// IMP=0x000000000002f4a7
- (id)init;	// IMP=0x000000000002f14b

@end

