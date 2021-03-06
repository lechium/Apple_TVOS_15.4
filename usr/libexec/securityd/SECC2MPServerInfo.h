//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SECC2MPServerInfo : PBCodable
{
    NSString *_partition;	// 8 = 0x8
    NSString *_serviceBuild;	// 16 = 0x10
    NSString *_serviceInstance;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001c3b57
@property(retain, nonatomic) NSString *serviceInstance; // @synthesize serviceInstance=_serviceInstance;
@property(retain, nonatomic) NSString *serviceBuild; // @synthesize serviceBuild=_serviceBuild;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001c3a20
- (unsigned long long)hash;	// IMP=0x00100000001c399c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001c3870
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001c3786
- (void)copyTo:(id)arg1;	// IMP=0x00100000001c36e3
- (void)writeTo:(id)arg1;	// IMP=0x00100000001c364c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001c363f
- (id)dictionaryRepresentation;	// IMP=0x00100000001c356e
- (id)description;	// IMP=0x00100000001c34bf
@property(readonly, nonatomic) _Bool hasServiceInstance;
@property(readonly, nonatomic) _Bool hasServiceBuild;
@property(readonly, nonatomic) _Bool hasPartition;
@property(readonly, nonatomic) _Bool hasServiceName;

@end

