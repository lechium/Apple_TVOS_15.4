//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMIdentifiableContentEvent-Protocol.h>
#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface BMSiriQueryEvent : NSObject <BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper>
{
    NSString *_uniqueId;	// 8 = 0x8
    double _absoluteTimestamp;	// 16 = 0x10
    NSString *_query;	// 24 = 0x18
    NSArray *_results;	// 32 = 0x20
    NSString *_contentProtection;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006c84
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000000698b
- (void).cxx_destruct;	// IMP=0x0000000000007646
@property(readonly, nonatomic) NSString *contentProtection; // @synthesize contentProtection=_contentProtection;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007601
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007568
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007342
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000000715b
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000070bf
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000006e1b
- (id)encodeAsProto;	// IMP=0x0000000000006dcb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006d05
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006c8c
- (id)json;	// IMP=0x0000000000006baf
- (id)jsonDict;	// IMP=0x0000000000006a39
- (id)serialize;	// IMP=0x0000000000006a27
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithUniqueId:(id)arg1 absoluteTimestamp:(double)arg2 query:(id)arg3 results:(id)arg4;	// IMP=0x0000000000006968
- (id)initWithUniqueId:(id)arg1 absoluteTimestamp:(double)arg2 query:(id)arg3 results:(id)arg4 contentProtection:(id)arg5;	// IMP=0x000000000000670e
- (id)init;	// IMP=0x0000000000006708

// Remaining properties
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *domainId;
@property(readonly) Class superclass;

@end
