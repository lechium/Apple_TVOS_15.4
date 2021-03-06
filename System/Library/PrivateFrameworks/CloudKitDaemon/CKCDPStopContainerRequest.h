//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKCDPStopContainerRequest : PBRequest <NSCopying>
{
    NSString *_containerName;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000022dfa1
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000022def4
- (unsigned long long)hash;	// IMP=0x000000000022dea7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022dddf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022dd41
- (void)copyTo:(id)arg1;	// IMP=0x000000000022dcde
- (void)writeTo:(id)arg1;	// IMP=0x000000000022dc81
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000022dadc
- (id)dictionaryRepresentation;	// IMP=0x000000000022da59
- (id)description;	// IMP=0x000000000022d9aa
@property(readonly, nonatomic) _Bool hasEnvironment;
@property(readonly, nonatomic) _Bool hasContainerName;

@end

