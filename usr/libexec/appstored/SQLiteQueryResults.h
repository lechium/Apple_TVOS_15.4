//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SQLiteStatement;

@interface SQLiteQueryResults : NSObject
{
    SQLiteStatement *_statement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004cf12
- (int)clearBindings;	// IMP=0x001000000004cefc
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000004cee6
- (void)bindUUID:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000004ced0
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000004ceba
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000004cea4
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000004ce8e
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x001000000004ce78
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x001000000004ce62
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x001000000004ce4c
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x001000000004ce36
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x001000000004ce20
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000004ce0a
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000004cdf4
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000004cdde
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000004cdc8
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000004cdb2
@property(readonly, nonatomic) _Bool hasRows;
@property(readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property(readonly, nonatomic) long long firstInt64Value;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004c92f
- (id)initWithStatement:(id)arg1;	// IMP=0x001000000004c8c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
