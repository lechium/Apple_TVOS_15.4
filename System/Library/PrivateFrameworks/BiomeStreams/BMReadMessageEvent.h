//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMReadMessageEvent <BMStoreData, BMProtoBufWrapper>
{
    NSString *_idsHandle;	// 8 = 0x8
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000001817a
- (void).cxx_destruct;	// IMP=0x000000000001852c
@property(copy, nonatomic) NSString *idsHandle; // @synthesize idsHandle=_idsHandle;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018478
- (id)proto;	// IMP=0x00000000000183f9
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000001835d
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000018278
- (id)encodeAsProto;	// IMP=0x0000000000018228
- (id)serialize;	// IMP=0x0000000000018216
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithIDSHandle:(id)arg1;	// IMP=0x000000000001814d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

