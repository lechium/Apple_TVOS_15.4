//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMDeviceMetadataEvent <BMStoreData, BMProtoBufWrapper>
{
    NSString *_name;	// 8 = 0x8
    NSString *_build;	// 16 = 0x10
    long long _platform;	// 24 = 0x18
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000000846e
- (void).cxx_destruct;	// IMP=0x0000000000008b32
@property(readonly, nonatomic) long long platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSString *build; // @synthesize build=_build;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008a25
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x00000000000088d2
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000008836
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000086d8
- (id)encodeAsProto;	// IMP=0x0000000000008688
- (id)json;	// IMP=0x00000000000085c8
- (id)jsonDict;	// IMP=0x00000000000084c9
- (id)serialize;	// IMP=0x00000000000084b7
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithName:(id)arg1 build:(id)arg2 platform:(long long)arg3;	// IMP=0x0000000000008392

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
