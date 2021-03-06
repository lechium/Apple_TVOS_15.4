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

@interface BMPhotosKnowledgeGraphEnrichmentLocation : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    NSString *_street;	// 8 = 0x8
    NSString *_city;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSString *_country;	// 32 = 0x20
    NSData *_encodedLocation;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003abac
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000003a92f
- (void).cxx_destruct;	// IMP=0x000000000003b447
@property(readonly, nonatomic) NSData *encodedLocation; // @synthesize encodedLocation=_encodedLocation;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, nonatomic) NSString *street; // @synthesize street=_street;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003b403
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003b368
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b193
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000003b00f
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000003af73
- (id)initWithProto:(id)arg1;	// IMP=0x000000000003ad43
- (id)encodeAsProto;	// IMP=0x000000000003acf3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003ac2d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003abb4
- (id)json;	// IMP=0x000000000003aad7
- (id)jsonDict;	// IMP=0x000000000003a9dd
- (id)serialize;	// IMP=0x000000000003a9cb
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithStreet:(id)arg1 city:(id)arg2 state:(id)arg3 country:(id)arg4 encodedLocation:(id)arg5;	// IMP=0x000000000003a5d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

