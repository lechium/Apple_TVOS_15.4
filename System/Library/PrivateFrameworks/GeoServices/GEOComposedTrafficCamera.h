//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOTrafficCamera, NSString;

@interface GEOComposedTrafficCamera <NSSecureCoding>
{
    GEOTrafficCamera *_trafficCamera;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003ee4de
- (void).cxx_destruct;	// IMP=0x00000000003ee615
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003ee598
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003ee4e6
@property(readonly, nonatomic) unsigned int countryCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) unsigned int cameraPriority;
@property(readonly, nonatomic) _Bool hasCameraPriority;
@property(readonly, nonatomic) double speedThreshold;
@property(readonly, nonatomic) _Bool hasSpeedThreshold;
@property(readonly, nonatomic) NSString *speedLimitText;
@property(readonly, nonatomic) _Bool hasSpeedLimitText;
@property(readonly, nonatomic) unsigned int highlightDistance;
@property(readonly, nonatomic) int type;
- (id)detailFormatForLocation:(id)arg1;	// IMP=0x00000000003ee249
- (id)titleFormatForLocation:(id)arg1;	// IMP=0x00000000003ee175
- (id)position;	// IMP=0x00000000003ee158
- (id)description;	// IMP=0x00000000003edd74
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 trafficCamera:(id)arg4 onRoute:(id)arg5;	// IMP=0x00000000003edc8c

@end

