//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CHSharedAddressBook
{
    NSMutableDictionary *_addressBookCache;	// 8 = 0x8
}

+ (id)get;	// IMP=0x0000000000033530
- (void).cxx_destruct;	// IMP=0x0000000000033f1d
@property(retain) NSMutableDictionary *addressBookCache; // @synthesize addressBookCache=_addressBookCache;
- (id)description;	// IMP=0x0000000000033d83
- (unsigned long long)cachedCount;	// IMP=0x0000000000033c87
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;	// IMP=0x0000000000033adc
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003396c
- (void)insertAddressBookInfoDictionaryIntoCache:(id)arg1;	// IMP=0x0000000000033838
- (void)revertAddressBook:(id)arg1;	// IMP=0x000000000003377a
- (void)cleanUpAddressBookCache_sync;	// IMP=0x000000000003373d
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;	// IMP=0x0000000000033726
- (void)registerForContactsNotifications;	// IMP=0x0000000000033672
- (void)dealloc;	// IMP=0x00000000000335fd
- (id)init;	// IMP=0x0000000000033599

@end

