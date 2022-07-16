//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ABPersonLinker : NSObject
{
    void *_addressBook;	// 8 = 0x8
    NSMutableDictionary *_peopleByFirstName;	// 16 = 0x10
    NSMutableDictionary *_peopleByLastName;	// 24 = 0x18
    NSMutableDictionary *_peopleByOrganization;	// 32 = 0x20
}

+ (void)startAutoLinkingNewPeopleInAddressBook:(void *)arg1 inProcess:(_Bool)arg2;	// IMP=0x000000000003c70c
+ (_Bool)isLinkDataValidForAddressBook:(void *)arg1;	// IMP=0x000000000003c6f1
+ (_Bool)isInitialLinkingEnabled;	// IMP=0x000000000003c6e9
+ (_Bool)isAutoLinkingEnabled;	// IMP=0x000000000003c6e1
- (void)linkNewlyAddedPerson:(void *)arg1;	// IMP=0x000000000003ea27
- (void)linkRecentlyAddedPeople;	// IMP=0x000000000003ea0e
- (_Bool)linkRecentlyAddedPeopleWithLimit:(long long)arg1;	// IMP=0x000000000003e8ca
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)arg1 withLimit:(long long)arg2;	// IMP=0x000000000003e814
- (void)makeInitialLinks;	// IMP=0x000000000003e800
- (void)makeInitialLinksCountingOuterIterations:(unsigned long long *)arg1;	// IMP=0x000000000003e7e1
- (void)removeAllLinks;	// IMP=0x000000000003e692
- (void)makeLinksForAddedPeople:(id)arg1 inInitialLinking:(_Bool)arg2 countingOuterIterations:(unsigned long long *)arg3 detectedLinkCount:(unsigned long long *)arg4;	// IMP=0x000000000003de90
- (void)presortPeople:(id)arg1;	// IMP=0x000000000003dc5f
- (void)addPerson:(void *)arg1 toDictionary:(id)arg2 withProperty:(int)arg3;	// IMP=0x000000000003dbba
- (id)suggestedPeopleToLinkWithPerson:(void *)arg1 isInitialLinking:(_Bool)arg2;	// IMP=0x000000000003db57
- (_Bool)shouldLinkPerson:(void *)arg1 toPeopleInDatabase:(id)arg2 andNewlyAddedPeople:(id)arg3 inInitialLinking:(_Bool)arg4;	// IMP=0x000000000003d536
- (id)otherPeopleInArray:(id)arg1 matchingPerson:(void *)arg2;	// IMP=0x000000000003d096
- (id)otherPeopleInDatabaseMatchingPerson:(void *)arg1 notIncludingPeople:(id)arg2;	// IMP=0x000000000003c8ce
- (void)dealloc;	// IMP=0x000000000003c86f
- (id)init;	// IMP=0x000000000003c80d
- (id)initWithAddressBook:(void *)arg1;	// IMP=0x000000000003c7b9

@end

