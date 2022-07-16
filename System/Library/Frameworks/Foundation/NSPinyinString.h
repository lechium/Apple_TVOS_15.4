//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NSPinyinString
{
    NSString *_string;	// 8 = 0x8
    unsigned long long _syllableCount;	// 16 = 0x10
    unsigned long long _score;	// 24 = 0x18
    unsigned long long _rangeCount;	// 32 = 0x20
    unsigned long long _replacementCount;	// 40 = 0x28
    unsigned long long _transpositionCount;	// 48 = 0x30
    unsigned long long _insertionCount;	// 56 = 0x38
    unsigned long long _deletionCount;	// 64 = 0x40
    unsigned long long _firstModificationIndex;	// 72 = 0x48
    struct _NSRange *_ranges;	// 80 = 0x50
    _Bool _lastSyllableIsPartial;	// 88 = 0x58
}

+ (id)prefixesForInputString:(id)arg1;	// IMP=0x000000000018adb5
+ (id)alternativesForInputString:(id)arg1;	// IMP=0x000000000018ad6c
- (struct _NSRange)nonPinyinRangeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018acec
- (unsigned long long)indexOfFirstModification;	// IMP=0x000000000018acdb
- (unsigned long long)numberOfDeletions;	// IMP=0x000000000018acca
- (unsigned long long)numberOfInsertions;	// IMP=0x000000000018acb9
- (unsigned long long)numberOfTranspositions;	// IMP=0x000000000018aca8
- (unsigned long long)numberOfReplacements;	// IMP=0x000000000018ac97
- (unsigned long long)numberOfNonPinyinRanges;	// IMP=0x000000000018ac86
- (unsigned long long)score;	// IMP=0x000000000018ac75
- (_Bool)lastSyllableIsPartial;	// IMP=0x000000000018ac65
- (unsigned long long)syllableCount;	// IMP=0x000000000018ac54
- (id)string;	// IMP=0x000000000018ac43
- (Class)classForCoder;	// IMP=0x000000000018ac32
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018a925
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018a695
- (id)description;	// IMP=0x000000000018a361
- (id)nonPinyinIndexSet;	// IMP=0x000000000018a2c8
- (unsigned long long)hash;	// IMP=0x000000000018a27f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018a050
- (void)dealloc;	// IMP=0x0000000000189fd6
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(_Bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 rangeCount:(unsigned long long)arg9 ranges:(struct _NSRange *)arg10;	// IMP=0x0000000000189f98
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(_Bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 indexOfFirstModification:(unsigned long long)arg9 rangeCount:(unsigned long long)arg10 ranges:(struct _NSRange *)arg11;	// IMP=0x0000000000189e59
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000189e3c
- (unsigned long long)length;	// IMP=0x0000000000189e1f

@end
