//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

__attribute__((visibility("hidden")))
@interface _UIDynamicCaretInput
{
    struct CGContext *_bitmapContext;	// 8 = 0x8
    long long _fadeCount;	// 16 = 0x10
    struct CGPoint _lastViewLoc;	// 24 = 0x18
    struct CGRect _inkedAreaOfBitmapContext;	// 40 = 0x28
    NSTimer *_fadeTimer;	// 72 = 0x48
    TIHandwritingStrokes *_accumulatedStrokes;	// 80 = 0x50
    UIDelayedAction *_committedAction;	// 88 = 0x58
    _UIDynamicCaretDot *_dotView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000e1850a
@property(retain, nonatomic) _UIDynamicCaretDot *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIDelayedAction *committedAction; // @synthesize committedAction=_committedAction;
@property(retain, nonatomic) TIHandwritingStrokes *accumulatedStrokes; // @synthesize accumulatedStrokes=_accumulatedStrokes;
@property(retain, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
- (void)cancelTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e18443
- (void)endTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e1834f
- (void)addTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e182a9
- (void)startTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e18114
- (void)addInkPoint:(struct CGPoint)arg1 fromLastPoint:(_Bool)arg2;	// IMP=0x0000000000e17f08
- (void)send;	// IMP=0x0000000000e17e48
- (void)clearAndNotify:(_Bool)arg1;	// IMP=0x0000000000e17d29
- (void)committedStrokes;	// IMP=0x0000000000e17cf6
- (void)log;	// IMP=0x0000000000e179c6
- (void)drawPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e177e1
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000e1774a
- (void)_fadeInk;	// IMP=0x0000000000e17675
- (void)clearFadeTimer;	// IMP=0x0000000000e1761b
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x0000000000e175be
- (double)inkWidth;	// IMP=0x0000000000e175b0
@property(readonly, nonatomic) _Bool isInking;
@property(readonly, nonatomic) _Bool hasInk;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000e17399
- (void)dealloc;	// IMP=0x0000000000e17358
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e17032

@end
