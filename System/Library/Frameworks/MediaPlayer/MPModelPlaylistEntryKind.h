//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MPModelPlaylistEntryKind
{
    NSArray *_kinds;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000023d1fa
+ (id)kindWithKinds:(id)arg1;	// IMP=0x000000000023cfd7
+ (id)identityKind;	// IMP=0x000000000023cfa5
- (void).cxx_destruct;	// IMP=0x000000000023cf92
@property(readonly, nonatomic) NSArray *kinds; // @synthesize kinds=_kinds;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000023cf04
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023ce19
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023cd9e
- (unsigned long long)hash;	// IMP=0x000000000023cd48
- (id)humanDescription;	// IMP=0x000000000023cca2
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;	// IMP=0x000000000024aaaa

@end

