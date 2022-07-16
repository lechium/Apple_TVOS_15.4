//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CKSQLiteError
{
}

+ (id)errorForSQLite:(struct sqlite3 *)arg1 message:(id)arg2;	// IMP=0x000000000005784d
+ (id)errorForSQLite:(struct sqlite3 *)arg1 message:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000057679
+ (id)testErrorWithDatabaseCorruption;	// IMP=0x000000000005754b
- (_Bool)CK_isCKSQLiteError;	// IMP=0x0000000000057ae6
@property(readonly, nonatomic) _Bool databaseIsCorrupt;
@property(readonly, nonatomic) int sqliteExtendedCode;
@property(readonly, nonatomic) int sqliteCode;
- (id)description;	// IMP=0x00000000000578f6

@end

