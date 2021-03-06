//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSInternalHTTPCookie2Storage-Protocol.h>

@class NSString, NSURL;

@interface NSPersistentHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage>
{
    struct sqlite3 *persistentDb;	// 8 = 0x8
    struct sqlite3_stmt *insertCookiesStmt;	// 16 = 0x10
    struct sqlite3_stmt *selectDomainCookiesStmt;	// 24 = 0x18
    struct sqlite3_stmt *selectAllCookiesStmt;	// 32 = 0x20
    struct sqlite3_stmt *deleteCookiesStmt;	// 40 = 0x28
    struct sqlite3_stmt *deleteAllCookiesStmt;	// 48 = 0x30
    NSURL *_path;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000019c9c9
@property(retain) NSURL *path; // @synthesize path=_path;
- (void)commitTransaction;	// IMP=0x000000000019c8f7
- (void)beginTransaction;	// IMP=0x000000000019c848
- (void)setCookies:(id)arg1;	// IMP=0x000000000019ba07
- (void)setCookie:(id)arg1;	// IMP=0x000000000019b94a
- (id)getCookiesWithFilter:(id)arg1;	// IMP=0x000000000019b050
- (id)getAllCookies;	// IMP=0x000000000019aff0
- (void)deleteCookiesWithFilter:(id)arg1;	// IMP=0x000000000019ae07
- (void)deleteCookies:(id)arg1;	// IMP=0x000000000019ac9e
- (void)deleteCookie:(id)arg1;	// IMP=0x000000000019a789
- (void)deleteAllCookies;	// IMP=0x000000000019a6d8
- (id)initWithPath:(id)arg1;	// IMP=0x000000000019a5db
- (id)init;	// IMP=0x000000000019a37c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

