//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PRPinyinModification
{
    struct _NSRange _range;	// 8 = 0x8
    NSString *_replacementString;	// 24 = 0x18
    unsigned long long _modificationType;	// 32 = 0x20
    struct _NSRange _syllableRange;	// 40 = 0x28
    struct _NSRange _additionalSyllableRange;	// 56 = 0x38
    double _modificationScore;	// 72 = 0x48
    unsigned long long _syllableCountScore;	// 80 = 0x50
    unsigned char _letters[7];	// 88 = 0x58
    _Bool _producesPartialSyllable;	// 95 = 0x5f
    _Bool _isTemporary;	// 96 = 0x60
}

+ (id)finalModificationsForInputString:(id)arg1;	// IMP=0x00000000000aef1f
+ (id)modificationsForInputString:(id)arg1;	// IMP=0x00000000000aeedc
- (_Bool)_shouldAppendLetter:(unsigned char)arg1;	// IMP=0x00000000000af741
- (_Bool)isTemporary;	// IMP=0x00000000000af731
- (_Bool)producesPartialSyllable;	// IMP=0x00000000000af721
- (unsigned long long)syllableCountScore;	// IMP=0x00000000000af710
- (double)modificationScore;	// IMP=0x00000000000af6fe
- (struct _NSRange)combinedSyllableRange;	// IMP=0x00000000000af6b6
- (struct _NSRange)additionalSyllableRange;	// IMP=0x00000000000af6a0
- (struct _NSRange)syllableRange;	// IMP=0x00000000000af68a
- (unsigned long long)modificationType;	// IMP=0x00000000000af679
- (id)replacementString;	// IMP=0x00000000000af668
- (struct _NSRange)range;	// IMP=0x00000000000af652
- (id)description;	// IMP=0x00000000000af4ac
- (unsigned long long)hash;	// IMP=0x00000000000af474
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000af2ad
- (void)dealloc;	// IMP=0x00000000000af26b
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5;	// IMP=0x00000000000af222
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 isTemporary:(_Bool)arg6;	// IMP=0x00000000000af1d1
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(_Bool)arg8;	// IMP=0x00000000000af17f
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(_Bool)arg8 isTemporary:(_Bool)arg9;	// IMP=0x00000000000af129
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6;	// IMP=0x00000000000af0eb
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(_Bool)arg9;	// IMP=0x00000000000af0a4
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(_Bool)arg9 isTemporary:(_Bool)arg10;	// IMP=0x00000000000aef62

@end

