//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFLatLng-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFLatLng : NSObject <SFLatLng, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int lat:1;
        unsigned int lng:1;
    } _has;	// 8 = 0x8
    double _lat;	// 16 = 0x10
    double _lng;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b1b26
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b1d65
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b1c16
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b1b64
- (_Bool)hasLng;	// IMP=0x00000000001b1b57
- (_Bool)hasLat;	// IMP=0x00000000001b1b3d
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001a4cb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

