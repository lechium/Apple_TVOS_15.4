//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGGraphNode;

@interface PGPlaceMemoryTitleGenerator
{
    PGGraphNode *_placeNode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000164f6d
@property(retain, nonatomic) PGGraphNode *placeNode; // @synthesize placeNode=_placeNode;
- (id)_placeTitle;	// IMP=0x0000000000164ea6
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;	// IMP=0x0000000000164d16
- (id)initWithMomentNodes:(id)arg1 placeNode:(id)arg2 titleGenerationContext:(id)arg3;	// IMP=0x0000000000164c83

@end
