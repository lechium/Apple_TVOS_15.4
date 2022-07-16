//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOComposedWaypoint, GEOMapServiceTraits, GEORouteAttributes, GEORouteHypothesis, GEORouteHypothesisMonitor, NSDate;

@interface GEORouteHypothesisValue : NSObject <NSSecureCoding>
{
    GEORouteHypothesisMonitor *_monitor;	// 8 = 0x8
    GEORouteHypothesis *_currentHypothesis;	// 16 = 0x10
    double _updatedTimeStamp;	// 24 = 0x18
    _Bool _prediction;	// 32 = 0x20
    GEOComposedWaypoint *_origin;	// 40 = 0x28
    GEOComposedWaypoint *_destination;	// 48 = 0x30
    int _transportType;	// 56 = 0x38
    GEORouteAttributes *_routeAttributes;	// 64 = 0x40
    NSDate *_arrivalDate;	// 72 = 0x48
    NSDate *_expirationDate;	// 80 = 0x50
    GEOMapServiceTraits *_traits;	// 88 = 0x58
    double _valueRefreshTimeStamp;	// 96 = 0x60
    long long _rowId;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000001009700
- (void).cxx_destruct;	// IMP=0x00000000010097ca
@property(nonatomic) long long rowId; // @synthesize rowId=_rowId;
@property(nonatomic) double valueRefreshTimeStamp; // @synthesize valueRefreshTimeStamp=_valueRefreshTimeStamp;
@property(copy, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property(nonatomic) double updatedTimeStamp; // @synthesize updatedTimeStamp=_updatedTimeStamp;
@property(nonatomic) _Bool prediction; // @synthesize prediction=_prediction;
@property(retain, nonatomic) GEORouteHypothesis *currentHypothesis; // @synthesize currentHypothesis=_currentHypothesis;
@property(readonly, nonatomic) GEORouteHypothesisMonitor *monitor; // @synthesize monitor=_monitor;
- (id)description;	// IMP=0x000000000100941f
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
- (_Bool)canBePersistedToDisk;	// IMP=0x000000000100915a
@property(readonly, nonatomic) _Bool isStaleToPurgeFromDisk;
@property(readonly, nonatomic) _Bool isStaleToRefresh;
- (_Bool)aggresiveArrivalIsAfterExpiration;	// IMP=0x0000000001008e31
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001008ccc
- (void)commonInit;	// IMP=0x0000000001008cbe
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000010089c8
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 expirationDate:(id)arg4 traceName:(id)arg5 traits:(id)arg6 routeAttributes:(id)arg7 clientInfo:(id)arg8;	// IMP=0x0000000001008786

@end

