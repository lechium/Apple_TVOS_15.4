//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, NoteAccountObject;

@interface NoteStoreObject
{
}

- (id)searchDomainIdentifier;	// IMP=0x000000000000ddd6
- (id)basicAccountIdentifier;	// IMP=0x000000000000dd86
- (id)collectionInfo;	// IMP=0x000000000000dc7d
- (id)predicateForNotes;	// IMP=0x000000000000dc58
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1;	// IMP=0x000000000000d9f5
- (unsigned int)maximumServerIntId;	// IMP=0x000000000000d7b5
- (id)notesForServerIntIdsInRange:(struct _NSRange)arg1;	// IMP=0x000000000000d79a
- (id)notesForServerIntIds:(id)arg1;	// IMP=0x000000000000d780
- (id)notesForServerIntIdsInRange:(struct _NSRange)arg1 ascending:(_Bool)arg2 limit:(unsigned long long)arg3;	// IMP=0x000000000000d5bf
- (id)notesForServerIntIds:(id)arg1 ascending:(_Bool)arg2 limit:(unsigned long long)arg3;	// IMP=0x000000000000d3ef
- (id)notesForGUIDs:(id)arg1;	// IMP=0x000000000000d2a0
- (id)notesForIntegerIds:(id)arg1;	// IMP=0x000000000000d151
- (id)notesForServerIds:(id)arg1;	// IMP=0x000000000000d002
- (id)cacheKey;	// IMP=0x0000000000010ad1
- (id)titleForTableViewCell;	// IMP=0x0000000000010997
- (id)noteVisibilityTestingForSearchingAccount;	// IMP=0x0000000000017115

// Remaining properties
@property(retain, nonatomic) NoteAccountObject *account; // @dynamic account;
@property(retain, nonatomic) NSSet *changes; // @dynamic changes;
@property(retain, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *syncAnchor; // @dynamic syncAnchor;

@end

