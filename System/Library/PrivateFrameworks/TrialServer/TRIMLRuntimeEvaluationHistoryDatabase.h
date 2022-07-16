//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIDatabase;

@interface TRIMLRuntimeEvaluationHistoryDatabase : NSObject
{
    TRIDatabase *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000033533
- (_Bool)expireRecordsOlderThanDate:(id)arg1 deletedCount:(unsigned long long *)arg2;	// IMP=0x000000000003322f
- (_Bool)enumerateRecordsNewerThanDate:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033034
- (_Bool)_enumerateRecordsMatchingWhereClause:(id)arg1 bind:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000328d0
- (_Bool)addRecord:(id)arg1 usingTransaction:(id)arg2;	// IMP=0x000000000003228d
- (struct _PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032277
- (struct _PASDBTransactionCompletion_)readTransactionWithFailableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032261
- (id)initWithDatabase:(id)arg1;	// IMP=0x000000000003217b
- (id)init;	// IMP=0x0000000000032175

@end
