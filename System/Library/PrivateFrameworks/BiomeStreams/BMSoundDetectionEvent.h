//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMSoundDetectionEvent <BMStoreData, BMProtoBufWrapper>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000086da4
- (void).cxx_destruct;	// IMP=0x00000000000870a4
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000086e86
@property(readonly) unsigned long long hash;
- (id)serialize;	// IMP=0x0000000000086ded
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)proto;	// IMP=0x0000000000086d1a
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000086bf7
- (id)encodeAsProto;	// IMP=0x0000000000086ba7
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000086b0b
- (id)initWithAbsoluteTimestamp:(double)arg1 type:(id)arg2 customName:(id)arg3;	// IMP=0x0000000000086a7b
- (id)init;	// IMP=0x0000000000086a75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

