//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASRSchemaASRAssetLoadContext, ASRSchemaASRAudioPacketArrivalContext, ASRSchemaASRClientEventMetadata, ASRSchemaASRFinalAudioPacketContainingSpeechReceived, ASRSchemaASRFinalResultGenerated, ASRSchemaASRFirstAudioPacketProcessed, ASRSchemaASRInitializationContext, ASRSchemaASRIntermediateUtteranceInfoTier1, ASRSchemaASRJitLanguageModelEnrollmentContext, ASRSchemaASRJitLanguageModelEnrollmentEndedTier1, ASRSchemaASRPackageGenerated, ASRSchemaASRPartialResultGenerated, ASRSchemaASRPreheatContext, ASRSchemaASRRecognitionResultTier1, ASRSchemaASRRequestContext, ASRSchemaASRSampledAudioFileDeleted, ASRSchemaASRSampledAudioFileDeletionFailed, ASRSchemaASRSampledAudioFileEnqueueFailed, ASRSchemaASRSampledAudioFileEnqueued, ASRSchemaASRSampledAudioFileStorageFailed, ASRSchemaASRSampledAudioFileStored, NSData;

@interface ASRSchemaASRClientEvent
{
    ASRSchemaASRClientEventMetadata *_eventMetadata;	// 8 = 0x8
    ASRSchemaASRPreheatContext *_preheatContext;	// 16 = 0x10
    ASRSchemaASRRequestContext *_requestContext;	// 24 = 0x18
    ASRSchemaASRPartialResultGenerated *_partialResultGenerated;	// 32 = 0x20
    ASRSchemaASRPackageGenerated *_packageGenerated;	// 40 = 0x28
    ASRSchemaASRRecognitionResultTier1 *_recognitionResultTier1;	// 48 = 0x30
    ASRSchemaASRFinalResultGenerated *_finalResultGenerated;	// 56 = 0x38
    ASRSchemaASRIntermediateUtteranceInfoTier1 *_intermediateUtteranceInfoTier1;	// 64 = 0x40
    ASRSchemaASRInitializationContext *_initializationContext;	// 72 = 0x48
    ASRSchemaASRAssetLoadContext *_assetLoadContext;	// 80 = 0x50
    ASRSchemaASRJitLanguageModelEnrollmentContext *_languageModelEnrollmentContext;	// 88 = 0x58
    ASRSchemaASRJitLanguageModelEnrollmentEndedTier1 *_jitLanguageModelEnrollmentEndedTier1;	// 96 = 0x60
    ASRSchemaASRAudioPacketArrivalContext *_audioPacketArrivalContext;	// 104 = 0x68
    ASRSchemaASRFirstAudioPacketProcessed *_firstAudioPacketProcessed;	// 112 = 0x70
    ASRSchemaASRFinalAudioPacketContainingSpeechReceived *_finalAudioPacketContainingSpeechReceived;	// 120 = 0x78
    ASRSchemaASRSampledAudioFileStored *_sampledAudioFileStored;	// 128 = 0x80
    ASRSchemaASRSampledAudioFileStorageFailed *_sampledAudioFileStorageFailed;	// 136 = 0x88
    ASRSchemaASRSampledAudioFileEnqueued *_sampledAudioFileEnqueued;	// 144 = 0x90
    ASRSchemaASRSampledAudioFileEnqueueFailed *_sampledAudioFileEnqueueFailed;	// 152 = 0x98
    ASRSchemaASRSampledAudioFileDeleted *_sampledAudioFileDeleted;	// 160 = 0xa0
    ASRSchemaASRSampledAudioFileDeletionFailed *_sampledAudioFileDeletionFailed;	// 168 = 0xa8
    _Bool _hasEventMetadata;	// 176 = 0xb0
    _Bool _hasPreheatContext;	// 177 = 0xb1
    _Bool _hasRequestContext;	// 178 = 0xb2
    _Bool _hasPartialResultGenerated;	// 179 = 0xb3
    _Bool _hasPackageGenerated;	// 180 = 0xb4
    _Bool _hasRecognitionResultTier1;	// 181 = 0xb5
    _Bool _hasFinalResultGenerated;	// 182 = 0xb6
    _Bool _hasIntermediateUtteranceInfoTier1;	// 183 = 0xb7
    _Bool _hasInitializationContext;	// 184 = 0xb8
    _Bool _hasAssetLoadContext;	// 185 = 0xb9
    _Bool _hasLanguageModelEnrollmentContext;	// 186 = 0xba
    _Bool _hasJitLanguageModelEnrollmentEndedTier1;	// 187 = 0xbb
    _Bool _hasAudioPacketArrivalContext;	// 188 = 0xbc
    _Bool _hasFirstAudioPacketProcessed;	// 189 = 0xbd
    _Bool _hasFinalAudioPacketContainingSpeechReceived;	// 190 = 0xbe
    _Bool _hasSampledAudioFileStored;	// 191 = 0xbf
    _Bool _hasSampledAudioFileStorageFailed;	// 192 = 0xc0
    _Bool _hasSampledAudioFileEnqueued;	// 193 = 0xc1
    _Bool _hasSampledAudioFileEnqueueFailed;	// 194 = 0xc2
    _Bool _hasSampledAudioFileDeleted;	// 195 = 0xc3
    _Bool _hasSampledAudioFileDeletionFailed;	// 196 = 0xc4
    unsigned long long _whichEvent_Type;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000000214ce
@property(nonatomic) _Bool hasSampledAudioFileDeletionFailed; // @synthesize hasSampledAudioFileDeletionFailed=_hasSampledAudioFileDeletionFailed;
@property(nonatomic) _Bool hasSampledAudioFileDeleted; // @synthesize hasSampledAudioFileDeleted=_hasSampledAudioFileDeleted;
@property(nonatomic) _Bool hasSampledAudioFileEnqueueFailed; // @synthesize hasSampledAudioFileEnqueueFailed=_hasSampledAudioFileEnqueueFailed;
@property(nonatomic) _Bool hasSampledAudioFileEnqueued; // @synthesize hasSampledAudioFileEnqueued=_hasSampledAudioFileEnqueued;
@property(nonatomic) _Bool hasSampledAudioFileStorageFailed; // @synthesize hasSampledAudioFileStorageFailed=_hasSampledAudioFileStorageFailed;
@property(nonatomic) _Bool hasSampledAudioFileStored; // @synthesize hasSampledAudioFileStored=_hasSampledAudioFileStored;
@property(nonatomic) _Bool hasFinalAudioPacketContainingSpeechReceived; // @synthesize hasFinalAudioPacketContainingSpeechReceived=_hasFinalAudioPacketContainingSpeechReceived;
@property(nonatomic) _Bool hasFirstAudioPacketProcessed; // @synthesize hasFirstAudioPacketProcessed=_hasFirstAudioPacketProcessed;
@property(nonatomic) _Bool hasAudioPacketArrivalContext; // @synthesize hasAudioPacketArrivalContext=_hasAudioPacketArrivalContext;
@property(nonatomic) _Bool hasJitLanguageModelEnrollmentEndedTier1; // @synthesize hasJitLanguageModelEnrollmentEndedTier1=_hasJitLanguageModelEnrollmentEndedTier1;
@property(nonatomic) _Bool hasLanguageModelEnrollmentContext; // @synthesize hasLanguageModelEnrollmentContext=_hasLanguageModelEnrollmentContext;
@property(nonatomic) _Bool hasAssetLoadContext; // @synthesize hasAssetLoadContext=_hasAssetLoadContext;
@property(nonatomic) _Bool hasInitializationContext; // @synthesize hasInitializationContext=_hasInitializationContext;
@property(nonatomic) _Bool hasIntermediateUtteranceInfoTier1; // @synthesize hasIntermediateUtteranceInfoTier1=_hasIntermediateUtteranceInfoTier1;
@property(nonatomic) _Bool hasFinalResultGenerated; // @synthesize hasFinalResultGenerated=_hasFinalResultGenerated;
@property(nonatomic) _Bool hasRecognitionResultTier1; // @synthesize hasRecognitionResultTier1=_hasRecognitionResultTier1;
@property(nonatomic) _Bool hasPackageGenerated; // @synthesize hasPackageGenerated=_hasPackageGenerated;
@property(nonatomic) _Bool hasPartialResultGenerated; // @synthesize hasPartialResultGenerated=_hasPartialResultGenerated;
@property(nonatomic) _Bool hasRequestContext; // @synthesize hasRequestContext=_hasRequestContext;
@property(nonatomic) _Bool hasPreheatContext; // @synthesize hasPreheatContext=_hasPreheatContext;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) ASRSchemaASRClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002062c
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000002056e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000001f619
- (unsigned long long)hash;	// IMP=0x000000000001f3b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001de33
- (void)writeTo:(id)arg1;	// IMP=0x000000000001d67c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001a135
- (void)deleteSampledAudioFileDeletionFailed;	// IMP=0x000000000001a102
@property(retain, nonatomic) ASRSchemaASRSampledAudioFileDeletionFailed *sampledAudioFileDeletionFailed; // @synthesize sampledAudioFileDeletionFailed=_sampledAudioFileDeletionFailed;
- (void)deleteSampledAudioFileDeleted;	// IMP=0x0000000000019ef2
@property(retain, nonatomic) ASRSchemaASRSampledAudioFileDeleted *sampledAudioFileDeleted; // @synthesize sampledAudioFileDeleted=_sampledAudioFileDeleted;
- (void)deleteSampledAudioFileEnqueueFailed;	// IMP=0x0000000000019ce2
@property(retain, nonatomic) ASRSchemaASRSampledAudioFileEnqueueFailed *sampledAudioFileEnqueueFailed; // @synthesize sampledAudioFileEnqueueFailed=_sampledAudioFileEnqueueFailed;
- (void)deleteSampledAudioFileEnqueued;	// IMP=0x0000000000019ad2
@property(retain, nonatomic) ASRSchemaASRSampledAudioFileEnqueued *sampledAudioFileEnqueued; // @synthesize sampledAudioFileEnqueued=_sampledAudioFileEnqueued;
- (void)deleteSampledAudioFileStorageFailed;	// IMP=0x00000000000198c2
@property(retain, nonatomic) ASRSchemaASRSampledAudioFileStorageFailed *sampledAudioFileStorageFailed; // @synthesize sampledAudioFileStorageFailed=_sampledAudioFileStorageFailed;
- (void)deleteSampledAudioFileStored;	// IMP=0x00000000000196b2
@property(retain, nonatomic) ASRSchemaASRSampledAudioFileStored *sampledAudioFileStored; // @synthesize sampledAudioFileStored=_sampledAudioFileStored;
- (void)deleteFinalAudioPacketContainingSpeechReceived;	// IMP=0x00000000000194a2
@property(retain, nonatomic) ASRSchemaASRFinalAudioPacketContainingSpeechReceived *finalAudioPacketContainingSpeechReceived; // @synthesize finalAudioPacketContainingSpeechReceived=_finalAudioPacketContainingSpeechReceived;
- (void)deleteFirstAudioPacketProcessed;	// IMP=0x0000000000019292
@property(retain, nonatomic) ASRSchemaASRFirstAudioPacketProcessed *firstAudioPacketProcessed; // @synthesize firstAudioPacketProcessed=_firstAudioPacketProcessed;
- (void)deleteAudioPacketArrivalContext;	// IMP=0x0000000000019082
@property(retain, nonatomic) ASRSchemaASRAudioPacketArrivalContext *audioPacketArrivalContext; // @synthesize audioPacketArrivalContext=_audioPacketArrivalContext;
- (void)deleteJitLanguageModelEnrollmentEndedTier1;	// IMP=0x0000000000018e72
@property(retain, nonatomic) ASRSchemaASRJitLanguageModelEnrollmentEndedTier1 *jitLanguageModelEnrollmentEndedTier1; // @synthesize jitLanguageModelEnrollmentEndedTier1=_jitLanguageModelEnrollmentEndedTier1;
- (void)deleteLanguageModelEnrollmentContext;	// IMP=0x0000000000018c62
@property(retain, nonatomic) ASRSchemaASRJitLanguageModelEnrollmentContext *languageModelEnrollmentContext; // @synthesize languageModelEnrollmentContext=_languageModelEnrollmentContext;
- (void)deleteAssetLoadContext;	// IMP=0x0000000000018a52
@property(retain, nonatomic) ASRSchemaASRAssetLoadContext *assetLoadContext; // @synthesize assetLoadContext=_assetLoadContext;
- (void)deleteInitializationContext;	// IMP=0x0000000000018842
@property(retain, nonatomic) ASRSchemaASRInitializationContext *initializationContext; // @synthesize initializationContext=_initializationContext;
- (void)deleteIntermediateUtteranceInfoTier1;	// IMP=0x0000000000018632
@property(retain, nonatomic) ASRSchemaASRIntermediateUtteranceInfoTier1 *intermediateUtteranceInfoTier1; // @synthesize intermediateUtteranceInfoTier1=_intermediateUtteranceInfoTier1;
- (void)deleteFinalResultGenerated;	// IMP=0x0000000000018422
@property(retain, nonatomic) ASRSchemaASRFinalResultGenerated *finalResultGenerated; // @synthesize finalResultGenerated=_finalResultGenerated;
- (void)deleteRecognitionResultTier1;	// IMP=0x0000000000018212
@property(retain, nonatomic) ASRSchemaASRRecognitionResultTier1 *recognitionResultTier1; // @synthesize recognitionResultTier1=_recognitionResultTier1;
- (void)deletePackageGenerated;	// IMP=0x0000000000018002
@property(retain, nonatomic) ASRSchemaASRPackageGenerated *packageGenerated; // @synthesize packageGenerated=_packageGenerated;
- (void)deletePartialResultGenerated;	// IMP=0x0000000000017df2
@property(retain, nonatomic) ASRSchemaASRPartialResultGenerated *partialResultGenerated; // @synthesize partialResultGenerated=_partialResultGenerated;
- (void)deleteRequestContext;	// IMP=0x0000000000017be2
@property(retain, nonatomic) ASRSchemaASRRequestContext *requestContext; // @synthesize requestContext=_requestContext;
- (void)deletePreheatContext;	// IMP=0x00000000000179d2
@property(retain, nonatomic) ASRSchemaASRPreheatContext *preheatContext; // @synthesize preheatContext=_preheatContext;
- (void)deleteEventMetadata;	// IMP=0x00000000000177e1
- (id)qualifiedMessageName;	// IMP=0x0000000000017684
- (int)getAnyEventType;	// IMP=0x0000000000017679
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000030dc4c
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030dc14

@end

