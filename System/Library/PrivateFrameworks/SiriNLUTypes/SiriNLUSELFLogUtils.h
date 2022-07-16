//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriNLUSELFLogUtils : NSObject
{
}

+ (id)createAllZeroUUID;	// IMP=0x000000000003cc50
+ (int)convertCDMParserAlgorithmType:(int)arg1;	// IMP=0x000000000003cc3f
+ (int)convertCDMReformType:(int)arg1;	// IMP=0x000000000003cc2e
+ (int)convertCDMRewriteType:(int)arg1;	// IMP=0x000000000003cc1d
+ (int)convertCDMRepetitionType:(int)arg1;	// IMP=0x000000000003cc03
+ (int)convertCDMMatcherName:(int)arg1;	// IMP=0x000000000003cbf2
+ (int)convertUSOEntityIdentifierNluComponent:(int)arg1;	// IMP=0x000000000003cbe1
+ (id)convertReformedTurnInputBundle:(id)arg1;	// IMP=0x000000000003c8a3
+ (id)convertToken:(id)arg1;	// IMP=0x000000000003c53f
+ (id)convertTokenChain:(id)arg1;	// IMP=0x000000000003c313
+ (id)convertMentionResolverSpanData:(id)arg1;	// IMP=0x000000000003c267
+ (id)convertMentionDetectorSpanData:(id)arg1;	// IMP=0x000000000003c1db
+ (id)convertPLUMSpanData:(id)arg1;	// IMP=0x000000000003c14f
+ (id)convertSiriVocabularySpanData:(id)arg1;	// IMP=0x000000000003c12a
+ (id)convertInternalSpanData:(id)arg1;	// IMP=0x000000000003bf07
+ (id)convertMatchingSpanTier1:(id)arg1;	// IMP=0x000000000003be1e
+ (id)convertMatchingSpan:(id)arg1;	// IMP=0x000000000003b769
+ (id)getTaskFromUserStatedTask:(id)arg1;	// IMP=0x000000000003b6c4
+ (id)getReferenceFromWantedToPause:(id)arg1;	// IMP=0x000000000003b61f
+ (id)getReferenceFromWantedToProceed:(id)arg1;	// IMP=0x000000000003b57a
+ (id)getReferenceFromAcknowledged:(id)arg1;	// IMP=0x000000000003b4d5
+ (id)getReferenceFromWantedToRepeat:(id)arg1;	// IMP=0x000000000003b430
+ (id)getReferenceFromCancelled:(id)arg1;	// IMP=0x000000000003b38b
+ (id)getReferenceFromRejected:(id)arg1;	// IMP=0x000000000003b2e6
+ (id)getReferenceFromAccepted:(id)arg1;	// IMP=0x000000000003b241
+ (id)convertUserStatedTask:(id)arg1;	// IMP=0x000000000003b1ed
+ (id)convertDelegated:(id)arg1;	// IMP=0x000000000003ad1d
+ (id)convertWantedToPause:(id)arg1;	// IMP=0x000000000003abca
+ (id)convertWantedToProceed:(id)arg1;	// IMP=0x000000000003aa77
+ (id)convertAcknowledged:(id)arg1;	// IMP=0x000000000003a924
+ (id)convertWantedToRepeat:(id)arg1;	// IMP=0x000000000003a7d1
+ (id)convertCancelled:(id)arg1;	// IMP=0x000000000003a67e
+ (id)convertRejected:(id)arg1;	// IMP=0x000000000003a52b
+ (id)convertAccepted:(id)arg1;	// IMP=0x000000000003a3d8
+ (id)convertUserDialogAct:(id)arg1;	// IMP=0x00000000000397a4
+ (id)convertParser:(id)arg1;	// IMP=0x00000000000396db
+ (id)convertRepetitionResult:(id)arg1;	// IMP=0x0000000000039612
+ (id)convertUserParse:(id)arg1;	// IMP=0x000000000003904a
+ (id)convertReportedFailure:(id)arg1;	// IMP=0x0000000000038ae5
+ (id)convertReportedSuccess:(id)arg1;	// IMP=0x0000000000038766
+ (id)convertInformed:(id)arg1;	// IMP=0x000000000003829f
+ (id)convertGaveOptions:(id)arg1;	// IMP=0x0000000000037e80
+ (id)convertOffered:(id)arg1;	// IMP=0x0000000000037b84
+ (id)convertPrompted:(id)arg1;	// IMP=0x0000000000037805
+ (id)convertSystemDialogAct:(id)arg1;	// IMP=0x0000000000036f77
+ (id)convertLegacyNLContext:(id)arg1;	// IMP=0x0000000000036d5f
+ (id)convertTask:(id)arg1;	// IMP=0x000000000003697c
+ (id)convertNLContext:(id)arg1;	// IMP=0x0000000000035f83
+ (_Bool)isLegacyNlContextNotEmpty:(id)arg1;	// IMP=0x0000000000035e8f
+ (_Bool)isNlContextNotEmpty:(id)arg1;	// IMP=0x0000000000035c9c
+ (id)convertTurnContext:(id)arg1;	// IMP=0x0000000000035852
+ (id)convertTurnInput:(id)arg1;	// IMP=0x0000000000035368
+ (id)getObjCUsoGraphFromOntologyUsoGraph:(unique_ptr_8a7cebb7)arg1;	// IMP=0x000000000003523f
+ (id)convertUsoEntityIdentifierTier1:(id)arg1 index:(long long)arg2;	// IMP=0x0000000000035179
+ (id)convertUsoNodeDataTier1:(id)arg1 index:(long long)arg2;	// IMP=0x0000000000034e99
+ (id)convertUtteranceSpan:(id)arg1;	// IMP=0x0000000000034d5d
+ (id)convertUtteranceAlignment:(id)arg1;	// IMP=0x0000000000034ade
+ (int)convertUsoBackingAppBundleType:(id)arg1;	// IMP=0x0000000000034a21
+ (id)convertUsoEntityIdentifier:(id)arg1 index:(long long)arg2;	// IMP=0x000000000003473c
+ (id)convertUsoEntityIdentifier:(id)arg1;	// IMP=0x000000000003470c
+ (id)convertUsoEdge:(id)arg1;	// IMP=0x0000000000034425
+ (id)convertUsoNode:(id)arg1;	// IMP=0x000000000003427e
+ (id)convertNonTier1UsoGraph:(id)arg1 identifiers:(id)arg2;	// IMP=0x0000000000033aae
+ (id)convertNonTier1UsoGraph:(id)arg1;	// IMP=0x0000000000033a83
+ (id)convertUsoGraph:(id)arg1;	// IMP=0x0000000000032e54
+ (id)convertVersion:(id)arg1;	// IMP=0x0000000000032d82
+ (id)convertUUID:(id)arg1;	// IMP=0x0000000000032cab
+ (id)createMatchingSpanTier1Event:(id)arg1 withlinkId:(id)arg2;	// IMP=0x0000000000032abb
+ (id)createDelegatedUserDialogActTier1Event:(id)arg1 withLinkId:(id)arg2;	// IMP=0x000000000003292b
+ (id)createSystemDialogActTier1Event:(id)arg1 withLinkId:(id)arg2;	// IMP=0x000000000003279b
+ (id)createNLXLegacyNLContextTier1Event:(id)arg1 withLinkId:(id)arg2;	// IMP=0x00000000000324ec
+ (id)createContextUpdateEndedLog:(id)arg1 contextUpdateResponse:(id)arg2 metadata:(id)arg3;	// IMP=0x0000000000031fea
+ (id)createMultiHypoTokenizationEndedLog:(id)arg1 tokenizationResponses:(id)arg2 tokenizationInputType:(int)arg3 metadata:(id)arg4;	// IMP=0x0000000000031c29
+ (id)createTokenizationEndedLog:(id)arg1 tokenizationResponse:(id)arg2 tokenizationInputType:(int)arg3 metadata:(id)arg4;	// IMP=0x0000000000031a00
+ (id)createTokenizationEndedLog:(id)arg1 tokenizationResponse:(id)arg2 metadata:(id)arg3;	// IMP=0x00000000000319d1
+ (id)createMatchingSpanEndedLog:(id)arg1 spanMatchResponse:(id)arg2 metadata:(id)arg3;	// IMP=0x0000000000031307
+ (id)createCDMSpanMatcherEndedLog:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000031157
+ (id)createCDMSpanMatcherStartedLog:(id)arg1 matcherName:(int)arg2 metadata:(id)arg3;	// IMP=0x0000000000030fa8
+ (id)createCDMSingleServiceSetupAttemptFailedLog:(int)arg1 retryNumber:(unsigned int)arg2 reason:(int)arg3 metadata:(id)arg4;	// IMP=0x0000000000030e7a
+ (id)createCDMSingleServiceSetupAttemptEndedLog:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000030cca
+ (id)createCDMSingleServiceSetupAttemptStartedLog:(id)arg1 serviceType:(int)arg2 retryNumber:(unsigned int)arg3 metadata:(id)arg4;	// IMP=0x0000000000030b05
+ (id)createCDMAllServicesSetupFailedLog:(id)arg1;	// IMP=0x00000000000309c1
+ (id)createCDMAllServicesSetupEndedLog:(id)arg1;	// IMP=0x000000000003087d
+ (id)createCDMAllServicesSetupStartedLog:(id)arg1;	// IMP=0x0000000000030739
+ (id)createCDMClientSetupFailedLog:(id)arg1 reason:(int)arg2;	// IMP=0x00000000000305f6
+ (id)createCDMClientSetupEndedLog:(id)arg1;	// IMP=0x00000000000304b2
+ (id)createCDMClientSetupStartedLog:(id)arg1;	// IMP=0x000000000003036e
+ (id)createCDMRequestFailedLog:(int)arg1 originalCode:(long long)arg2 metadata:(id)arg3;	// IMP=0x0000000000030215
+ (id)createCDMRequestFailedLog:(int)arg1 metadata:(id)arg2;	// IMP=0x00000000000300d2
+ (id)createCDMRequestEndedLog:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000002fb5f
+ (id)createCDMRequestStartedLog:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000002f893
+ (id)createServiceContextFailedLog:(id)arg1 failureCode:(int)arg2 metadata:(id)arg3;	// IMP=0x000000000002f6e9
+ (id)createServiceContextEndedLog:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000002f53e
+ (id)createServiceContextStartedLog:(id)arg1 serviceName:(int)arg2 metadata:(id)arg3;	// IMP=0x000000000002f394
+ (id)createNLXCurareContext:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000002f233
+ (id)createNLXRequestLinkWithTarget:(int)arg1 andTargetId:(id)arg2 metadata:(id)arg3;	// IMP=0x000000000002f076
+ (id)createNLXClientEventMetadataWithNlId:(id)arg1 andWithResultCandidateId:(id)arg2 andWithRequester:(int *)arg3;	// IMP=0x000000000002ef8d
+ (id)createNLXClientEventMetadataWithNlId:(id)arg1 andWithResultCandidateId:(id)arg2;	// IMP=0x000000000002eea4
+ (void)populateEventsWithMetadata:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000002ed05

@end
