//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMScreenRecordingEvent <BMStoreData, BMProtoBufWrapper>
{
    _Bool _isStart;	// 8 = 0x8
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000008c116
@property(readonly, nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008c4df
- (id)proto;	// IMP=0x000000000008c49e
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000008c402
- (id)initWithProto:(id)arg1;	// IMP=0x000000000008c337
- (id)encodeAsProto;	// IMP=0x000000000008c2e7
- (id)json;	// IMP=0x000000000008c227
- (id)jsonDict;	// IMP=0x000000000008c171
- (id)serialize;	// IMP=0x000000000008c15f
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithIsStart:(_Bool)arg1;	// IMP=0x000000000008c070
- (id)init;	// IMP=0x000000000008c06a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

