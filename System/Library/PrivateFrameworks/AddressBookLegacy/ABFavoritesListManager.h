//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ABFavoritesListManager : NSObject
{
    void *_addressBook;	// 8 = 0x8
    NSMutableArray *_list;	// 16 = 0x10
    struct __CFDictionary *_uidToEntry;	// 24 = 0x18
    struct {
        unsigned int dirty:1;
        unsigned int postCount:1;
        unsigned int needsReload:1;
        unsigned int unused:29;
    } _flags;	// 32 = 0x20
}

+ (id)sharedInstanceWithAddressBook:(void *)arg1;	// IMP=0x000000000005fbdc
+ (id)sharedInstance;	// IMP=0x000000000005fbc1
- (void)removeAllEntries;	// IMP=0x000000000006126e
- (_Bool)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2;	// IMP=0x00000000000610f7
- (void)_delayedLookup;	// IMP=0x00000000000610da
- (void)recacheIdentitiesSoon;	// IMP=0x00000000000610b7
- (void)save;	// IMP=0x000000000006107d
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;	// IMP=0x0000000000060fea
- (void)removeEntryAtIndex:(long long)arg1;	// IMP=0x0000000000060f54
- (void)addEntry:(id)arg1;	// IMP=0x0000000000060e8c
- (void)_listChangedExternally;	// IMP=0x0000000000060e29
- (void)_postChangeNotification;	// IMP=0x0000000000060dea
- (void)_entryIdentityChanged:(id)arg1;	// IMP=0x0000000000060d40
- (void)saveImmediately;	// IMP=0x0000000000060d15
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;	// IMP=0x0000000000060bc0
- (void)_addEntryToMap:(id)arg1;	// IMP=0x0000000000060a7c
- (_Bool)addEntryForPerson:(void *)arg1 property:(int)arg2 withIdentifier:(int)arg3;	// IMP=0x00000000000609ef
- (_Bool)containsEntryWithType:(int)arg1 forPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;	// IMP=0x00000000000609d6
- (_Bool)containsEntryWithIdentifier:(int)arg1 forPerson:(void *)arg2;	// IMP=0x00000000000609bd
- (id)entryWithIdentifier:(int)arg1 forPerson:(void *)arg2;	// IMP=0x00000000000609a0
- (id)entryWithType:(int)arg1 forPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;	// IMP=0x0000000000060940
- (id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 value:(id)arg4 label:(id)arg5;	// IMP=0x000000000006091c
- (id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 identifier:(int)arg4 value:(id)arg5 label:(id)arg6;	// IMP=0x0000000000060789
- (_Bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;	// IMP=0x00000000000606c0
- (id)entriesForPerson:(void *)arg1;	// IMP=0x0000000000060680
- (id)entriesForPeople:(id)arg1;	// IMP=0x0000000000060484
- (_Bool)isFull;	// IMP=0x000000000006043d
- (id)entries;	// IMP=0x0000000000060413
- (void)_scheduleSave;	// IMP=0x00000000000603b4
- (void)dealloc;	// IMP=0x00000000000602f3
- (id)initWithAddressBook:(void *)arg1;	// IMP=0x000000000006020f
- (void)_loadList;	// IMP=0x00000000000601f9
- (void)_loadListWithAddressBook:(void *)arg1;	// IMP=0x000000000005fd1e
- (_Bool)shouldNotReportFavoritesError:(id)arg1;	// IMP=0x000000000005fc66
- (void)reportFavoritesIssue:(id)arg1;	// IMP=0x000000000005fc1e

@end

