//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, NSString;

@interface VKRouteEtaDescription : NSObject
{
    struct _retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _etaText;	// 8 = 0x8
    unsigned char _glyphType;	// 32 = 0x20
    GEOFeatureStyleAttributes *_styleAttributes;	// 40 = 0x28
    long long _routeEtaType;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x000000000017c70a
- (void).cxx_destruct;	// IMP=0x000000000017c6c8
@property(readonly, nonatomic) long long routeEtaType; // @synthesize routeEtaType=_routeEtaType;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(readonly, nonatomic) unsigned char glyphType; // @synthesize glyphType=_glyphType;
- (unsigned long long)hash;	// IMP=0x000000000017c61d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017c454
@property(readonly, nonatomic) NSString *etaText;
- (void)dealloc;	// IMP=0x000000000017c40f
- (id)initWithEtaText:(id)arg1 styleAttributes:(id)arg2 routeEtaType:(long long)arg3;	// IMP=0x000000000017c34e
- (id)initWithEtaText:(id)arg1 etaAdvisoryStyleAttributes:(id)arg2 routeEtaType:(long long)arg3;	// IMP=0x000000000017c2e3
- (id)initWithEtaText:(id)arg1 etaAdvisoryStyleAttributes:(id)arg2;	// IMP=0x000000000017c284
- (id)initWithEtaText:(id)arg1;	// IMP=0x000000000017c26d
- (id)initWithEtaText:(id)arg1 glyphType:(unsigned char)arg2;	// IMP=0x000000000017c1ec

@end
