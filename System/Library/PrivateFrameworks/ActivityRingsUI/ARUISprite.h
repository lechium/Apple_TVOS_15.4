//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/NSCopying-Protocol.h>

@class MISSING_TYPE;

@interface ARUISprite : NSObject <NSCopying>
{
    float _size;	// 8 = 0x8
    float _opacity;	// 12 = 0xc
    MISSING_TYPE *_translation;	// 16 = 0x10
    unsigned long long _frameCount;	// 24 = 0x18
    unsigned long long _currentFrameIndex;	// 32 = 0x20
    MISSING_TYPE *_firstFrameOrigin;	// 40 = 0x28
    MISSING_TYPE *_frameSize;	// 48 = 0x30
    unsigned long long _frameColumns;	// 56 = 0x38
}

+ (id)randomSprite;	// IMP=0x000000000001313d
@property(readonly, nonatomic) unsigned long long frameColumns; // @synthesize frameColumns=_frameColumns;
@property(readonly, nonatomic) MISSING_TYPE *frameSize; // @synthesize frameSize=_frameSize;
@property(readonly, nonatomic) MISSING_TYPE *firstFrameOrigin; // @synthesize firstFrameOrigin=_firstFrameOrigin;
@property(nonatomic) unsigned long long currentFrameIndex; // @synthesize currentFrameIndex=_currentFrameIndex;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) MISSING_TYPE *translation; // @synthesize translation=_translation;
@property(nonatomic) float size; // @synthesize size=_size;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013105
@property(readonly, nonatomic) MISSING_TYPE *textureRect;
- (id)description;	// IMP=0x0000000000012fd9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012e2b
- (unsigned long long)hash;	// IMP=0x0000000000012d4d
- (id)initWithSprite:(id)arg1;	// IMP=0x0000000000012c65
- (id)initWithFrameCount:(unsigned long long)arg1 frameColumns:(unsigned long long)arg2 firstFrameOrigin:frameSize: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000012be2

@end
