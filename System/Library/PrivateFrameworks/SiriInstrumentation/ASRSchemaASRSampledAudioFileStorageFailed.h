//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface ASRSchemaASRSampledAudioFileStorageFailed
{
    int _errorCode;	// 8 = 0x8
    NSString *_errorDomain;	// 16 = 0x10
    int _underlyingErrorCode;	// 24 = 0x18
    NSString *_underlyingErrorDomain;	// 32 = 0x20
    int _sampledAudioStorageFailureReason;	// 40 = 0x28
    struct {
        unsigned int errorCode:1;
        unsigned int underlyingErrorCode:1;
        unsigned int sampledAudioStorageFailureReason:1;
    } _has;	// 44 = 0x2c
    _Bool _hasErrorDomain;	// 48 = 0x30
    _Bool _hasUnderlyingErrorDomain;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x000000000003a2ef
@property(nonatomic) _Bool hasUnderlyingErrorDomain; // @synthesize hasUnderlyingErrorDomain=_hasUnderlyingErrorDomain;
@property(nonatomic) _Bool hasErrorDomain; // @synthesize hasErrorDomain=_hasErrorDomain;
@property(nonatomic) int sampledAudioStorageFailureReason; // @synthesize sampledAudioStorageFailureReason=_sampledAudioStorageFailureReason;
@property(copy, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(nonatomic) int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000039fb6
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000039ef8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000039bfe
- (unsigned long long)hash;	// IMP=0x0000000000039b30
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000397cb
- (void)writeTo:(id)arg1;	// IMP=0x00000000000396ba
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000396ad
- (void)deleteSampledAudioStorageFailureReason;	// IMP=0x0000000000039683
@property(nonatomic) _Bool hasSampledAudioStorageFailureReason;
- (void)deleteUnderlyingErrorDomain;	// IMP=0x0000000000039624
- (void)deleteUnderlyingErrorCode;	// IMP=0x00000000000395e5
@property(nonatomic) _Bool hasUnderlyingErrorCode;
- (void)deleteErrorDomain;	// IMP=0x0000000000039588
- (void)deleteErrorCode;	// IMP=0x0000000000039549
@property(nonatomic) _Bool hasErrorCode;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000310508

@end

