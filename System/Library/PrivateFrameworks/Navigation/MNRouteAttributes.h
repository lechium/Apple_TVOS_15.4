//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEORouteAttributes.h>

#import <Navigation/NSCopying-Protocol.h>
#import <Navigation/NSSecureCoding-Protocol.h>
#import <Navigation/VGVirtualGarageObserver-Protocol.h>

@class NSArray, NSError, NSObject, NSString, geo_isolater;

@interface MNRouteAttributes : GEORouteAttributes <VGVirtualGarageObserver, NSSecureCoding, NSCopying>
{
    NSArray *_latLngs;	// 8 = 0x8
    _Bool _forceUpdate;	// 16 = 0x10
    _Bool _hasOpenedVirtualGarageConnection;	// 17 = 0x11
    _Bool _hasResolvedVehicle;	// 18 = 0x12
    NSObject *_vehicle;	// 24 = 0x18
    NSError *_vgError;	// 32 = 0x20
    NSObject *_garage;	// 40 = 0x28
    geo_isolater *_vehicleIsolator;	// 48 = 0x30
    _Bool _hasResolvedRules;	// 56 = 0x38
    NSArray *_lprRules;	// 64 = 0x40
    NSError *_lprError;	// 72 = 0x48
}

+ (void)_loadLPRRulesForWaypoints:(id)arg1 forceUpdate:(_Bool)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a0448
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009fb9c
- (void).cxx_destruct;	// IMP=0x00000000000a142c
@property(nonatomic) _Bool hasResolvedRules; // @synthesize hasResolvedRules=_hasResolvedRules;
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x00000000000a133b
- (void)buildRouteAttributesForETAUpdateRequest:(id)arg1 queue:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a110b
- (void)buildRouteAttributes:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a0b56
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x00000000000a0b0c
- (void)_populateRouteAttributes:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a0909
- (void)_loadRulesIfNecessary:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a08f7
- (void)_resolveSelectedVehicle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a0225
@property(nonatomic) _Bool hasResolvedVehicle;
- (id)vehicle;	// IMP=0x000000000009ff60
- (void)dealloc;	// IMP=0x000000000009ff31
- (id)initWithAttributes:(id)arg1 latLngs:(id)arg2;	// IMP=0x000000000009fe6d
- (id)initWithAttributes:(id)arg1 waypoints:(id)arg2;	// IMP=0x000000000009fc5e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009fba4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009fb1f
- (void)_commonInit;	// IMP=0x000000000009faef
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009f9f0
- (id)init;	// IMP=0x000000000009f9c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

