//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NSCorrectionCheckingResult
{
    NSArray *_alternativeStrings;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000186367
- (unsigned long long)resultType;	// IMP=0x0000000000186496
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;	// IMP=0x000000000018636f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001861c8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000186105
- (id)description;	// IMP=0x000000000018606b
- (void)dealloc;	// IMP=0x0000000000186006
- (id)alternativeStrings;	// IMP=0x0000000000185ff5
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3;	// IMP=0x0000000000185f74

@end
