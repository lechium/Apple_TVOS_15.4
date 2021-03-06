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

@class NSString;

@interface BMParsecSearchTopic : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    float _score;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026331
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000260e4
- (void).cxx_destruct;	// IMP=0x00000000000268fa
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000268d3
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026854
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002677a
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x00000000000266e5
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000026649
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000264c8
- (id)encodeAsProto;	// IMP=0x0000000000026478
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000263b2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026339
- (id)json;	// IMP=0x000000000002625c
- (id)jsonDict;	// IMP=0x0000000000026192
- (id)serialize;	// IMP=0x0000000000026180
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithIdentifier:(id)arg1 score:(float)arg2;	// IMP=0x0000000000025fe4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

