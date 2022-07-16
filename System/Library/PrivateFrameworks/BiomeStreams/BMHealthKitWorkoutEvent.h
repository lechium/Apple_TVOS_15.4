//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMHealthKitWorkoutEvent <BMStoreData, BMProtoBufWrapper>
{
    _Bool _isFirstPartyDonation;	// 8 = 0x8
    _Bool _isIndoor;	// 9 = 0x9
    _Bool _isUpdate;	// 10 = 0xa
    NSString *_activityType;	// 16 = 0x10
    NSString *_activityUUID;	// 24 = 0x18
    unsigned long long _eventType;	// 32 = 0x20
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000009e323
- (void).cxx_destruct;	// IMP=0x000000000009e9f7
@property(readonly, nonatomic) _Bool isUpdate; // @synthesize isUpdate=_isUpdate;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) _Bool isIndoor; // @synthesize isIndoor=_isIndoor;
@property(readonly, nonatomic) _Bool isFirstPartyDonation; // @synthesize isFirstPartyDonation=_isFirstPartyDonation;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009e7bf
- (id)proto;	// IMP=0x000000000009e64b
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000009e5af
- (id)initWithProto:(id)arg1;	// IMP=0x000000000009e3ce
- (id)encodeAsProto;	// IMP=0x000000000009e37e
- (id)serialize;	// IMP=0x000000000009e36c
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithIsFirstPartyDonation:(_Bool)arg1 isIndoor:(_Bool)arg2 activityType:(id)arg3 activityUUID:(id)arg4 eventType:(unsigned long long)arg5 isUpdate:(_Bool)arg6;	// IMP=0x000000000009e0ed
- (id)initWithIsFirstPartyDonation:(_Bool)arg1 isIndoor:(_Bool)arg2 activityType:(id)arg3 activityUUID:(id)arg4 eventType:(unsigned long long)arg5;	// IMP=0x000000000009e0d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

