//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface _UIContentViewAnimationStateUpdatingLayer : CALayer
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    double _progress;	// 16 = 0x10
}

+ (_Bool)needsDisplayForKey:(id)arg1;	// IMP=0x0000000000f92f7b
+ (id)layerForView:(id)arg1 withUpdateHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000f927cd
- (void).cxx_destruct;	// IMP=0x0000000000f930e5
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)animationCompletedWithPosition:(long long)arg1;	// IMP=0x0000000000f9305e
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x0000000000f92fed
- (id)initWithLayer:(id)arg1;	// IMP=0x0000000000f92e46

@end

