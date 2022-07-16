//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMMediaAction <BMStoreData>
{
    _Bool _hasAbsoluteTimestamp;	// 8 = 0x8
    _Bool _hasType;	// 9 = 0x9
    int _type;	// 12 = 0xc
    double _absoluteTimestamp;	// 16 = 0x10
    NSString *_mediaUUID;	// 24 = 0x18
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000017d8e
- (void).cxx_destruct;	// IMP=0x000000000001813a
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasType; // @synthesize hasType=_hasType;
@property(readonly, nonatomic) NSString *mediaUUID; // @synthesize mediaUUID=_mediaUUID;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(nonatomic) _Bool hasAbsoluteTimestamp; // @synthesize hasAbsoluteTimestamp=_hasAbsoluteTimestamp;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017e7e
- (id)serialize;	// IMP=0x0000000000017e18
@property(readonly, nonatomic) unsigned int dataVersion;
- (void)writeTo:(id)arg1;	// IMP=0x0000000000017cfc
- (id)initByReadFrom:(id)arg1;	// IMP=0x0000000000017a14
@property(readonly, copy) NSString *description;
- (id)initWithAbsoluteTimestamp:(double)arg1 mediaUUID:(id)arg2 type:(int)arg3;	// IMP=0x0000000000017824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
