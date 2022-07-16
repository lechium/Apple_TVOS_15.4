//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBAppSessionCompletedEvent : PBCodable <NSCopying>
{
    unsigned int _duration;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_source;	// 24 = 0x18
    CDStruct_84479c50 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000087f86
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000087eba
- (unsigned long long)hash;	// IMP=0x0000000000087e46
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000087d51
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000087c93
- (void)copyTo:(id)arg1;	// IMP=0x0000000000087c10
- (void)writeTo:(id)arg1;	// IMP=0x0000000000087b8f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000087b82
- (id)dictionaryRepresentation;	// IMP=0x0000000000087a9c
- (id)description;	// IMP=0x00000000000879ed
@property(nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasSource;
@property(readonly, nonatomic) _Bool hasKey;

@end

