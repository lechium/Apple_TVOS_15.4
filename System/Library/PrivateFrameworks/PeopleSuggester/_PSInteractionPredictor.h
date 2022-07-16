//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSURL, _CDInteractionStore, _PSKNNModelConfiguration;

@interface _PSInteractionPredictor : NSObject
{
    _CDInteractionStore *_interactionStore;	// 8 = 0x8
    NSDictionary *_currentClusterDictionary;	// 16 = 0x10
    NSDate *_currentArchiveDate;	// 24 = 0x18
    NSMutableDictionary *_conversationIDMap;	// 32 = 0x20
    _PSKNNModelConfiguration *_modelConfiguration;	// 40 = 0x28
    NSURL *_compiledModelURL;	// 48 = 0x30
}

+ (void)deleteArchiveFiles;	// IMP=0x0000000000007fa9
+ (void)deleteArchiveFileAtDate:(id)arg1 modelName:(id)arg2;	// IMP=0x0000000000007e4b
+ (_Bool)cloneAdaptableModelURL:(id)arg1 toFilePathURL:(id)arg2;	// IMP=0x0000000000004be5
+ (_Bool)removeMlmodelcFolderAtPath:(id)arg1;	// IMP=0x0000000000004a74
+ (id)loadModelFromUrl:(id)arg1;	// IMP=0x00000000000016f9
+ (id)getIntermediateModelURLForModelName:(id)arg1;	// IMP=0x000000000000165f
+ (id)getModelURLfromName:(id)arg1;	// IMP=0x00000000000015cf
+ (id)clustersArchiveFileForDate:(id)arg1 modelName:(id)arg2;	// IMP=0x000000000000147e
+ (id)defaultClustersArchiveDirectory;	// IMP=0x0000000000001420
- (void).cxx_destruct;	// IMP=0x0000000000008367
@property(retain, nonatomic) NSURL *compiledModelURL; // @synthesize compiledModelURL=_compiledModelURL;
@property(retain, nonatomic) _PSKNNModelConfiguration *modelConfiguration; // @synthesize modelConfiguration=_modelConfiguration;
@property(retain, nonatomic) NSMutableDictionary *conversationIDMap; // @synthesize conversationIDMap=_conversationIDMap;
@property(retain, nonatomic) NSDate *currentArchiveDate; // @synthesize currentArchiveDate=_currentArchiveDate;
@property(retain, nonatomic) NSDictionary *currentClusterDictionary; // @synthesize currentClusterDictionary=_currentClusterDictionary;
@property(retain, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
- (id)rankedZkwSuggestionsFromPredictionArray:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0000000000007409
- (id)predictAtDate:(id)arg1 usingModelAtURL:(id)arg2 showNumSuggestions:(int)arg3;	// IMP=0x0000000000006460
- (void)trainAtDate:(id)arg1 usingCompiledModelURL:(id)arg2 andSaveToURL:(id)arg3;	// IMP=0x0000000000005bbf
- (void)printModelWeights:(id)arg1;	// IMP=0x0000000000005a97
- (id)createMLArrayProviderFromTrainArray:(id)arg1;	// IMP=0x0000000000004e32
- (id)getClusteringResultsForPoint:(id)arg1 usingClusterDictionary:(id)arg2;	// IMP=0x00000000000045f9
- (id)getRecencyResultsShowingNumValues:(int)arg1 fromTrainArray:(id)arg2;	// IMP=0x00000000000044a4
- (id)getOrMakeClusterDictionaryAtDate:(id)arg1;	// IMP=0x000000000000422e
- (id)getDictionaryFromClustersArchiveAtPath:(id)arg1;	// IMP=0x0000000000004068
- (void)writeClusterArchiveFromClusterDict:(id)arg1 withDate:(id)arg2;	// IMP=0x0000000000003f56
- (void)writeArchive:(id)arg1 toFilePath:(id)arg2;	// IMP=0x0000000000003c0a
- (id)getLastContactedDictionaryFromTrainArray:(id)arg1;	// IMP=0x0000000000003abf
- (double)timeSinceLastContactTo:(id)arg1 FromDate:(id)arg2 inTrainArray:(id)arg3;	// IMP=0x00000000000037f4
- (double)getMinDistanceForPt:(id)arg1 toClusters:(id)arg2;	// IMP=0x0000000000003603
- (id)getClusterDictionaryFromTrainArray:(id)arg1 usingDBSCANParamsMinPts:(int)arg2 andEps:(double)arg3;	// IMP=0x0000000000003303
- (id)convertLogToClusterPointArray:(id)arg1;	// IMP=0x00000000000030fe
- (id)getConversationIDLogFromTrainArray:(id)arg1;	// IMP=0x0000000000002b3c
- (id)getTrainArrayToDate:(id)arg1 withStartDateAnchor:(id)arg2;	// IMP=0x00000000000022f0
- (id)getDateNumDays:(int)arg1 AfterDate:(id)arg2;	// IMP=0x000000000000223e
- (id)initWithInteractionStore:(id)arg1 atDate:(id)arg2 withModelName:(id)arg3 modelConfiguration:(id)arg4;	// IMP=0x00000000000020a4
- (id)findLatestArchiveDateBefore:(id)arg1 modelName:(id)arg2;	// IMP=0x0000000000001bd8
- (id)getConversationIDFromInteraction:(id)arg1;	// IMP=0x000000000000184e

@end

