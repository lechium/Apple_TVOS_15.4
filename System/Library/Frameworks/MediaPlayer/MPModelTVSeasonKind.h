//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelTVEpisodeKind;

@interface MPModelTVSeasonKind
{
    MPModelTVEpisodeKind *_episodeKind;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000245544
+ (id)kindWithEpisodeKind:(id)arg1;	// IMP=0x0000000000245451
+ (id)identityKind;	// IMP=0x000000000024541f
- (void).cxx_destruct;	// IMP=0x000000000024540c
@property(readonly, nonatomic) MPModelTVEpisodeKind *episodeKind; // @synthesize episodeKind=_episodeKind;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024537e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002452de
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000245263
- (unsigned long long)hash;	// IMP=0x000000000024520d
- (id)humanDescription;	// IMP=0x0000000000245196
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;	// IMP=0x000000000024732a

@end

