//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Koa/KVJSONDecodable-Protocol.h>
#import <Koa/KVJSONEncodable-Protocol.h>

@class NSData, NSString;

@interface KVProfileInfo : NSObject <KVJSONEncodable, KVJSONDecodable>
{
    const struct ProfileInfo *_profileInfo;	// 8 = 0x8
    NSData *_buffer;	// 16 = 0x10
}

+ (id)capturedWithDatasetCount:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000003754
+ (id)syntheticWithDatasetCount:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000003707
- (void).cxx_destruct;	// IMP=0x00000000000029b0
@property(readonly, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToProfileInfo:(id)arg1;	// IMP=0x0000000000002925
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000028a9
- (id)initFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002702
- (id)JSONWithIndent:(unsigned char)arg1;	// IMP=0x000000000000247c
@property(readonly, copy) NSString *description;
- (id)buildVersion;	// IMP=0x00000000000023e1
- (id)deviceType;	// IMP=0x000000000000235a
- (id)capturedTime;	// IMP=0x00000000000022d9
- (unsigned int)datasetCount;	// IMP=0x00000000000022ad
- (id)initWithBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001de5
- (id)initWithDatasetCount:(unsigned int)arg1 capturedTime:(id)arg2 deviceType:(id)arg3 buildVersion:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000001ac4
- (id)init;	// IMP=0x0000000000001a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

