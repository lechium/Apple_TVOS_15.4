//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPAShortestEdgeImageSizePolicy
{
    double _shortestEdge;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x0000000000011ccb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011cab
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011c2c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011ba1
- (id)description;	// IMP=0x0000000000011b58
- (struct CGSize)transformSize:(struct CGSize)arg1;	// IMP=0x0000000000011af9
- (_Bool)isBestFitPolicy;	// IMP=0x0000000000011af1
- (id)initWithShortestEdge:(double)arg1;	// IMP=0x0000000000011a75

@end

