//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBPIPContainerViewControllerLayout;

@interface PBPIPStartStopAnimator : NSObject
{
    unsigned long long _context;	// 8 = 0x8
    PBPIPContainerViewControllerLayout *_layout;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    struct CGSize _targetSize;	// 32 = 0x20
    struct CGRect;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000201800
@property(readonly, nonatomic) struct CGRect destinationFrame; // @synthesize destinationFrame=_destinationFrame;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) PBPIPContainerViewControllerLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
- (void)_performReducedMotionAnimation;	// IMP=0x0010000000200fe0
- (void)_performDefaultAnimation;	// IMP=0x0010000000200d60
- (void)startAnimation;	// IMP=0x0010000000200d00
- (id)initWithContext:(unsigned long long)arg1 layout:(id)arg2 targetSize:(struct CGSize)arg3 quadrant:(long long)arg4 pipInsets:(struct UIEdgeInsets)arg5;	// IMP=0x0010000000200a60

@end

