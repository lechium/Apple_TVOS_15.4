//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteConnectionOptions, NSError, NSMapTable, NSMutableArray, NSNumber;
@protocol ICSQLiteConnectionDelegate;

@interface ICSQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    id <ICSQLiteConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _didResetForCorruption;	// 32 = 0x20
    NSMapTable *_preparedStatements;	// 40 = 0x28
    long long _transactionDepth;	// 48 = 0x30
    _Bool _transactionWantsRollback;	// 56 = 0x38
    ICSQLiteConnectionOptions *_options;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001ae622
@property(readonly, copy, nonatomic) ICSQLiteConnectionOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <ICSQLiteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ae46a
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ae2b6
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ae150
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001addc8
- (_Bool)_performResetAfterCorruptionError;	// IMP=0x00000000001add28
- (_Bool)_open;	// IMP=0x00000000001adc9a
- (void)_flushAfterTransactionBlocks;	// IMP=0x00000000001adbf7
- (void)_finalizeAllStatements;	// IMP=0x00000000001ada31
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ad8a7
- (_Bool)_close;	// IMP=0x00000000001ad846
- (_Bool)resetAfterIOError;	// IMP=0x00000000001ad778
- (_Bool)resetAfterCorruptionError;	// IMP=0x00000000001ad733
@property(readonly, copy, nonatomic) NSError *currentError;
- (_Bool)truncate;	// IMP=0x00000000001ad684
- (id)prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ad508
- (void)performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ad405
- (_Bool)open;	// IMP=0x00000000001ad3f3
- (_Bool)setUserVersion:(id)arg1;	// IMP=0x00000000001ad2e1
@property(readonly, copy, nonatomic) NSNumber *userVersion;
@property(readonly, nonatomic) long long lastChangeCount;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ad0c9
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ad0b4
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00000000001acf92
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ace7b
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ace66
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00000000001acd34
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000001acc86
- (_Bool)close;	// IMP=0x00000000001acc74
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000001acc01

@end
