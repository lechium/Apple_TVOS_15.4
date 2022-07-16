//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <OnBoardingKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OBOnBoardingKitPrivacyLinkPresentation : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_bundleid;	// 16 = 0x10
    CDStruct_b5306035 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000005d83
@property(retain, nonatomic) NSString *bundleid; // @synthesize bundleid=_bundleid;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000005ce9
- (unsigned long long)hash;	// IMP=0x0000000000005c9f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005bda
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005b49
- (void)copyTo:(id)arg1;	// IMP=0x0000000000005ae5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000005a80
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000005a73
- (id)dictionaryRepresentation;	// IMP=0x000000000000579a
- (id)description;	// IMP=0x00000000000056eb
@property(readonly, nonatomic) _Bool hasBundleid;
@property(nonatomic) _Bool hasTimestamp;

@end
