//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKAnisetteData;

@interface TRLegacyAnisetteDataResponse
{
    AKAnisetteData *_anisetteData;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001383c
- (void).cxx_destruct;	// IMP=0x0000000000013a3f
@property(copy, nonatomic) AKAnisetteData *anisetteData; // @synthesize anisetteData=_anisetteData;
- (id)description;	// IMP=0x0000000000013953
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000138b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000013844

@end

