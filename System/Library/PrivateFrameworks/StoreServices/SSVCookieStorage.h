//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, SSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface SSVCookieStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    _Bool _performingMigration;	// 16 = 0x10
    NSURL *_storageLocation;	// 24 = 0x18
    _Bool _usesSharedCookieDatabase;	// 32 = 0x20
    SSSQLiteDatabase *__database;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000000000daf1b
+ (id)_rescuedStorageLocationForLocation:(id)arg1;	// IMP=0x00000000000dadb7
+ (_Bool)_fileIsOwnedByRoot:(id)arg1;	// IMP=0x00000000000dacbd
+ (_Bool)_currentProcessShouldUseRescuedStorageLocationForLocation:(id)arg1;	// IMP=0x00000000000dabc2
+ (_Bool)_currentProcessIsRoot;	// IMP=0x00000000000dabb2
+ (id)_sharedStorageLocationPath;	// IMP=0x00000000000dab22
+ (_Bool)_migrateToVersion2WithDatabase:(id)arg1;	// IMP=0x00000000000daa7e
+ (_Bool)_migrateToVersion1WithDatabase:(id)arg1;	// IMP=0x00000000000daa62
+ (_Bool)_setupCookieDatabase:(id)arg1 forCookieStorage:(id)arg2;	// IMP=0x00000000000da172
+ (id)_getUserSetCookiesForResponse:(id)arg1;	// IMP=0x00000000000d9a85
+ (id)_getSetCookiesForResponse:(id)arg1;	// IMP=0x00000000000d99d8
+ (id)_getGlobalSetCookiesForResponse:(id)arg1;	// IMP=0x00000000000d9898
+ (_Bool)_fileURLRepresentsSharedStorageLocation:(id)arg1;	// IMP=0x00000000000d9393
+ (_Bool)_bindStatement:(struct sqlite3_stmt *)arg1 withValues:(id)arg2;	// IMP=0x00000000000d69e7
+ (_Bool)responseHasSetCookies:(id)arg1;	// IMP=0x00000000000d45af
+ (id)sharedStorage;	// IMP=0x00000000000d2c60
- (void).cxx_destruct;	// IMP=0x00000000000daf45
@property(nonatomic) _Bool performingMigration; // @synthesize performingMigration=_performingMigration;
- (void)synchronizeCookies;	// IMP=0x00000000000daf2d
- (_Bool)_stopIncludingLocalCookies;	// IMP=0x00000000000da13d
- (void)_setCookies:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000d9ed7
- (void)_insertCookies:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000d9bc5
- (id)_filterCookies:(id)arg1 forURL:(id)arg2;	// IMP=0x00000000000d94c9
@property(readonly, nonatomic) SSSQLiteDatabase *_database; // @synthesize _database=__database;
- (id)_copyPrivateCookieObjectsForURL:(id)arg1 key:(id)arg2;	// IMP=0x00000000000d88ca
- (id)_copyPrivateCookiesForURL:(id)arg1 key:(id)arg2;	// IMP=0x00000000000d7f0d
- (id)_copyCookiesWithKey:(id)arg1;	// IMP=0x00000000000d7a59
- (id)_copyCookiesForPreparedSQLStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000000000d757d
- (id)_copyCookieObjectsForURL:(id)arg1 key:(id)arg2;	// IMP=0x00000000000d711d
- (id)_copyCookieDictionaryForURL:(id)arg1 key:(id)arg2;	// IMP=0x00000000000d6e1a
- (void)_cookieDatabaseDidChange;	// IMP=0x00000000000d6def
- (id)_columnNameForCookieProperty:(id)arg1;	// IMP=0x00000000000d6c41
- (void)_bindInsertStatement:(struct sqlite3_stmt *)arg1 forCookie:(id)arg2 key:(id)arg3;	// IMP=0x00000000000d671a
- (id)_allCookieKeys;	// IMP=0x00000000000d60b2
- (id)_accountForKey:(id)arg1;	// IMP=0x00000000000d5f5b
- (id)fetchDefaults;	// IMP=0x00000000000d5e72
- (void)synchronizeFeatureEnablerCookieWithCookieValue:(id)arg1 key:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d54f1
- (_Bool)_shouldAddITFECookieToURL:(id)arg1;	// IMP=0x00000000000d53eb
- (id)cookieArrayBySettingFeatureEnablerWithArray:(id)arg1 key:(id)arg2;	// IMP=0x00000000000d507f
- (void)setFeatureEnablerInDictionary:(id)arg1 key:(id)arg2;	// IMP=0x00000000000d4ef3
- (void)_handleSharedCookieDatabaseDidChangeDarwinNotification;	// IMP=0x00000000000d4e99
@property(readonly) NSURL *storageLocation;
- (void)setCookiesFromCookieStorage:(id)arg1;	// IMP=0x00000000000d4aa9
- (void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3;	// IMP=0x00000000000d48c0
- (void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x00000000000d48ab
- (void)setCookiesForHTTPResponse:(id)arg1 account:(id)arg2;	// IMP=0x00000000000d4801
- (void)setCookies:(id)arg1 forUserIdentifier:(id)arg2;	// IMP=0x00000000000d477e
- (void)setCookies:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000000000d46a3
- (void)removeCookiesWithUserIdentifier:(id)arg1 scope:(long long)arg2;	// IMP=0x00000000000d40bd
- (void)removeCookiesWithUserIdentifier:(id)arg1;	// IMP=0x00000000000d40a9
- (void)removeCookiesWithAccount:(id)arg1;	// IMP=0x00000000000d401a
- (void)removeCookiesWithProperties:(id)arg1;	// IMP=0x00000000000d3a37
- (void)removeAllCookies;	// IMP=0x00000000000d358b
- (id)cookiesForURL:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3;	// IMP=0x00000000000d34b8
- (id)cookiesForURL:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x00000000000d34a3
- (id)cookiesForURL:(id)arg1 account:(id)arg2;	// IMP=0x00000000000d33e8
- (id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3;	// IMP=0x00000000000d3144
- (id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x00000000000d312f
- (id)cookieHeadersForURL:(id)arg1 account:(id)arg2;	// IMP=0x00000000000d3074
- (id)allCookiesForUserIdentifier:(id)arg1 scope:(long long)arg2;	// IMP=0x00000000000d2fef
- (id)allCookiesForUserIdentifier:(id)arg1;	// IMP=0x00000000000d2fdb
- (id)allCookiesForAccount:(id)arg1;	// IMP=0x00000000000d2f3b
- (void)dealloc;	// IMP=0x00000000000d2c10
- (id)initWithStorageLocation:(id)arg1;	// IMP=0x00000000000d27cd
- (id)init;	// IMP=0x00000000000d27b9

@end
