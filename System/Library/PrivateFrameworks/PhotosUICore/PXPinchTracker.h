//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutablePinchTracker-Protocol.h>

@class NSString, PXChangeDirectionNumberFilter, PXNumberFilter;

@interface PXPinchTracker <PXMutablePinchTracker>
{
    struct {
        _Bool initialValues;
        _Bool geometry;
    } _needsUpdateFlags;	// 8 = 0x8
    _Bool _didSetInitialValues;	// 10 = 0xa
    struct CGPoint _initialCenter;	// 16 = 0x10
    struct CGSize _initialSize;	// 32 = 0x20
    struct CGAffineTransform _initialTransform;	// 48 = 0x30
    struct CGAffineTransform _initialTransformInverse;	// 96 = 0x60
    struct CGPoint _initialPinchCenter;	// 144 = 0x90
    double _initialPinchDistance;	// 160 = 0xa0
    double _initialPinchAngle;	// 168 = 0xa8
    struct CGPoint _initialPinchOrigin;	// 176 = 0xb0
    PXNumberFilter *_pinchRotationFilter;	// 192 = 0xc0
    PXNumberFilter *_horizontalVelocityFilter;	// 200 = 0xc8
    PXNumberFilter *_verticalVelocityFilter;	// 208 = 0xd0
    PXNumberFilter *_scaleVelocityFilter;	// 216 = 0xd8
    PXNumberFilter *_rotationalVelocityFilter;	// 224 = 0xe0
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;	// 232 = 0xe8
    _Bool _shouldResize;	// 240 = 0xf0
    double _time;	// 248 = 0xf8
    double _scale;	// 256 = 0x100
    long long _scaleDirection;	// 264 = 0x108
    double _rotationHysteris;	// 272 = 0x110
    double _scaleHysteresis;	// 280 = 0x118
    struct CGPoint _pinchLocation1;	// 288 = 0x120
    struct CGPoint _pinchLocation2;	// 304 = 0x130
    struct CGPoint _center;	// 320 = 0x140
    struct CGSize _size;	// 336 = 0x150
    struct PXDisplayVelocity _velocity;	// 352 = 0x160
    struct CGAffineTransform _transform;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x00000000007c13d4
@property(readonly, nonatomic) _Bool shouldResize; // @synthesize shouldResize=_shouldResize;
@property(readonly, nonatomic) double scaleHysteresis; // @synthesize scaleHysteresis=_scaleHysteresis;
@property(readonly, nonatomic) double rotationHysteris; // @synthesize rotationHysteris=_rotationHysteris;
@property(nonatomic, setter=_setScaleDirection:) long long scaleDirection; // @synthesize scaleDirection=_scaleDirection;
@property(nonatomic, setter=_setScale:) double scale; // @synthesize scale=_scale;
@property(nonatomic, setter=_setVelocity:) struct PXDisplayVelocity velocity; // @synthesize velocity=_velocity;
@property(nonatomic, setter=_setTransform:) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic, setter=_setSize:) struct CGSize size; // @synthesize size=_size;
@property(nonatomic, setter=_setCenter:) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) struct CGPoint pinchLocation2; // @synthesize pinchLocation2=_pinchLocation2;
@property(nonatomic) struct CGPoint pinchLocation1; // @synthesize pinchLocation1=_pinchLocation1;
- (void)_updateGeometryIfNeeded;	// IMP=0x00000000007c07f5
- (void)_invalidateGeometry;	// IMP=0x00000000007c07d7
- (void)_updateInitialValuesIfNeeded;	// IMP=0x00000000007c05ad
- (void)_invalidateInitialValues;	// IMP=0x00000000007c0590
- (void)_updateIfNeeded;	// IMP=0x00000000007c04ce
- (void)_setNeedsUpdate;	// IMP=0x00000000007c04ba
- (_Bool)_needsUpdate;	// IMP=0x00000000007c049d
- (void)didPerformChanges;	// IMP=0x00000000007c036e
- (id)mutableChangeObject;	// IMP=0x00000000007c0365
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000007c0336
- (void)_transformPinchLocation1:(struct CGPoint)arg1 location2:(struct CGPoint)arg2 intoCenter:(struct CGPoint *)arg3 distance:(double *)arg4 angle:(double *)arg5;	// IMP=0x00000000007c0285
- (id)initWithCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 transform:(struct CGAffineTransform)arg3;	// IMP=0x00000000007bfed7
- (id)init;	// IMP=0x00000000007bfe7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

