//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMEventAppAssociating-Protocol.h>
#import <BiomeStreams/BMEventBinaryStepping-Protocol.h>
#import <BiomeStreams/BMEventTimeElapsing-Protocol.h>
#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSDateInterval, NSString;

@interface BMAppLaunchEvent <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper>
{
    NSString *_launchReason;	// 8 = 0x8
    unsigned long long _launchType;	// 16 = 0x10
    NSString *_parentBundleID;	// 24 = 0x18
    NSString *_extensionHostID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a4ed8
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000a491a
- (void).cxx_destruct;	// IMP=0x00000000000a5ddd
@property(copy, nonatomic) NSString *extensionHostID; // @synthesize extensionHostID=_extensionHostID;
@property(copy, nonatomic) NSString *parentBundleID; // @synthesize parentBundleID=_parentBundleID;
@property(nonatomic) unsigned long long launchType; // @synthesize launchType=_launchType;
@property(copy, nonatomic) NSString *launchReason; // @synthesize launchReason=_launchReason;
- (id)proto;	// IMP=0x00000000000a5b89
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000a5aed
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000a58a9
- (id)encodeAsProto;	// IMP=0x00000000000a5859
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a53b6
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a5120
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a4ee0
- (id)json;	// IMP=0x00000000000a4e18
- (id)jsonDict;	// IMP=0x00000000000a4ae8
- (id)serialize;	// IMP=0x00000000000a4ad6
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithStarting:(_Bool)arg1 bundleID:(id)arg2 absoluteTimeStamp:(double)arg3 duration:(double)arg4 launchReason:(id)arg5 launchType:(unsigned long long)arg6 parentBundleID:(id)arg7 extensionHostID:(id)arg8;	// IMP=0x00000000000a46f0
- (id)initWithStarting:(_Bool)arg1 bundleID:(id)arg2 absoluteTimeStamp:(double)arg3 launchReason:(id)arg4 launchType:(unsigned long long)arg5 parentBundleID:(id)arg6 extensionHostID:(id)arg7;	// IMP=0x00000000000a46d8
- (id)initWithStarting:(_Bool)arg1 bundleId:(id)arg2 absoluteTimeStamp:(double)arg3 launchReason:(id)arg4 launchType:(unsigned long long)arg5;	// IMP=0x00000000000a46b6

// Remaining properties
@property(nonatomic) double absoluteTimestamp; // @dynamic absoluteTimestamp;
@property(copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @dynamic dateInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic, getter=isStarting) _Bool starting; // @dynamic starting;
@property(readonly) Class superclass;

@end
