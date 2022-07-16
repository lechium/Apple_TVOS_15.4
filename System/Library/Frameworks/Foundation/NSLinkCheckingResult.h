//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface NSLinkCheckingResult
{
    struct _NSRange _range;	// 8 = 0x8
    NSURL *_url;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001857dd
- (id)URL;	// IMP=0x00000000001859da
- (_Bool)_adjustRangesWithOffset:(long long)arg1;	// IMP=0x0000000000185917
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;	// IMP=0x0000000000185806
- (struct _NSRange)range;	// IMP=0x00000000001857f0
- (unsigned long long)resultType;	// IMP=0x00000000001857e5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001856ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000185616
- (id)description;	// IMP=0x000000000018557c
- (void)dealloc;	// IMP=0x0000000000185517
- (id)initWithRange:(struct _NSRange)arg1 URL:(id)arg2;	// IMP=0x0000000000185478

@end
