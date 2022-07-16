//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNChangeHistoryEventVisitorPrivate-Protocol.h>

@class CNMutableOrderedDictionary, NSArray, NSMutableArray, NSString;

@interface CNChangeHistoryEventCoalescer : NSObject <CNChangeHistoryEventVisitorPrivate>
{
    NSMutableArray *_controlEvents;	// 8 = 0x8
    CNMutableOrderedDictionary *_addedContacts;	// 16 = 0x10
    CNMutableOrderedDictionary *_updatedContacts;	// 24 = 0x18
    CNMutableOrderedDictionary *_deletedContacts;	// 32 = 0x20
    CNMutableOrderedDictionary *_addedGroups;	// 40 = 0x28
    CNMutableOrderedDictionary *_updatedGroups;	// 48 = 0x30
    CNMutableOrderedDictionary *_deletedGroups;	// 56 = 0x38
    NSMutableArray *_contactLinkingEvents;	// 64 = 0x40
    NSMutableArray *_groupMembershipEvents;	// 72 = 0x48
    NSMutableArray *_otherContactEvents;	// 80 = 0x50
}

+ (id)coalesceEvents:(id)arg1;	// IMP=0x0000000000005344
+ (id)coalescingLog;	// IMP=0x00000000000052e8
- (void).cxx_destruct;	// IMP=0x0000000000006947
- (void)visitDifferentMeCardEvent:(id)arg1;	// IMP=0x0000000000006931
- (void)visitPreferredContactForNameEvent:(id)arg1;	// IMP=0x000000000000691b
- (void)visitPreferredContactForImageEvent:(id)arg1;	// IMP=0x0000000000006905
- (void)visitUnlinkContactEvent:(id)arg1;	// IMP=0x00000000000068ef
- (void)visitLinkContactsEvent:(id)arg1;	// IMP=0x00000000000068d9
- (void)visitRemoveSubgroupFromGroupEvent:(id)arg1;	// IMP=0x00000000000068c3
- (void)visitAddSubgroupToGroupEvent:(id)arg1;	// IMP=0x00000000000068ad
- (void)visitRemoveMemberFromGroupEvent:(id)arg1;	// IMP=0x0000000000006897
- (void)visitAddMemberToGroupEvent:(id)arg1;	// IMP=0x0000000000006881
- (void)visitDeleteGroupEvent:(id)arg1;	// IMP=0x0000000000006631
- (void)visitUpdateGroupEvent:(id)arg1;	// IMP=0x0000000000006331
- (void)visitAddGroupEvent:(id)arg1;	// IMP=0x0000000000006015
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x0000000000005dd7
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x0000000000005ad7
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x00000000000057ae
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x0000000000005798
@property(readonly) NSArray *events;
- (id)init;	// IMP=0x00000000000054bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

