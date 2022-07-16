//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCControllerButtonInput, GCControllerDirectionPad, NSString;

@interface GCControllerTouchpad
{
    float _touchpadRelativeWindowSize;	// 8 = 0x8
    float _touchpadRelativeOriginBufferSize;	// 12 = 0xc
    long long _touchState;	// 16 = 0x10
    _Bool _leftBufferZone;	// 24 = 0x18
    _Bool _beganTouchOutsideBounds;	// 25 = 0x19
    float _previousButtonState;	// 28 = 0x1c
    struct CGPoint _absoluteWindowLocation;	// 32 = 0x20
    struct CGPoint _absolutePosition;	// 48 = 0x30
    struct CGPoint _absoluteTouchDownPosition;	// 64 = 0x40
    struct CGPoint _relativePosition;	// 80 = 0x50
    NSString *_descriptionName;	// 96 = 0x60
    _Bool _reportsAbsoluteTouchSurfaceValues;	// 104 = 0x68
    GCControllerButtonInput *_button;	// 112 = 0x70
    CDUnknownBlockType _touchDown;	// 120 = 0x78
    CDUnknownBlockType _touchMoved;	// 128 = 0x80
    CDUnknownBlockType _touchUp;	// 136 = 0x88
    GCControllerDirectionPad *_touchSurface;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000002ccfd
@property(nonatomic) _Bool reportsAbsoluteTouchSurfaceValues; // @synthesize reportsAbsoluteTouchSurfaceValues=_reportsAbsoluteTouchSurfaceValues;
@property(readonly, nonatomic) long long touchState; // @synthesize touchState=_touchState;
@property(retain, nonatomic) GCControllerDirectionPad *touchSurface; // @synthesize touchSurface=_touchSurface;
@property(copy, nonatomic) CDUnknownBlockType touchUp; // @synthesize touchUp=_touchUp;
@property(copy, nonatomic) CDUnknownBlockType touchMoved; // @synthesize touchMoved=_touchMoved;
@property(copy, nonatomic) CDUnknownBlockType touchDown; // @synthesize touchDown=_touchDown;
@property(readonly, nonatomic) GCControllerButtonInput *button; // @synthesize button=_button;
- (void)setValueForXAxis:(float)arg1 yAxis:(float)arg2 touchDown:(_Bool)arg3 buttonValue:(float)arg4;	// IMP=0x000000000002c9e4
- (id)description;	// IMP=0x000000000002c8c7
- (struct CGPoint)clampPoint:(struct CGPoint)arg1 toLength:(double)arg2;	// IMP=0x000000000002c86e
- (struct CGPoint)mulCGPoint:(struct CGPoint)arg1 byScalar:(double)arg2;	// IMP=0x000000000002c860
- (struct CGPoint)subCGPoint:(struct CGPoint)arg1 fromPoint:(struct CGPoint)arg2;	// IMP=0x000000000002c84a
- (struct CGPoint)addCGPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x000000000002c83c
- (struct CGPoint)scaleCGPoint:(struct CGPoint)arg1 toLength:(double)arg2;	// IMP=0x000000000002c80f
- (struct CGPoint)normalizeCGPoint:(struct CGPoint)arg1;	// IMP=0x000000000002c7cd
- (double)distanceBetweenCGPoint:(struct CGPoint)arg1 andCGPoint:(struct CGPoint)arg2;	// IMP=0x000000000002c7ac
- (double)magnitudeForCGPoint:(struct CGPoint)arg1;	// IMP=0x000000000002c793
- (_Bool)setDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(_Bool)arg3 queue:(id)arg4;	// IMP=0x000000000002c5dc
- (_Bool)determineTouchStateWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(_Bool)arg3;	// IMP=0x000000000002c550
- (void)reportDigitizerChange:(id)arg1;	// IMP=0x000000000002c0c3
- (_Bool)calculateRelativePositionWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(_Bool)arg3;	// IMP=0x000000000002bdc1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002bd3d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002bc9a
- (id)initWithDescriptionName:(id)arg1;	// IMP=0x000000000002ba8c

@end

