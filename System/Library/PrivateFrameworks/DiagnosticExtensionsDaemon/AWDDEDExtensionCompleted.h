//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDDEDExtensionCompleted : PBCodable <NSCopying>
{
    unsigned long long _duration;	// 8 = 0x8
    unsigned long long _numbytes;	// 16 = 0x10
    unsigned long long _numfiles;	// 24 = 0x18
    unsigned long long _timestamp;	// 32 = 0x20
    int _error;	// 40 = 0x28
    NSString *_extension;	// 48 = 0x30
    struct {
        unsigned int duration:1;
        unsigned int numbytes:1;
        unsigned int numfiles:1;
        unsigned int timestamp:1;
        unsigned int error:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005dbf3
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long numbytes; // @synthesize numbytes=_numbytes;
@property(nonatomic) unsigned long long numfiles; // @synthesize numfiles=_numfiles;
@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005daad
- (unsigned long long)hash;	// IMP=0x000000000005d9e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d882
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d778
- (void)copyTo:(id)arg1;	// IMP=0x000000000005d69b
- (void)writeTo:(id)arg1;	// IMP=0x000000000005d5ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005d5a0
- (id)dictionaryRepresentation;	// IMP=0x000000000005cea0
- (id)description;	// IMP=0x000000000005cdf1
@property(nonatomic) _Bool hasDuration;
- (int)StringAsError:(id)arg1;	// IMP=0x000000000005ccfc
- (id)errorAsString:(int)arg1;	// IMP=0x000000000005cc7d
@property(nonatomic) _Bool hasError;
@property(nonatomic) int error; // @synthesize error=_error;
@property(nonatomic) _Bool hasNumbytes;
@property(nonatomic) _Bool hasNumfiles;
@property(readonly, nonatomic) _Bool hasExtension;
@property(nonatomic) _Bool hasTimestamp;

@end
