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

@interface BMPhotosKnowledgeGraphEnrichmentEntity : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    unsigned int _category;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    double _score;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000039e2b
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000039b8f
- (void).cxx_destruct;	// IMP=0x000000000003a5aa
@property(readonly, nonatomic) unsigned int category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003a570
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003a4ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003a3a3
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000003a258
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000003a1bc
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000039fc2
- (id)encodeAsProto;	// IMP=0x0000000000039f72
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000039eac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039e33
- (id)json;	// IMP=0x0000000000039d56
- (id)jsonDict;	// IMP=0x0000000000039c3d
- (id)serialize;	// IMP=0x0000000000039c2b
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithName:(id)arg1 score:(double)arg2 language:(id)arg3 category:(unsigned int)arg4;	// IMP=0x00000000000399df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

