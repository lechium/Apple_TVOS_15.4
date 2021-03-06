//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface _UICollectionViewCompositionalLayout
{
    long long _scrollDirection;	// 256 = 0x100
    NSArray *_boundarySupplementaryItems;	// 264 = 0x108
    NSArray *_supplementaryItems;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000000fbd265
@property(copy, nonatomic) NSArray *supplementaryItems; // @synthesize supplementaryItems=_supplementaryItems;
@property(copy, nonatomic) NSArray *boundarySupplementaryItems; // @synthesize boundarySupplementaryItems=_boundarySupplementaryItems;
@property(readonly, nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
- (id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2;	// IMP=0x0000000000fbd17f
- (id)initWithLayoutSectionProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000fbd0fe
- (id)initWithLayoutSectionProvider:(CDUnknownBlockType)arg1 scrollDirection:(long long)arg2;	// IMP=0x0000000000fbd06d
- (id)initWithLayoutSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;	// IMP=0x0000000000fbcef4
- (id)initWithLayoutSection:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000fbce23
- (id)initWithLayoutSection:(id)arg1;	// IMP=0x0000000000fbcd8e
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000fbcd0d
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;	// IMP=0x0000000000fbccde
- (id)initWithSection:(id)arg1;	// IMP=0x0000000000fbcc5d
- (id)initWithSection:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000fbcc2e

@end

