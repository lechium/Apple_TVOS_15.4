//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSEnumerator, NSSet;

@interface _PASSqliteNSSetCursor
{
    NSSet *_set;	// 24 = 0x18
    id _currentValue;	// 32 = 0x20
    NSEnumerator *_valuesEnumerator;	// 40 = 0x28
}

+ (id)planningInfoForValueConstraint:(int)arg1;	// IMP=0x0000000000047900
+ (const char *)sqliteMethodName;	// IMP=0x00000000000478f3
+ (const char *)sqliteCreateTableStatement;	// IMP=0x00000000000478e6
- (void).cxx_destruct;	// IMP=0x00000000000478a4
- (void)stepIndexedRow;	// IMP=0x0000000000047860
- (_Bool)currentIndexedRowSatisfiesConstraints;	// IMP=0x000000000004777f
- (id)currentIndexedValue;	// IMP=0x000000000004776a
- (_Bool)currentIndexEof;	// IMP=0x0000000000047755
- (void)finalizeConstraints;	// IMP=0x00000000000476f5
- (void)applyConstraint:(int)arg1 withArgument:(id)arg2;	// IMP=0x0000000000047604
@property(retain, nonatomic) NSSet *collection; // @dynamic collection;

@end
