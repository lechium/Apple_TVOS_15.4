//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSSocialServiceContactsDelegate-Protocol.h>

@class CLSLRUMemoryCache, CLSPersonIdentity, CLSRoutineService, CLSSocialServiceCalendar, CLSSocialServiceContacts, CLSSocialServiceCoreDuet, CLSSocialServiceCoreNameParser, NSString, NSURL;

@interface CLSServiceManager : NSObject <CLSSocialServiceContactsDelegate>
{
    CLSLRUMemoryCache *_personsCache;	// 8 = 0x8
    CLSRoutineService *_routineService;	// 16 = 0x10
    _Bool _hasAccessToContactsStore;	// 24 = 0x18
    CLSSocialServiceContacts *_contactsService;	// 32 = 0x20
    CLSSocialServiceCalendar *_calendarService;	// 40 = 0x28
    CLSSocialServiceCoreDuet *_coreDuetService;	// 48 = 0x30
    CLSSocialServiceCoreNameParser *_coreNameParserService;	// 56 = 0x38
    CLSPersonIdentity *_mePerson;	// 64 = 0x40
    NSObject *_routineServiceLockObject;	// 72 = 0x48
    NSURL *_applicationDataURL;	// 80 = 0x50
}

+ (id)sharedManagerWithURL:(id)arg1;	// IMP=0x000000000000f011
+ (id)sharedManager;	// IMP=0x000000000000effd
- (void).cxx_destruct;	// IMP=0x000000000000ef88
@property(readonly, nonatomic) _Bool hasAccessToContactsStore; // @synthesize hasAccessToContactsStore=_hasAccessToContactsStore;
@property(readonly, nonatomic) NSURL *applicationDataURL; // @synthesize applicationDataURL=_applicationDataURL;
@property(readonly, nonatomic) NSObject *routineServiceLockObject; // @synthesize routineServiceLockObject=_routineServiceLockObject;
@property(retain, nonatomic) CLSPersonIdentity *mePerson; // @synthesize mePerson=_mePerson;
- (void)flushSocialServicesAtURL:(id)arg1;	// IMP=0x000000000000ecc3
- (id)initWithURL:(id)arg1;	// IMP=0x000000000000eb87
- (unsigned long long)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2;	// IMP=0x000000000000eafc
- (unsigned long long)sexHintForPerson:(id)arg1 usingLocales:(id)arg2;	// IMP=0x000000000000ea71
- (id)mePersonAddressesOfType:(unsigned long long)arg1;	// IMP=0x000000000000e9ad
- (_Bool)hasAddressesForMePerson;	// IMP=0x000000000000e969
- (id)personForIdentifier:(id)arg1;	// IMP=0x000000000000e8e6
- (void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e860
- (id)personsFromEventParticipants:(id)arg1 excludeCurrentUser:(_Bool)arg2;	// IMP=0x000000000000e7d7
- (id)workCalendarEventsMatchingContactIdentifiers:(id)arg1 fromUniversalDate:(id)arg2 toUniversalDate:(id)arg3;	// IMP=0x000000000000e725
- (id)eventsForClueCollection:(id)arg1;	// IMP=0x000000000000e6a2
- (void)prefetchEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 forAssetCollectionsSortedByStartDate:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e5db
- (void)enumerateEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e541
- (id)lastLocationOfInterestVisit;	// IMP=0x000000000000e4c7
- (void)postProcessLocationsOfInterest;	// IMP=0x000000000000e48a
- (id)fetchImportantLocationsOfInterest;	// IMP=0x000000000000e36c
- (id)predominantLocationMobilityForDateInterval:(id)arg1 confidence:(double *)arg2;	// IMP=0x000000000000e2cd
- (id)fetchLocationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;	// IMP=0x000000000000e236
- (id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2;	// IMP=0x000000000000e19f
- (id)locationOfInterestAtLocation:(id)arg1;	// IMP=0x000000000000e11c
- (_Bool)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2;	// IMP=0x000000000000e091
- (id)contactHistoryCollector;	// IMP=0x000000000000e041
- (id)matchingDictionaryForContactIdentifier:(id)arg1;	// IMP=0x000000000000dfbe
- (id)contactsForIdentifiers:(id)arg1;	// IMP=0x000000000000df3b
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000deb5
- (void)enumeratePersonsForFullname:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000de2f
- (id)personForPersonHandle:(id)arg1;	// IMP=0x000000000000ddac
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1 usingPersonsModel:(id)arg2;	// IMP=0x000000000000dd15
- (void)enumeratePersonsAndRelationshipUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dca3
- (void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dc1d
- (void)enumerateAllPersonsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dbab
- (id)coreDuetPersonSuggestionsOnDate:(id)arg1;	// IMP=0x000000000000db28
- (id)personResultsForName:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x000000000000d9d0
- (id)personResultForName:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x000000000000d8d8
- (id)eventsForDates:(id)arg1;	// IMP=0x000000000000d855
- (void)invalidatePersonsCacheForPersonsWithNames:(id)arg1;	// IMP=0x000000000000d5d8
- (void)invalidateMomentaryMemoryCaches;	// IMP=0x000000000000d590
- (void)invalidatePermanentMemoryCaches;	// IMP=0x000000000000d4be
@property(readonly, nonatomic) CLSSocialServiceCoreNameParser *coreNameParserService; // @synthesize coreNameParserService=_coreNameParserService;
@property(readonly, nonatomic) CLSRoutineService *routineService; // @synthesize routineService=_routineService;
@property(readonly, nonatomic) CLSSocialServiceCalendar *calendarService; // @synthesize calendarService=_calendarService;
@property(readonly, nonatomic) CLSSocialServiceCoreDuet *coreDuetService; // @synthesize coreDuetService=_coreDuetService;
- (_Bool)canAccessContactsStore;	// IMP=0x000000000000d1de
@property(readonly, nonatomic) CLSSocialServiceContacts *contactsService; // @synthesize contactsService=_contactsService;
- (_Bool)shutdownForPhotoLibraryURL:(id)arg1;	// IMP=0x000000000000cf5c
- (id)init;	// IMP=0x000000000000ced0
- (double)pinningVisitsRatio;	// IMP=0x000000000004795f
- (unsigned long long)numberOfMatchRequests;	// IMP=0x00000000000478f5
- (unsigned long long)numberOfRemoteLocationMatches;	// IMP=0x000000000004788b
- (unsigned long long)numberOfCloseByLocationMatches;	// IMP=0x0000000000047821
- (unsigned long long)numberOfTimeMatches;	// IMP=0x00000000000477b7
- (unsigned long long)numberOfVisits;	// IMP=0x000000000004774d
- (unsigned long long)numberOfLocationsOfInterest;	// IMP=0x00000000000476e3
- (_Bool)routineIsAvailable;	// IMP=0x000000000004767a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

