//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, ML3DatabaseStatement, NSDictionary, NSString;

@interface ML3DatabaseResult : NSObject
{
    ML3DatabaseStatement *_statement;	// 8 = 0x8
    ML3DatabaseConnection *_connection;	// 16 = 0x10
    NSDictionary *_columnNameIndexMap;	// 24 = 0x18
    unsigned long long _limitIndex;	// 32 = 0x20
    NSString *_limitProperty;	// 40 = 0x28
    long long _limitValue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000016f3db
@property(nonatomic) long long limitValue; // @synthesize limitValue=_limitValue;
@property(copy, nonatomic) NSString *limitProperty; // @synthesize limitProperty=_limitProperty;
- (id)_statement;	// IMP=0x000000000016f3af
- (id)objectsInColumn:(unsigned long long)arg1;	// IMP=0x000000000016f2a8
- (id)stringValueForFirstRowAndColumn;	// IMP=0x000000000016f1d5
- (long long)int64ValueForFirstRowAndColumn;	// IMP=0x000000000016f136
- (id)objectForFirstRowAndColumn;	// IMP=0x000000000016f063
- (_Bool)hasAtLeastOneRow;	// IMP=0x000000000016efc4
- (id)rows;	// IMP=0x000000000016ef3c
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000016e966
- (id)columnNameIndexMap;	// IMP=0x000000000016e81c
- (unsigned long long)indexForColumnName:(id)arg1;	// IMP=0x000000000016e786
- (void)setLimitProperty:(id)arg1 limitValue:(long long)arg2;	// IMP=0x000000000016e749
- (id)initWithStatement:(id)arg1 connection:(id)arg2;	// IMP=0x000000000016e62d
- (id)init;	// IMP=0x000000000016e5bb

@end

