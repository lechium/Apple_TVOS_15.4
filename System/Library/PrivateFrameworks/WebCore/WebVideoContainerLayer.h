//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class AVPlayerLayer;

__attribute__((visibility("hidden")))
@interface WebVideoContainerLayer : CALayer
{
    struct RetainPtr<AVPlayerLayer> _playerLayer;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000a37350
- (void).cxx_destruct;	// IMP=0x0000000000a37320
- (void)setPosition:(struct CGPoint)arg1;	// IMP=0x0000000000a370d0
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000a36f30
@property(retain, nonatomic) AVPlayerLayer *playerLayer;

@end
