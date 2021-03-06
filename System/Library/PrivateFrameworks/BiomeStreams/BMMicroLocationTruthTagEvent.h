//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString, NSUUID;

@interface BMMicroLocationTruthTagEvent : NSObject <BMStoreData, BMProtoBufWrapper>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSString *_clientBundleIdentifier;	// 16 = 0x10
    NSUUID *_truthTagIdentifier;	// 24 = 0x18
    NSUUID *_recordingRequestIdentifier;	// 32 = 0x20
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000001c121
- (void).cxx_destruct;	// IMP=0x000000000001c8af
@property(readonly, copy, nonatomic) NSUUID *recordingRequestIdentifier; // @synthesize recordingRequestIdentifier=_recordingRequestIdentifier;
@property(readonly, copy, nonatomic) NSUUID *truthTagIdentifier; // @synthesize truthTagIdentifier=_truthTagIdentifier;
@property(readonly, copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c5f5
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000001c492
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000001c3f6
- (id)initWithProto:(id)arg1;	// IMP=0x000000000001c21f
- (id)encodeAsProto;	// IMP=0x000000000001c1cf
- (id)serialize;	// IMP=0x000000000001c1bd
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithAbsoluteTimestamp:(double)arg1 clientBundleIdentifier:(id)arg2 truthTagIdentifier:(id)arg3 recordingRequestIdentifier:(id)arg4;	// IMP=0x000000000001c021

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

