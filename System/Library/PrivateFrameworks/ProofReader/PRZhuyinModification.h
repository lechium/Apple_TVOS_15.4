//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PRZhuyinModification
{
    struct _NSRange _range;	// 8 = 0x8
    NSString *_replacementString;	// 24 = 0x18
    unsigned long long _modificationType;	// 32 = 0x20
    struct _NSRange _syllableRange;	// 40 = 0x28
    struct _NSRange _additionalSyllableRange;	// 56 = 0x38
    double _modificationScore;	// 72 = 0x48
    unsigned long long _syllableCountScore;	// 80 = 0x50
    unsigned char _letters[5];	// 88 = 0x58
    _Bool _producesPartialSyllable;	// 93 = 0x5d
}

- (_Bool)_shouldAppendLetter:(unsigned char)arg1;	// IMP=0x00000000000a5905
- (_Bool)producesPartialSyllable;	// IMP=0x00000000000a58f5
- (unsigned long long)syllableCountScore;	// IMP=0x00000000000a58e4
- (double)modificationScore;	// IMP=0x00000000000a58d2
- (struct _NSRange)combinedSyllableRange;	// IMP=0x00000000000a588a
- (struct _NSRange)additionalSyllableRange;	// IMP=0x00000000000a5874
- (struct _NSRange)syllableRange;	// IMP=0x00000000000a585e
- (unsigned long long)modificationType;	// IMP=0x00000000000a584d
- (id)replacementString;	// IMP=0x00000000000a583c
- (struct _NSRange)range;	// IMP=0x00000000000a5826
- (id)description;	// IMP=0x00000000000a56a8
- (unsigned long long)hash;	// IMP=0x00000000000a5670
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a54f4
- (void)dealloc;	// IMP=0x00000000000a54b2
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(_Bool)arg8;	// IMP=0x00000000000a5468
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(_Bool)arg9;	// IMP=0x00000000000a5338

@end

