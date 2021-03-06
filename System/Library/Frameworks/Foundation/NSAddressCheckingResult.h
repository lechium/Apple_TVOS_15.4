//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface NSAddressCheckingResult
{
    struct _NSRange _range;	// 8 = 0x8
    NSDictionary *_components;	// 24 = 0x18
    id _underlyingResult;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000185243
@property(readonly) void *underlyingResult;
- (id)components;	// IMP=0x0000000000185456
- (_Bool)_adjustRangesWithOffset:(long long)arg1;	// IMP=0x0000000000185393
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;	// IMP=0x000000000018526c
- (struct _NSRange)range;	// IMP=0x0000000000185256
- (unsigned long long)resultType;	// IMP=0x000000000018524b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001850d2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018503c
- (void)dealloc;	// IMP=0x0000000000184fc1
- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2;	// IMP=0x0000000000184fac
- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2 underlyingResult:(void *)arg3;	// IMP=0x0000000000184ef2

@end

