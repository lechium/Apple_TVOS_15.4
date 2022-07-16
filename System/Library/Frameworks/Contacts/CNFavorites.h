//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, NSArray, NSMutableArray, NSMutableDictionary, NSUUID;
@protocol CNFavoritesLogger;

@interface CNFavorites : NSObject
{
    NSMutableArray *_entries;	// 8 = 0x8
    _Bool _dirty;	// 16 = 0x10
    _Bool _needsReload;	// 17 = 0x11
    CNContactStore *_contactStore;	// 24 = 0x18
    NSMutableDictionary *_uidToEntry;	// 32 = 0x20
    unsigned long long _postCount;	// 40 = 0x28
    id <CNFavoritesLogger> _logger;	// 48 = 0x30
    NSUUID *_favoritesRegistrationKey;	// 56 = 0x38
}

+ (id)registeredFavorites;	// IMP=0x00000000001084ac
+ (id)favoritesPath;	// IMP=0x0000000000107ff3
+ (void)flushSingleton;	// IMP=0x0000000000107fc9
+ (id)sharedInstance;	// IMP=0x0000000000107f40
- (void).cxx_destruct;	// IMP=0x000000000010b304
@property(readonly, nonatomic) NSUUID *favoritesRegistrationKey; // @synthesize favoritesRegistrationKey=_favoritesRegistrationKey;
@property(readonly, nonatomic) id <CNFavoritesLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) unsigned long long postCount; // @synthesize postCount=_postCount;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) NSMutableDictionary *uidToEntry; // @synthesize uidToEntry=_uidToEntry;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)recacheIdentitiesSoon;	// IMP=0x000000000010b286
- (id)_uniqueRematchedEntries:(id)arg1;	// IMP=0x000000000010b006
- (void)rematchEntriesWithOptions:(unsigned long long)arg1;	// IMP=0x000000000010ad83
- (void)saveImmediately;	// IMP=0x000000000010ad71
- (void)save;	// IMP=0x000000000010ab1c
- (_Bool)writeFavoritesToFile:(id)arg1;	// IMP=0x000000000010a455
- (void)removeAllEntries;	// IMP=0x000000000010a3ff
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;	// IMP=0x000000000010a325
- (void)removeEntryAtIndex:(long long)arg1;	// IMP=0x000000000010a274
- (void)addEntry:(id)arg1;	// IMP=0x000000000010a1ca
- (void)_entriesChangedExternally;	// IMP=0x000000000010a0f5
- (void)_postChangeNotification;	// IMP=0x000000000010a0a8
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;	// IMP=0x0000000000109df0
- (void)_addEntryToMap:(id)arg1;	// IMP=0x0000000000109b06
- (_Bool)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3;	// IMP=0x00000000001099ce
- (_Bool)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;	// IMP=0x000000000010996a
- (id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;	// IMP=0x00000000001098fe
- (id)entryWithIdentifier:(id)arg1 forContact:(id)arg2;	// IMP=0x0000000000109893
- (id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5;	// IMP=0x00000000001093b3
- (_Bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;	// IMP=0x00000000001091db
- (id)entriesForContact:(id)arg1;	// IMP=0x000000000010909c
@property(readonly, getter=isFull) _Bool full;
@property(readonly, nonatomic) NSArray *entries;
- (void)loadEntriesIfNecessary;	// IMP=0x0000000000108ce9
- (id)_entryDictionaries;	// IMP=0x0000000000108723
- (_Bool)shouldSimulateCrashReportForError:(id)arg1;	// IMP=0x00000000001085cf
- (void)dealloc;	// IMP=0x000000000010854c
- (id)init;	// IMP=0x0000000000108511
- (void)unregisterForDistributedNotifications;	// IMP=0x000000000010841c
- (void)registerForDistributedNotifications;	// IMP=0x00000000001082df
- (id)initWithContactStore:(id)arg1 logger:(id)arg2;	// IMP=0x000000000010821b
- (id)initWithContactStore:(id)arg1;	// IMP=0x0000000000108159
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg1;	// IMP=0x0000000000108147

@end
