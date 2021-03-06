//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDConversationLinkGeneratorDescriptor, NSString;

@interface CSDMessagingConversationLinkGeneratorDescriptor : PBCodable
{
    NSString *_generatorID;	// 8 = 0x8
    unsigned int _generatorVersion;	// 16 = 0x10
    struct {
        unsigned int generatorVersion:1;
    } _has;	// 20 = 0x14
}

+ (id)generatorDescriptorWithCSDConversationLinkGeneratorDescriptor:(id)arg1;	// IMP=0x0020000000056fec
- (void).cxx_destruct;	// IMP=0x0010000000104602
@property(nonatomic) unsigned int generatorVersion; // @synthesize generatorVersion=_generatorVersion;
@property(retain, nonatomic) NSString *generatorID; // @synthesize generatorID=_generatorID;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000010456a
- (unsigned long long)hash;	// IMP=0x0010000000104518
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000104457
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001043bf
- (void)copyTo:(id)arg1;	// IMP=0x001000000010435c
- (void)writeTo:(id)arg1;	// IMP=0x00100000001042f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001042eb
- (id)dictionaryRepresentation;	// IMP=0x001000000010401a
- (id)description;	// IMP=0x0010000000103f6b
@property(nonatomic) _Bool hasGeneratorVersion;
@property(readonly, nonatomic) _Bool hasGeneratorID;
@property(readonly, nonatomic) CSDConversationLinkGeneratorDescriptor *csdConversationLinkGeneratorDescriptor;

@end

