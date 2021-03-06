//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/_PASSqliteErrorHandlerProtocol-Protocol.h>

@class NSString;

@interface _PASSqliteDefaultErrorHandler : NSObject <_PASSqliteErrorHandlerProtocol>
{
}

- (_Bool)_handle_SQLITE_AUTH_USER:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023d1c
- (_Bool)_handle_SQLITE_WARNING_AUTOINDEX:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023d0a
- (_Bool)_handle_SQLITE_NOTICE_RECOVER_ROLLBACK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023cf8
- (_Bool)_handle_SQLITE_NOTICE_RECOVER_WAL:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023ce6
- (_Bool)_handle_SQLITE_CONSTRAINT_ROWID:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023cd4
- (_Bool)_handle_SQLITE_CONSTRAINT_VTAB:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023c50
- (_Bool)_handle_SQLITE_CONSTRAINT_UNIQUE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023c3e
- (_Bool)_handle_SQLITE_CONSTRAINT_TRIGGER:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023c2c
- (_Bool)_handle_SQLITE_CONSTRAINT_PRIMARYKEY:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023c1a
- (_Bool)_handle_SQLITE_CONSTRAINT_NOTNULL:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023c08
- (_Bool)_handle_SQLITE_CONSTRAINT_FUNCTION:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023bf6
- (_Bool)_handle_SQLITE_CONSTRAINT_FOREIGNKEY:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023be4
- (_Bool)_handle_SQLITE_CONSTRAINT_COMMITHOOK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023bd2
- (_Bool)_handle_SQLITE_CONSTRAINT_CHECK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023bc0
- (_Bool)_handle_SQLITE_ABORT_ROLLBACK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023bae
- (_Bool)_handle_SQLITE_READONLY_DBMOVED:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023b9c
- (_Bool)_handle_SQLITE_READONLY_ROLLBACK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023b8a
- (_Bool)_handle_SQLITE_READONLY_CANTLOCK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023b78
- (_Bool)_handle_SQLITE_READONLY_RECOVERY:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023b66
- (_Bool)_handle_SQLITE_CORRUPT_VTAB:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023ae2
- (_Bool)_handle_SQLITE_BUSY_SNAPSHOT:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023ad0
- (_Bool)_handle_SQLITE_BUSY_RECOVERY:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023abe
- (_Bool)_handle_SQLITE_LOCKED_SHAREDCACHE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023aac
- (_Bool)_handle_SQLITE_WARNING:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023a9a
- (_Bool)_handle_SQLITE_NOTICE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023a88
- (_Bool)_handle_SQLITE_RANGE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023a76
- (_Bool)_handle_SQLITE_FORMAT:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023a64
- (_Bool)_handle_SQLITE_AUTH:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023a52
- (_Bool)_handle_SQLITE_NOLFS:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023a40
- (_Bool)_handle_SQLITE_MISUSE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023a2e
- (_Bool)_handle_SQLITE_MISMATCH:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023a1c
- (_Bool)_handle_SQLITE_CONSTRAINT:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023a0a
- (_Bool)_handle_SQLITE_TOOBIG:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000239f8
- (_Bool)_handle_SQLITE_SCHEMA:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000239e6
- (_Bool)_handle_SQLITE_EMPTY:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000239d4
- (_Bool)_handle_SQLITE_PROTOCOL:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000239c2
- (_Bool)_handle_SQLITE_NOTFOUND:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000239b0
- (_Bool)_handle_SQLITE_INTERRUPT:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002399e
- (_Bool)_handle_SQLITE_READONLY:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002398c
- (_Bool)_handle_SQLITE_NOMEM:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002397a
- (_Bool)_handle_SQLITE_LOCKED:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023968
- (_Bool)_handle_SQLITE_BUSY:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000238e4
- (_Bool)_handle_SQLITE_ABORT:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000238d2
- (_Bool)_handle_SQLITE_PERM:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000238c0
- (_Bool)_handle_SQLITE_INTERNAL:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000238ae
- (_Bool)_handle_SQLITE_ERROR:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002389c
- (_Bool)_handle_SQLITE_IOERR_AUTH:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002388a
- (_Bool)_handle_SQLITE_IOERR_VNODE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023878
- (_Bool)_handle_SQLITE_IOERR_CONVPATH:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023866
- (_Bool)_handle_SQLITE_IOERR_GETTEMPPATH:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023854
- (_Bool)_handle_SQLITE_IOERR_MMAP:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023842
- (_Bool)_handle_SQLITE_IOERR_DELETE_NOENT:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023830
- (_Bool)_handle_SQLITE_IOERR_SEEK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002381e
- (_Bool)_handle_SQLITE_IOERR_SHMMAP:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002380c
- (_Bool)_handle_SQLITE_IOERR_SHMLOCK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000237fa
- (_Bool)_handle_SQLITE_IOERR_SHMOPEN:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000237e8
- (_Bool)_handle_SQLITE_IOERR_DIR_CLOSE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000237d6
- (_Bool)_handle_SQLITE_IOERR_CLOSE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000237c4
- (_Bool)_handle_SQLITE_IOERR_LOCK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000237b2
- (_Bool)_handle_SQLITE_IOERR_CHECKRESERVEDLOCK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000237a0
- (_Bool)_handle_SQLITE_IOERR_ACCESS:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002378e
- (_Bool)_handle_SQLITE_IOERR_NOMEM:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023717
- (_Bool)_handle_SQLITE_IOERR_BLOCKED:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023705
- (_Bool)_handle_SQLITE_IOERR_DELETE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000236f3
- (_Bool)_handle_SQLITE_IOERR_RDLOCK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000236e1
- (_Bool)_handle_SQLITE_IOERR_UNLOCK:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000236cf
- (_Bool)_handle_SQLITE_IOERR_FSTAT:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000236bd
- (_Bool)_handle_SQLITE_IOERR_TRUNCATE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000236ab
- (_Bool)_handle_SQLITE_IOERR_DIR_FSYNC:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023699
- (_Bool)_handle_SQLITE_IOERR_FSYNC:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023687
- (_Bool)_handle_SQLITE_IOERR_WRITE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023675
- (_Bool)_handle_SQLITE_IOERR_READ:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023663
- (_Bool)_handle_SQLITE_IOERR_SHMSIZE:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000234f1
- (_Bool)_handle_SQLITE_IOERR:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002346d
- (_Bool)_handle_SQLITE_CANTOPEN_CONVPATH:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002345b
- (_Bool)_handle_SQLITE_CANTOPEN_FULLPATH:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023449
- (_Bool)_handle_SQLITE_CANTOPEN_ISDIR:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023437
- (_Bool)_handle_SQLITE_CANTOPEN_NOTEMPDIR:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023425
- (_Bool)_handle_SQLITE_CANTOPEN:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023380
- (_Bool)_handle_SQLITE_IOERR_SHORT_READ:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000232da
- (_Bool)_handle_SQLITE_NOTADB:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000023234
- (_Bool)_handle_SQLITE_CORRUPT:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002318e
- (_Bool)_handle_SQLITE_FULL:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x000000000002310a
- (_Bool)_handle_UNKNOWN_ERROR:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x00000000000230f8
- (_Bool)_abortDueToSqliteError:(id)arg1 onError:(CDUnknownBlockType)arg2 db:(id)arg3;	// IMP=0x0000000000022fa0
- (_Bool)handleSqliteError:(int)arg1 error:(id)arg2 onError:(CDUnknownBlockType)arg3 db:(id)arg4;	// IMP=0x0000000000022703

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

