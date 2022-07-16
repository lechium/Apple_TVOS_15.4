//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRoute, NSString;

@interface VKARWalkingContinueFeature
{
    struct GEOPolylineCoordinateRange _range;	// 24 = 0x18
    struct _retain_ptr<GEOComposedRoute *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        GEOComposedRoute *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _route;	// 40 = 0x28
    struct _retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _displayText;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x000000000047b059
- (void).cxx_destruct;	// IMP=0x000000000047b003
@property(readonly, nonatomic) struct GEOPolylineCoordinateRange range; // @synthesize range=_range;
- (id)description;	// IMP=0x000000000047af24
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047adc9
- (void)setDisplayText:(id)arg1;	// IMP=0x000000000047adb3
@property(readonly, nonatomic) NSString *displayText;
- (void)setRoute:(id)arg1;	// IMP=0x000000000047ad8b
@property(readonly, nonatomic) GEOComposedRoute *route;
- (id)initWithRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange)arg2 displayText:(id)arg3 continuePriority:(unsigned long long)arg4;	// IMP=0x000000000047ace0
- (id)initWithRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange)arg2 displayText:(id)arg3;	// IMP=0x000000000047acbd

@end
