//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class UIViewController;

@interface TVPMusicNowPlayingPresentationOperation : NSOperation
{
    _Bool _isExecuting;	// 8 = 0x8
    _Bool _isFinished;	// 9 = 0x9
    _Bool _animated;	// 10 = 0xa
    UIViewController *_presentingViewController;	// 16 = 0x10
    UIViewController *_presentedViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000205e0
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (_Bool)isFinished;	// IMP=0x000000000002059e
- (_Bool)isExecuting;	// IMP=0x000000000002058e
- (void)_finish;	// IMP=0x0000000000020507
- (void)start;	// IMP=0x00000000000202ee
- (id)initWithPresentingViewController:(id)arg1 presentedViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000020227

@end

