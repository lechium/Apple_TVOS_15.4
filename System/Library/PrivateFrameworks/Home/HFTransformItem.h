//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSCopying-Protocol.h>

@class HFItem;

@interface HFTransformItem <NSCopying>
{
    HFItem *_sourceItem;	// 8 = 0x8
    CDUnknownBlockType _optionsTransformBlock;	// 16 = 0x10
    CDUnknownBlockType _resultsTransformBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000219a6e
@property(copy, nonatomic) CDUnknownBlockType resultsTransformBlock; // @synthesize resultsTransformBlock=_resultsTransformBlock;
@property(copy, nonatomic) CDUnknownBlockType optionsTransformBlock; // @synthesize optionsTransformBlock=_optionsTransformBlock;
@property(retain, nonatomic) HFItem *sourceItem; // @synthesize sourceItem=_sourceItem;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x0000000000219593
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002194c2
- (id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(CDUnknownBlockType)arg2 resultsTransformBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002193e0
- (id)initWithSourceItem:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002193c9
- (id)initWithSourceItem:(id)arg1 resultKeyExclusionFilter:(id)arg2;	// IMP=0x00000000002191d3
- (id)initWithSourceItem:(id)arg1 resultKeyFilter:(id)arg2;	// IMP=0x0000000000218f64
- (id)init;	// IMP=0x0000000000218eaf

@end
