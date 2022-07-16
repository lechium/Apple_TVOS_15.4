//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SECC2MPCloudKitOperationGroupInfo : PBCodable
{
    NSString *_operationGroupId;	// 8 = 0x8
    NSString *_operationGroupName;	// 16 = 0x10
    _Bool _operationGroupTriggered;	// 24 = 0x18
    struct {
        unsigned int operationGroupTriggered:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00200000001b7f69
@property(nonatomic) _Bool operationGroupTriggered; // @synthesize operationGroupTriggered=_operationGroupTriggered;
@property(retain, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property(retain, nonatomic) NSString *operationGroupId; // @synthesize operationGroupId=_operationGroupId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001b7e8c
- (unsigned long long)hash;	// IMP=0x00100000001b7e17
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001b7d16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001b7c58
- (void)copyTo:(id)arg1;	// IMP=0x00100000001b7bd5
- (void)writeTo:(id)arg1;	// IMP=0x00100000001b7b53
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001b7b46
- (id)dictionaryRepresentation;	// IMP=0x00100000001b7a5f
- (id)description;	// IMP=0x00100000001b79b0
@property(nonatomic) _Bool hasOperationGroupTriggered;
@property(readonly, nonatomic) _Bool hasOperationGroupName;
@property(readonly, nonatomic) _Bool hasOperationGroupId;

@end

