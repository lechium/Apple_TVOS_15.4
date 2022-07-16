//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMScreenSharingEvent <BMStoreData, BMProtoBufWrapper>
{
    _Bool _isStart;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000b07f9
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b0b6a
- (id)proto;	// IMP=0x00000000000b0a9b
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000b09ff
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000b08a4
- (id)encodeAsProto;	// IMP=0x00000000000b0854
- (id)serialize;	// IMP=0x00000000000b0842
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithIsStart:(_Bool)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000000b06e6
- (id)initWithIsStart:(_Bool)arg1;	// IMP=0x00000000000b06d2
- (id)init;	// IMP=0x00000000000b06cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

