//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSUUID;

@interface SharingBTLEAdvertisementPayload : NSObject
{
    struct {
        unsigned char hashedAdvertisementBytes[7];
        unsigned char optionBits;
        unsigned char timeOffset;
    } _bytes;	// 8 = 0x8
    NSUUID *_activityUUID;	// 24 = 0x18
    NSDate *_epochEnd;	// 32 = 0x20
    NSDictionary *_options;	// 40 = 0x28
    NSDate *_when;	// 48 = 0x30
    NSDate *_epochStart;	// 56 = 0x38
}

+ (id)dateEpochStart:(id)arg1;	// IMP=0x002000000007d9f2
- (void).cxx_destruct;	// IMP=0x002000000007e3e8
@property(copy) NSDate *epochStart; // @synthesize epochStart=_epochStart;
@property(copy) NSDate *when; // @synthesize when=_when;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(readonly, copy) NSDate *epochEnd; // @synthesize epochEnd=_epochEnd;
- (id)now;	// IMP=0x001000000007e1b7
@property(readonly, copy) NSDate *validUntil; // @dynamic validUntil;
@property(readonly, copy) NSDate *currentUntil; // @dynamic currentUntil;
@property(readonly, copy) NSDate *time; // @dynamic time;
- (id)description;	// IMP=0x001000000007d821
- (_Bool)matchesItem:(id)arg1;	// IMP=0x001000000007d6f5
- (_Bool)isEqualHashedPayloadBytes:(id)arg1;	// IMP=0x001000000007d6d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007d58e
@property(readonly) int advertisementKind; // @dynamic advertisementKind;
- (id)advertisementPayload;	// IMP=0x001000000007d4fc
@property(readonly) _Bool containsPasteboard;
- (_Bool)compareOptionBits:(unsigned char)arg1;	// IMP=0x001000000007d4df
@property unsigned char optionBits;
@property unsigned char timeOffset; // @dynamic timeOffset;
@property(getter=isCurrent) _Bool current;
@property(copy) NSData *payloadBytes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007d310
- (id)initWithAdvertisedBytes:(id)arg1;	// IMP=0x001000000007d2fb
- (id)initWithAdvertisedBytes:(id)arg1 options:(id)arg2;	// IMP=0x001000000007d15d
- (id)initWithSFActivityAdvertisement:(id)arg1;	// IMP=0x001000000007cd1c
- (id)initWithType:(unsigned long long)arg1 string:(id)arg2 dynamicType:(id)arg3 teamID:(id)arg4 webpageURL:(id)arg5 options:(id)arg6 isCurrent:(_Bool)arg7 when:(id)arg8;	// IMP=0x001000000007ccdc
- (id)initWithType:(unsigned long long)arg1 string:(id)arg2 dynamicType:(id)arg3 teamID:(id)arg4 webpageURL:(id)arg5 options:(id)arg6 isCurrent:(_Bool)arg7 when:(id)arg8 versionFlags:(unsigned char)arg9;	// IMP=0x001000000007c1d9
- (id)initWithItem:(id)arg1 isCurrent:(_Bool)arg2 when:(id)arg3;	// IMP=0x001000000007c1c3
- (id)initWithItem:(id)arg1 isCurrent:(_Bool)arg2 when:(id)arg3 versionFlags:(unsigned char)arg4;	// IMP=0x001000000007bfd1

@end

