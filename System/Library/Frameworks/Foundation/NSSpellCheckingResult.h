//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSSpellCheckingResult
{
    struct _NSRange _range;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000183529
- (_Bool)_adjustRangesWithOffset:(long long)arg1;	// IMP=0x000000000018364c
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;	// IMP=0x0000000000183552
- (struct _NSRange)range;	// IMP=0x000000000018353c
- (unsigned long long)resultType;	// IMP=0x0000000000183531
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000183463
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000183451
- (id)initWithRange:(struct _NSRange)arg1;	// IMP=0x00000000001833de

@end

