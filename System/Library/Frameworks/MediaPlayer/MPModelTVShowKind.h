//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelTVSeasonKind;

@interface MPModelTVShowKind
{
    MPModelTVSeasonKind *_seasonKind;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002a744a
+ (id)kindWithSeasonKind:(id)arg1;	// IMP=0x00000000002a7357
+ (id)identityKind;	// IMP=0x00000000002a7325
- (void).cxx_destruct;	// IMP=0x00000000002a7312
@property(readonly, copy, nonatomic) MPModelTVSeasonKind *seasonKind; // @synthesize seasonKind=_seasonKind;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a7284
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a71e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a7169
- (unsigned long long)hash;	// IMP=0x00000000002a7113
- (id)humanDescription;	// IMP=0x00000000002a709c
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;	// IMP=0x0000000000247281
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;	// IMP=0x000000000024717d

@end
