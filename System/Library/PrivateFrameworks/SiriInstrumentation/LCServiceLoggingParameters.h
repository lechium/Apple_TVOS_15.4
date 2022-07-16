//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface LCServiceLoggingParameters
{
    int _qos;	// 8 = 0x8
    int _messageSizeQuotaInBytes;	// 12 = 0xc
    int _totalDiskSizeQuotaInBytes;	// 16 = 0x10
    _Bool _optOutOfCompression;	// 20 = 0x14
    float _uploadSamplingRate;	// 24 = 0x18
    float _realtimeSamplingRate;	// 28 = 0x1c
    NSData *_entropy;	// 32 = 0x20
    _Bool _overrideIntoSamplePopulation;	// 40 = 0x28
    NSString *_uploadEndpointURL;	// 48 = 0x30
    struct {
        unsigned int qos:1;
        unsigned int messageSizeQuotaInBytes:1;
        unsigned int totalDiskSizeQuotaInBytes:1;
        unsigned int optOutOfCompression:1;
        unsigned int uploadSamplingRate:1;
        unsigned int realtimeSamplingRate:1;
        unsigned int overrideIntoSamplePopulation:1;
    } _has;	// 56 = 0x38
    _Bool _hasEntropy;	// 60 = 0x3c
    _Bool _hasUploadEndpointURL;	// 61 = 0x3d
}

- (void).cxx_destruct;	// IMP=0x00000000001ab97e
@property(nonatomic) _Bool hasUploadEndpointURL; // @synthesize hasUploadEndpointURL=_hasUploadEndpointURL;
@property(nonatomic) _Bool hasEntropy; // @synthesize hasEntropy=_hasEntropy;
@property(copy, nonatomic) NSString *uploadEndpointURL; // @synthesize uploadEndpointURL=_uploadEndpointURL;
@property(nonatomic) _Bool overrideIntoSamplePopulation; // @synthesize overrideIntoSamplePopulation=_overrideIntoSamplePopulation;
@property(copy, nonatomic) NSData *entropy; // @synthesize entropy=_entropy;
@property(nonatomic) float realtimeSamplingRate; // @synthesize realtimeSamplingRate=_realtimeSamplingRate;
@property(nonatomic) float uploadSamplingRate; // @synthesize uploadSamplingRate=_uploadSamplingRate;
@property(nonatomic) _Bool optOutOfCompression; // @synthesize optOutOfCompression=_optOutOfCompression;
@property(nonatomic) int totalDiskSizeQuotaInBytes; // @synthesize totalDiskSizeQuotaInBytes=_totalDiskSizeQuotaInBytes;
@property(nonatomic) int messageSizeQuotaInBytes; // @synthesize messageSizeQuotaInBytes=_messageSizeQuotaInBytes;
@property(nonatomic) int qos; // @synthesize qos=_qos;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001ab440
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001ab382
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001aaf09
- (unsigned long long)hash;	// IMP=0x00000000001aac04
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001aa752
- (void)writeTo:(id)arg1;	// IMP=0x00000000001aa5b9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001aa5ac
- (void)deleteUploadEndpointURL;	// IMP=0x00000000001aa598
- (void)deleteOverrideIntoSamplePopulation;	// IMP=0x00000000001aa559
@property(nonatomic) _Bool hasOverrideIntoSamplePopulation;
- (void)deleteEntropy;	// IMP=0x00000000001aa4fa
- (void)deleteRealtimeSamplingRate;	// IMP=0x00000000001aa4ba
@property(nonatomic) _Bool hasRealtimeSamplingRate;
- (void)deleteUploadSamplingRate;	// IMP=0x00000000001aa442
@property(nonatomic) _Bool hasUploadSamplingRate;
- (void)deleteOptOutOfCompression;	// IMP=0x00000000001aa3cb
@property(nonatomic) _Bool hasOptOutOfCompression;
- (void)deleteTotalDiskSizeQuotaInBytes;	// IMP=0x00000000001aa356
@property(nonatomic) _Bool hasTotalDiskSizeQuotaInBytes;
- (void)deleteMessageSizeQuotaInBytes;	// IMP=0x00000000001aa2e1
@property(nonatomic) _Bool hasMessageSizeQuotaInBytes;
- (void)deleteQos;	// IMP=0x00000000001aa26e
@property(nonatomic) _Bool hasQos;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032811c

@end

