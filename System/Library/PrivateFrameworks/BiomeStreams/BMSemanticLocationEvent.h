//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMEventBinaryStepping-Protocol.h>
#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMSemanticLocationEvent <BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper>
{
    _Bool _starting;	// 8 = 0x8
    unsigned long long _userSpecificPlaceType;	// 16 = 0x10
    unsigned long long _placeType;	// 24 = 0x18
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000b1775
@property(nonatomic, getter=isStarting) _Bool starting; // @synthesize starting=_starting;
@property(readonly, nonatomic) unsigned long long placeType; // @synthesize placeType=_placeType;
@property(readonly, nonatomic) unsigned long long userSpecificPlaceType; // @synthesize userSpecificPlaceType=_userSpecificPlaceType;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b1c9c
- (id)proto;	// IMP=0x00000000000b1ac1
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000b1a25
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000b1820
- (id)encodeAsProto;	// IMP=0x00000000000b17d0
- (id)serialize;	// IMP=0x00000000000b17be
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithUserSpecificPlaceType:(unsigned long long)arg1 placeType:(unsigned long long)arg2 starting:(_Bool)arg3;	// IMP=0x00000000000b1619
- (id)initWithUserSpecificPlaceType:(unsigned long long)arg1 placeType:(unsigned long long)arg2 loiIdentifier:(id)arg3 starting:(_Bool)arg4;	// IMP=0x00000000000b1604

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

