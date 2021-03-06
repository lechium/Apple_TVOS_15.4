//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteStatement, NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSSQLiteCursor : NSObject
{
    NSDictionary *_columnIndexByName;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    AMSSQLiteStatement *_statementWrapper;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001fb781
- (int)_columnTypeForColumnIndex:(int)arg1;	// IMP=0x00000000001fb771
- (int)columnIndexForColumnName:(id)arg1;	// IMP=0x00000000001fb6c9
- (id)URLForColumnName:(id)arg1;	// IMP=0x00000000001fb683
- (id)URLForColumnIndex:(int)arg1;	// IMP=0x00000000001fb623
- (id)stringForColumnName:(id)arg1;	// IMP=0x00000000001fb5dd
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x00000000001fb580
@property(readonly, nonatomic) long long numberOfColumns;
- (id)numberForColumnName:(id)arg1;	// IMP=0x00000000001fb529
- (id)numberForColumnIndex:(int)arg1;	// IMP=0x00000000001fb493
- (long long)int64ForColumnName:(id)arg1;	// IMP=0x00000000001fb45f
- (long long)int64ForColumnIndex:(int)arg1;	// IMP=0x00000000001fb44f
- (int)intForColumnName:(id)arg1;	// IMP=0x00000000001fb41b
- (int)intForColumnIndex:(int)arg1;	// IMP=0x00000000001fb40b
- (double)doubleForColumnName:(id)arg1;	// IMP=0x00000000001fb3d6
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x00000000001fb3c6
- (id)dateForColumnName:(id)arg1;	// IMP=0x00000000001fb380
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x00000000001fb300
- (id)dataForColumnName:(id)arg1;	// IMP=0x00000000001fb2ba
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x00000000001fb247
- (id)initWithStatement:(id)arg1;	// IMP=0x00000000001fb1c8

@end

