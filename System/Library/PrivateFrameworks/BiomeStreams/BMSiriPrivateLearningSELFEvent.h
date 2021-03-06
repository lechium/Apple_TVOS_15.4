//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/BMStreamValidating-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface BMSiriPrivateLearningSELFEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    NSString *_uniqueId;	// 8 = 0x8
    double _absoluteTimestamp;	// 16 = 0x10
    NSData *_eventData;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010e1c
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000010b94
- (void).cxx_destruct;	// IMP=0x000000000001160e
@property(readonly, copy, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000115dd
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011557
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001134e
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000001121f
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000011183
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000010fb3
- (id)encodeAsProto;	// IMP=0x0000000000010f63
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010e9d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010e24
- (id)json;	// IMP=0x0000000000010d47
- (id)jsonDict;	// IMP=0x0000000000010c42
- (id)serialize;	// IMP=0x0000000000010c30
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithUniqueId:(id)arg1 absoluteTimestamp:(double)arg2 eventData:(id)arg3;	// IMP=0x00000000000109f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

