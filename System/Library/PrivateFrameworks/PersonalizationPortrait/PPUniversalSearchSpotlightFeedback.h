//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PPUniversalSearchSpotlightFeedback : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _offeredCSSICount;	// 8 = 0x8
    unsigned int _engagedCSSICount;	// 12 = 0xc
    NSString *_clientIdentifier;	// 16 = 0x10
    NSString *_clientBundleId;	// 24 = 0x18
    NSDate *_timestamp;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002a6f
- (void).cxx_destruct;	// IMP=0x0000000000002a3c
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
@property(readonly, nonatomic) unsigned int engagedCSSICount; // @synthesize engagedCSSICount=_engagedCSSICount;
@property(readonly, nonatomic) unsigned int offeredCSSICount; // @synthesize offeredCSSICount=_offeredCSSICount;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)description;	// IMP=0x00000000000028ef
- (_Bool)isEqualToPPUniversalSearchSpotlightFeedback:(id)arg1;	// IMP=0x00000000000027e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000277d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002772
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002309
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002259
- (id)init;	// IMP=0x0000000000002253
- (unsigned long long)hash;	// IMP=0x00000000000021d6
- (id)initWithOfferedCSSICount:(unsigned int)arg1 engagedCSSICount:(unsigned int)arg2 timestamp:(id)arg3 clientIdentifier:(id)arg4 clientBundleId:(id)arg5;	// IMP=0x000000000000210b
- (id)initWithOfferedCSSICount:(unsigned int)arg1 engagedCSSICount:(unsigned int)arg2;	// IMP=0x000000000000205f

@end
