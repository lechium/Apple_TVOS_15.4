//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBStrokeView
{
    NSMutableArray *_points;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008dd8e2
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000008dd217
- (void)resetStrokePoints;	// IMP=0x00000000008dd1de
- (void)addStrokePoint:(struct CGPoint)arg1 withTimestamp:(double)arg2;	// IMP=0x00000000008dd155
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008dd097

@end

