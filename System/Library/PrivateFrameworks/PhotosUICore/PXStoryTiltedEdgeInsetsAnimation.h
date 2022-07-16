//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXStoryTiltedEdgeInsetsAnimation
{
    CDStruct_e307eb02 _sourceEdgeInsets;	// 8 = 0x8
    CDStruct_e307eb02 _targetEdgeInsets;	// 104 = 0x68
    CDStruct_e307eb02 _currentEdgeInsets;	// 200 = 0xc8
}

@property(readonly, nonatomic) CDStruct_e307eb02 currentEdgeInsets; // @synthesize currentEdgeInsets=_currentEdgeInsets;
@property(readonly, nonatomic) CDStruct_e307eb02 targetEdgeInsets; // @synthesize targetEdgeInsets=_targetEdgeInsets;
@property(readonly, nonatomic) CDStruct_e307eb02 sourceEdgeInsets; // @synthesize sourceEdgeInsets=_sourceEdgeInsets;
- (void)setCurrentEdgeInsets:(CDStruct_e307eb02)arg1;	// IMP=0x00000000003e3c3c
- (void)updateCurrentValueWithProgress:(double)arg1;	// IMP=0x00000000003e3ae3
- (id)initWithSourceEdgeInsets:(CDStruct_e307eb02)arg1 targetEdgeInsets:(CDStruct_e307eb02)arg2 duration:(CDStruct_1b6d18a9)arg3 curveInfo:(CDStruct_6f12f40c)arg4;	// IMP=0x00000000003e3acc
- (id)initWithIdentifier:(id)arg1 sourceEdgeInsets:(CDStruct_e307eb02)arg2 targetEdgeInsets:(CDStruct_e307eb02)arg3 duration:(CDStruct_1b6d18a9)arg4 curveInfo:(CDStruct_6f12f40c)arg5;	// IMP=0x00000000003e39b1
- (id)initWithIdentifier:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 curveInfo:(CDStruct_6f12f40c)arg3;	// IMP=0x00000000003e392e

@end

