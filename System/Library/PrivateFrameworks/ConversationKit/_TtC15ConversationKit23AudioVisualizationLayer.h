//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit23AudioVisualizationLayer : CALayer
{
    MISSING_TYPE *isAnimating;	// 8 = 0x8
    MISSING_TYPE *scale;	// 12 = 0xc
    MISSING_TYPE *scaleBuffer;	// 16 = 0x10
    MISSING_TYPE *rings;	// 40 = 0x28
    MISSING_TYPE *color;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001faf8
- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000020231
@property(nonatomic) struct CGRect bounds;
- (void)dealloc;	// IMP=0x000000000001fadb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001fa9b
- (id)initWithLayer:(id)arg1;	// IMP=0x000000000001f9c1
- (id)init;	// IMP=0x000000000001f556

@end

