//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrialProto/NSCopying-Protocol.h>

@class NSString;

@interface TRIMLRuntimeDimensions : PBCodable <NSCopying>
{
    NSString *_crashPrefixHash;	// 8 = 0x8
    NSString *_pluginId;	// 16 = 0x10
    NSString *_underlyingDomainCode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001d292
@property(retain, nonatomic) NSString *crashPrefixHash; // @synthesize crashPrefixHash=_crashPrefixHash;
@property(retain, nonatomic) NSString *pluginId; // @synthesize pluginId=_pluginId;
@property(retain, nonatomic) NSString *underlyingDomainCode; // @synthesize underlyingDomainCode=_underlyingDomainCode;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001d1a0
- (unsigned long long)hash;	// IMP=0x000000000001d133
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d03b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001cf77
- (void)copyTo:(id)arg1;	// IMP=0x000000000001cef4
- (void)writeTo:(id)arg1;	// IMP=0x000000000001ce7a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001ce6d
- (id)dictionaryRepresentation;	// IMP=0x000000000001cc3c
- (id)description;	// IMP=0x000000000001cb8d
@property(readonly, nonatomic) _Bool hasCrashPrefixHash;
@property(readonly, nonatomic) _Bool hasPluginId;
@property(readonly, nonatomic) _Bool hasUnderlyingDomainCode;

@end

