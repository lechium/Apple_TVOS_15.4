//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOPBTransitAccessPoint, GEOTransitEnterExitInfo, GEOTransitTransferInfo, NSString;

@interface GEOComposedTransitStationRouteStep
{
    unsigned int _expectedTime;	// 104 = 0x68
    _Bool _isArrivalUncertain;	// 108 = 0x6c
    GEOTransitTransferInfo *_transitTransfer;	// 112 = 0x70
    GEOTransitEnterExitInfo *_enterExitInfo;	// 120 = 0x78
    GEOPBTransitAccessPoint *_accessPoint;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000010c0c2b
- (void).cxx_destruct;	// IMP=0x00000000010c0ee5
@property(readonly, nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(readonly, nonatomic) _Bool isArrivalUncertain; // @synthesize isArrivalUncertain=_isArrivalUncertain;
@property(readonly, nonatomic) GEOTransitTransferInfo *transitTransfer; // @synthesize transitTransfer=_transitTransfer;
@property(readonly, nonatomic) GEOPBTransitAccessPoint *accessPoint; // @synthesize accessPoint=_accessPoint;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000010c0daa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000010c0c33
- (CDStruct_39925896)endGeoCoordinate;	// IMP=0x00000000010c09f5
- (CDStruct_39925896)startGeoCoordinate;	// IMP=0x00000000010c07fe
@property(readonly, nonatomic) _Bool hasDisplayStop;
@property(readonly, nonatomic) _Bool displayStop;
@property(readonly, nonatomic) NSString *exitSign;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;	// IMP=0x00000000010c0564

@end

