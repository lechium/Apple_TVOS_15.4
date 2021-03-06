//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBLatLng-Protocol.h>

@class NSData, NSString;

@interface _SFPBLatLng : PBCodable <_SFPBLatLng, NSSecureCoding>
{
    double _lat;	// 8 = 0x8
    double _lng;	// 16 = 0x10
}

@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000067299
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000671db
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000067041
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000066d5a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000066ce5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000066cd8
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001a4c0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

