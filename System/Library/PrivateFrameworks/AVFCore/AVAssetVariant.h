//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/NSSecureCoding-Protocol.h>

@class AVAssetVariantAudioAttributes, AVAssetVariantVideoAttributes, FigAlternateObjC;

@interface AVAssetVariant : NSObject <NSSecureCoding>
{
    FigAlternateObjC *_figAlternateObjC;	// 8 = 0x8
    AVAssetVariantVideoAttributes *_videoAttributes;	// 16 = 0x10
    AVAssetVariantAudioAttributes *_audioAttributes;	// 24 = 0x18
    struct OpaqueFigSimpleMutex *_mutex;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011e2b7
- (void)dealloc;	// IMP=0x000000000011e25d
@property(readonly, nonatomic) AVAssetVariantAudioAttributes *audioAttributes;
@property(readonly, nonatomic) AVAssetVariantVideoAttributes *videoAttributes;
@property(readonly, nonatomic) double averageBitRate;
@property(readonly, nonatomic) double peakBitRate;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011e3aa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011e2bf
- (struct OpaqueFigAlternate *)_figAlternate;	// IMP=0x000000000011e591
- (id)initWithFigAlternate:(struct OpaqueFigAlternate *)arg1;	// IMP=0x000000000011e522

@end

