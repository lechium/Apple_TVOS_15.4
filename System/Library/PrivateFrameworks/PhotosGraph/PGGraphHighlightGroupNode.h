//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PGGraphHighlightGroupNodeCollection;

@interface PGGraphHighlightGroupNode
{
}

+ (id)momentInHighlight;	// IMP=0x0000000000145d4b
+ (id)typeOfHighlightGroup;	// IMP=0x0000000000145cf4
+ (id)highlightOfHighlightGroup;	// IMP=0x0000000000145c9d
+ (id)filterWithUUIDs:(id)arg1;	// IMP=0x0000000000145bc9
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;	// IMP=0x0000000000145b50
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;	// IMP=0x0000000000145ad7
+ (id)pathToTargetNodeDomain:(unsigned short)arg1;	// IMP=0x0000000000145a91
+ (id)pathFromTargetNodeDomain:(unsigned short)arg1;	// IMP=0x0000000000145a4b
+ (id)pathToMoment;	// IMP=0x0000000000145a3e
+ (id)pathFromMoment;	// IMP=0x0000000000145a31
+ (id)filter;	// IMP=0x00000000001459fc
- (unsigned long long)featureType;	// IMP=0x0000000000145925
- (void)enumerateMomentEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000145895
@property(readonly) NSArray *sortedHighlightNodes;
@property(readonly) NSArray *highlightNodes;
- (void)enumerateHighlightNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000145680
- (void)enumerateHighlightEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000014565f
- (_Bool)isPartOfAggregation;	// IMP=0x000000000014564d
- (_Bool)isPartOfShortTrip;	// IMP=0x000000000014563b
- (_Bool)isPartOfLongTrip;	// IMP=0x0000000000145629
- (_Bool)isPartOfTrip;	// IMP=0x0000000000145617
- (_Bool)isAggregation;	// IMP=0x000000000014555d
- (_Bool)isShortTrip;	// IMP=0x00000000001454a3
- (_Bool)isLongTrip;	// IMP=0x00000000001453e9
- (_Bool)isTrip;	// IMP=0x00000000001452b1
@property(readonly, nonatomic) PGGraphHighlightGroupNodeCollection *collection;
- (id)label;	// IMP=0x000000000014525c

@end

