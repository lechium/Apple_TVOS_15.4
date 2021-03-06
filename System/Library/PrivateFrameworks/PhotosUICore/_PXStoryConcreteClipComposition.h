//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryClipComposition-Protocol.h>

@class NSString;

@interface _PXStoryConcreteClipComposition : NSObject <PXStoryClipComposition>
{
    unsigned int _edges[2];	// 8 = 0x8
    double _splitRatios[2];	// 16 = 0x10
    long long _dividerAxes[2];	// 32 = 0x20
    long long _clipAssetIndexes[3];	// 48 = 0x30
    long long _numberOfClips;	// 72 = 0x48
    long long _mainDividerAxis;	// 80 = 0x50
    NSString *_label;	// 88 = 0x58
    long long _numberOfAssets;	// 96 = 0x60
    double _primarySplitRatio;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001c96ad
@property(readonly, nonatomic) double primarySplitRatio; // @synthesize primarySplitRatio=_primarySplitRatio;
@property(readonly, nonatomic) long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) long long mainDividerAxis; // @synthesize mainDividerAxis=_mainDividerAxis;
@property(readonly, nonatomic) long long numberOfClips; // @synthesize numberOfClips=_numberOfClips;
@property(readonly, nonatomic) double mainDividerSplitRatio;
@property(readonly, nonatomic) const long long *clipAssetIndexes;
@property(readonly, nonatomic) _Bool clipFramesExtendToBounds;
- (void)getClipFrames:(out struct CGRect *)arg1 forContext:(const CDStruct_0b735c3a *)arg2;	// IMP=0x00000000001c94d9
@property(readonly, nonatomic) const long long *dividerAxes;
- (id)description;	// IMP=0x00000000001c942a
- (id)initWithNumberOfClips:(long long)arg1 primaryEdge:(unsigned int)arg2 splitRatio:(double)arg3 secondaryEdge:(unsigned int)arg4 splitRatio:(double)arg5 label:(id)arg6;	// IMP=0x00000000001c92b4
- (id)initWithSingleAssetSplitAxis:(long long)arg1 splitRatio:(double)arg2 label:(id)arg3;	// IMP=0x00000000001c920a
- (id)initWithTwoUpEdge:(unsigned int)arg1 splitRatio:(double)arg2 label:(id)arg3;	// IMP=0x00000000001c91e5
- (id)initWithOneUp;	// IMP=0x00000000001c91b9
- (id)init;	// IMP=0x00000000001c9190

@end

