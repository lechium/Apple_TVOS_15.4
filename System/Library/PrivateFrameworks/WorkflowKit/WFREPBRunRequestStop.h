//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFREPBRunRequestStop : PBCodable <NSCopying>
{
    NSString *_runRequestIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001ea55a
@property(retain, nonatomic) NSString *runRequestIdentifier; // @synthesize runRequestIdentifier=_runRequestIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ea511
- (unsigned long long)hash;	// IMP=0x00000000001ea4f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ea45a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ea3e2
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ea3bf
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ea360
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ea353
- (id)dictionaryRepresentation;	// IMP=0x00000000001ea2f7
- (id)description;	// IMP=0x00000000001ea248

@end

