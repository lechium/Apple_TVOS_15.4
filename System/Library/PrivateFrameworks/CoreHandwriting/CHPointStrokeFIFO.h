//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHDrawing;

@interface CHPointStrokeFIFO
{
    CHDrawing *_strokes;	// 16 = 0x10
    CHDrawing *_drawing;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a6700
@property(retain, nonatomic) CHDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) CHDrawing *strokes; // @synthesize strokes=_strokes;
- (void)clear;	// IMP=0x00000000000a6630
- (void)flush;	// IMP=0x00000000000a65e0
- (void)addPoint: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000a6570
- (id)initWithFIFO:(id)arg1;	// IMP=0x00000000000a64b0

@end

