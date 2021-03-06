//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEORouteHypothesisRequest;

@interface GEORouteHypothesisKey : NSObject <NSCopying, NSSecureCoding>
{
    GEORouteHypothesisRequest *_request;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000001008764
- (void).cxx_destruct;	// IMP=0x0000000001008776
@property(readonly, nonatomic) GEORouteHypothesisRequest *request; // @synthesize request=_request;
- (id)description;	// IMP=0x0000000001008509
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000010084e6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001008426
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000100841b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001008241
- (_Bool)_isEqual:(id)arg1;	// IMP=0x0000000001007e5b
- (unsigned long long)hash;	// IMP=0x0000000001007d23
- (id)initWithRouteHypothesisRequest:(id)arg1;	// IMP=0x0000000001007ca4

@end

