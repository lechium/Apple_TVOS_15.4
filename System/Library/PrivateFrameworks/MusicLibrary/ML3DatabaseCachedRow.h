//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface ML3DatabaseCachedRow
{
    NSArray *_arrayRepresentation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001aaff9
- (id)valueForColumnName:(id)arg1;	// IMP=0x00000000001aafca
- (void)getBlobBytes:(const void **)arg1 outLength:(int *)arg2 forColumnName:(id)arg3;	// IMP=0x00000000001aaf9e
- (id)numberForColumnName:(id)arg1;	// IMP=0x00000000001aaf6f
- (id)stringForColumnName:(id)arg1;	// IMP=0x00000000001aaf40
- (const char *)cStringForColumnName:(id)arg1;	// IMP=0x00000000001aaf11
- (long long)int64ForColumnName:(id)arg1;	// IMP=0x00000000001aaee2
- (int)intForColumnName:(id)arg1;	// IMP=0x00000000001aaeb3
- (double)doubleForColumnName:(id)arg1;	// IMP=0x00000000001aae83
- (id)dataForColumnName:(id)arg1;	// IMP=0x00000000001aae54
- (id)_numberOrZeroForColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000001aaddc
- (id)arrayRepresentation;	// IMP=0x00000000001aadb7
- (id)dictionaryRepresentation;	// IMP=0x00000000001aac7e
- (id)valueForColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000001aac10
- (void)getBlobBytes:(const void **)arg1 outLength:(int *)arg2 forColumnIndex:(unsigned long long)arg3;	// IMP=0x00000000001aaafd
- (id)numberForColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000001aaaeb
- (id)stringForColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000001aaad9
- (const char *)cStringForColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000001aaa8d
- (long long)int64ForColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000001aaa49
- (int)intForColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000001aaa05
- (double)doubleForColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000001aa9b5
- (id)dataForColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000001aa9a3
- (unsigned long long)columnCount;	// IMP=0x00000000001aa986
- (id)initWithParentResult:(id)arg1;	// IMP=0x00000000001aa94c
- (id)initWithArray:(id)arg1;	// IMP=0x00000000001aa8dc

@end

