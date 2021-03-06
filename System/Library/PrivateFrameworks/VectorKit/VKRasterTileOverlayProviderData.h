//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VKRasterTileOverlayProviderDelegate;

@interface VKRasterTileOverlayProviderData : NSObject
{
    id <VKRasterTileOverlayProviderDelegate> _delegate;	// 8 = 0x8
    double _alpha;	// 16 = 0x10
    unsigned int _providerID;	// 24 = 0x18
    unsigned int _tileSize;	// 28 = 0x1c
    unsigned int _minimumZ;	// 32 = 0x20
    unsigned int _maximumZ;	// 36 = 0x24
    unsigned short _keyframesCount;	// 40 = 0x28
    double _duration;	// 48 = 0x30
    _Bool _crossfadeKeyframes;	// 56 = 0x38
    int _keyframeIndexOverride;	// 60 = 0x3c
    unsigned int _visibleKeyframeIndex;	// 64 = 0x40
    struct CGImage *_colorMap;	// 72 = 0x48
}

@property(nonatomic) struct CGImage *colorMap; // @synthesize colorMap=_colorMap;
@property(nonatomic) unsigned int visibleKeyframeIndex; // @synthesize visibleKeyframeIndex=_visibleKeyframeIndex;
@property(nonatomic) int keyframeIndexOverride; // @synthesize keyframeIndexOverride=_keyframeIndexOverride;
@property(readonly, nonatomic) _Bool crossfadeKeyframes; // @synthesize crossfadeKeyframes=_crossfadeKeyframes;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned short keyframesCount; // @synthesize keyframesCount=_keyframesCount;
@property(readonly, nonatomic) unsigned int maximumZ; // @synthesize maximumZ=_maximumZ;
@property(readonly, nonatomic) unsigned int minimumZ; // @synthesize minimumZ=_minimumZ;
@property(readonly, nonatomic) unsigned int tileSize; // @synthesize tileSize=_tileSize;
@property(readonly, nonatomic) unsigned int providerID; // @synthesize providerID=_providerID;
@property(nonatomic) id <VKRasterTileOverlayProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double alpha;
- (void)dealloc;	// IMP=0x00000000007e6fd7
- (id)initWithProviderID:(unsigned int)arg1 tileSize:(unsigned int)arg2 minimumZ:(unsigned int)arg3 maximumZ:(unsigned int)arg4 keyframesCount:(unsigned short)arg5 duration:(double)arg6 crossfadeKeyframes:(_Bool)arg7;	// IMP=0x00000000007e6f47

@end

