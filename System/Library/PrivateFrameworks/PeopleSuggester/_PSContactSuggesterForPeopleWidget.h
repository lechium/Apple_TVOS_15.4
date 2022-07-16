//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface _PSContactSuggesterForPeopleWidget : NSObject
{
    NSMutableDictionary *_candidateContacts;	// 8 = 0x8
    NSMutableSet *_priorityFamilyMembers;	// 16 = 0x10
    NSMutableSet *_nonpriorityFamilyMembers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007b8a6
@property(retain, nonatomic) NSMutableSet *nonpriorityFamilyMembers; // @synthesize nonpriorityFamilyMembers=_nonpriorityFamilyMembers;
@property(retain, nonatomic) NSMutableSet *priorityFamilyMembers; // @synthesize priorityFamilyMembers=_priorityFamilyMembers;
@property(retain, nonatomic) NSMutableDictionary *candidateContacts; // @synthesize candidateContacts=_candidateContacts;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsWithIdentifiers:(id)arg2;	// IMP=0x000000000007b848
- (id)init;	// IMP=0x000000000007b819

@end

