//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, UIColor;

@interface _UIHighlightView
{
    UIColor *_color;	// 8 = 0x8
    double _cornerRadius;	// 16 = 0x10
    struct CGRect _invertedHighlightClipRect;	// 24 = 0x18
    NSArray *_cornerRadii;	// 56 = 0x38
    NSMutableArray *_innerBounds;	// 64 = 0x40
    NSMutableArray *_innerQuads;	// 72 = 0x48
    _Bool _invertHighlight;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000069dc80
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x000000000069dc78
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000069d056
- (void)setInvertHighlight:(_Bool)arg1 clipRect:(struct CGRect)arg2;	// IMP=0x000000000069d02e
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000069cfdf
- (void)setQuads:(id)arg1 boundaryRect:(struct CGRect)arg2;	// IMP=0x000000000069c9b2
- (void)setFrames:(id)arg1 boundaryRect:(struct CGRect)arg2;	// IMP=0x000000000069c432
- (void)setCornerRadii:(id)arg1;	// IMP=0x000000000069c3e1
- (void)setCornerRadius:(double)arg1;	// IMP=0x000000000069c3cf
- (void)setColor:(id)arg1;	// IMP=0x000000000069c37e
- (void)cleanUp;	// IMP=0x000000000069c337
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000069c2bc

@end

