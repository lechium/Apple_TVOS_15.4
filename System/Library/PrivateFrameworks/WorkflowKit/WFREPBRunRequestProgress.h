//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFREPBRunRequestProgress : PBCodable <NSCopying>
{
    double _progress;	// 8 = 0x8
    NSString *_runRequestIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000082d6f
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *runRequestIdentifier; // @synthesize runRequestIdentifier=_runRequestIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000082cd1
- (unsigned long long)hash;	// IMP=0x0000000000082bab
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000082afb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000082a71
- (void)copyTo:(id)arg1;	// IMP=0x0000000000082a13
- (void)writeTo:(id)arg1;	// IMP=0x000000000008299a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008298d
- (id)dictionaryRepresentation;	// IMP=0x00000000000828db
- (id)description;	// IMP=0x000000000008282c

@end

