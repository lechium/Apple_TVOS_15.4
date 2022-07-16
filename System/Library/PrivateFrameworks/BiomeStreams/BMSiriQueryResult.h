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

@interface BMSiriQueryResult : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    NSString *_qid;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    double _confidence;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005f7e
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000005cde
- (void).cxx_destruct;	// IMP=0x00000000000066e0
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *qid; // @synthesize qid=_qid;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000066af
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006630
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006491
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x0000000000006360
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000062c4
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000006115
- (id)encodeAsProto;	// IMP=0x00000000000060c5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005fff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005f86
- (id)json;	// IMP=0x0000000000005ea9
- (id)jsonDict;	// IMP=0x0000000000005d8c
- (id)serialize;	// IMP=0x0000000000005d7a
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithQID:(id)arg1 domain:(id)arg2 confidence:(double)arg3;	// IMP=0x0000000000005bb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
