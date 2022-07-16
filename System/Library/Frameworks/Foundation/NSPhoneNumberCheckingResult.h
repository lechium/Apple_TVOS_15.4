//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NSPhoneNumberCheckingResult
{
    struct _NSRange _range;	// 8 = 0x8
    NSString *_phoneNumber;	// 24 = 0x18
    id _underlyingResult;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000187d34
@property(readonly) void *underlyingResult;
- (id)phoneNumber;	// IMP=0x0000000000187f31
- (_Bool)_adjustRangesWithOffset:(long long)arg1;	// IMP=0x0000000000187e6e
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;	// IMP=0x0000000000187d5d
- (struct _NSRange)range;	// IMP=0x0000000000187d47
- (unsigned long long)resultType;	// IMP=0x0000000000187d3c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000187c03
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000187b6d
- (id)description;	// IMP=0x0000000000187ad3
- (void)dealloc;	// IMP=0x0000000000187a58
- (id)initWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2;	// IMP=0x0000000000187a43
- (id)initWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2 underlyingResult:(void *)arg3;	// IMP=0x0000000000187989

@end
