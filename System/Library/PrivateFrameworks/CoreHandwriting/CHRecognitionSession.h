//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/CHRecognitionSessionTextInputTaskDelegate-Protocol.h>
#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHRecognitionSessionResult, CHRecognitionSessionVersion, CHStrokeClassificationModel, CHTextInputQuery, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSOrderedSet, NSString;
@protocol CHRecognitionSessionDataSource, CHStrokeProvider, OS_dispatch_queue;

@interface CHRecognitionSession : NSObject <CHRecognitionSessionTextInputTaskDelegate, NSSecureCoding>
{
    CHRecognitionSessionResult *_lastRecognitionResult;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    id <CHStrokeProvider> _latestStrokeProvider;	// 24 = 0x18
    NSOrderedSet *_latestStrokeProviderVisibleStrokes;	// 32 = 0x20
    CHTextInputQuery *_activeTextInputQuery;	// 40 = 0x28
    _Bool _strokeGroupingOnly;	// 48 = 0x30
    CHRecognitionSessionResult *_cachedFastGroupingRecognitionResult;	// 56 = 0x38
    CHRecognitionSessionResult *_partialRecognitionResult;	// 64 = 0x40
    int _autoCapitalizationMode;	// 72 = 0x48
    int _autoCorrectionMode;	// 76 = 0x4c
    CHRecognitionSessionVersion *_sessionVersion;	// 80 = 0x50
    _Bool __hasUnprocessedChanges;	// 88 = 0x58
    _Bool __shouldForceFastGrouping;	// 89 = 0x59
    unsigned int __taskQueueQoSClass;	// 92 = 0x5c
    long long _mode;	// 96 = 0x60
    NSArray *_preferredLocales;	// 104 = 0x68
    id <CHRecognitionSessionDataSource> _dataSource;	// 112 = 0x70
    long long _recognitionEnvironment;	// 120 = 0x78
    long long _priority;	// 128 = 0x80
    NSArray *__textRecognitionLocales;	// 136 = 0x88
    NSMutableDictionary *__recognizersByLocaleID;	// 144 = 0x90
    NSArray *__latestTextInputTargets;	// 152 = 0x98
    NSMutableDictionary *__correctionRecognizersByLocalesKey;	// 160 = 0xa0
    unsigned long long __changeCoalescingIndex;	// 168 = 0xa8
    NSMutableArray *__changeObservers;	// 176 = 0xb0
    NSMutableArray *__inputDrawingClients;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *__tasksWorkQueue;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *__sessionQueue;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *__highResponsivenessQueue;	// 208 = 0xd0
    NSMutableArray *__activeTasks;	// 216 = 0xd8
    CHStrokeClassificationModel *_strokeClassificationModel;	// 224 = 0xe0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012f210
+ (id)_cacheKeyForLocales:(id)arg1;	// IMP=0x000000000012e5c0
+ (_Bool)isLocaleSupported:(id)arg1;	// IMP=0x000000000012ac90
+ (id)createRecognizerForLocales:(id)arg1 sessionMode:(long long)arg2 remote:(_Bool)arg3 priority:(long long)arg4;	// IMP=0x000000000012f6b0
+ (id)createRecognizerForLocale:(id)arg1 sessionMode:(long long)arg2 remote:(_Bool)arg3 priority:(long long)arg4;	// IMP=0x000000000012f550
+ (id)_strokeGroupsInProximityOfSubjectStrokeGroups:(id)arg1 clusteredStrokeGroups:(id)arg2;	// IMP=0x0000000000134520
+ (id)strokeIdentifiersInProximalGroupsForStrokeIdentifiers:(id)arg1 sortedStrokeGroups:(id)arg2 clusteredStrokeGroups:(id)arg3 unusedStrokeIdentifiers:(id *)arg4;	// IMP=0x0000000000133fb0
+ (id)effectiveLocalesFromLocales:(id)arg1;	// IMP=0x0000000000130af0
- (void).cxx_destruct;	// IMP=0x000000000012f3e0
@property(setter=_setShouldForceFastGrouping:) _Bool _shouldForceFastGrouping; // @synthesize _shouldForceFastGrouping=__shouldForceFastGrouping;
@property(readonly, nonatomic) CHStrokeClassificationModel *strokeClassificationModel; // @synthesize strokeClassificationModel=_strokeClassificationModel;
@property(readonly, nonatomic) NSMutableArray *_activeTasks; // @synthesize _activeTasks=__activeTasks;
@property(readonly, nonatomic) unsigned int _taskQueueQoSClass; // @synthesize _taskQueueQoSClass=__taskQueueQoSClass;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_highResponsivenessQueue; // @synthesize _highResponsivenessQueue=__highResponsivenessQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_sessionQueue; // @synthesize _sessionQueue=__sessionQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_tasksWorkQueue; // @synthesize _tasksWorkQueue=__tasksWorkQueue;
@property(readonly, nonatomic) NSMutableArray *_inputDrawingClients; // @synthesize _inputDrawingClients=__inputDrawingClients;
@property(readonly, nonatomic) NSMutableArray *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property(nonatomic) unsigned long long _changeCoalescingIndex; // @synthesize _changeCoalescingIndex=__changeCoalescingIndex;
@property(readonly, nonatomic) NSMutableDictionary *_correctionRecognizersByLocalesKey; // @synthesize _correctionRecognizersByLocalesKey=__correctionRecognizersByLocalesKey;
@property(retain, setter=_setLatestTextInputTargets:) NSArray *_latestTextInputTargets; // @synthesize _latestTextInputTargets=__latestTextInputTargets;
@property(readonly, nonatomic) NSMutableDictionary *_recognizersByLocaleID; // @synthesize _recognizersByLocaleID=__recognizersByLocaleID;
@property(nonatomic, setter=_setHasUnprocessedChanges:) _Bool _hasUnprocessedChanges; // @synthesize _hasUnprocessedChanges=__hasUnprocessedChanges;
@property(copy, nonatomic, setter=_setTextRecognitionLocales:) NSArray *_textRecognitionLocales; // @synthesize _textRecognitionLocales=__textRecognitionLocales;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long recognitionEnvironment; // @synthesize recognitionEnvironment=_recognitionEnvironment;
@property(nonatomic) id <CHRecognitionSessionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSArray *preferredLocales; // @synthesize preferredLocales=_preferredLocales;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012ec30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012e940
- (_Bool)_shouldRunRecognitionLocally;	// IMP=0x000000000012e920
- (_Bool)loadSessionData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012e810
@property(readonly, nonatomic) NSData *sessionData;
- (void)_cleanupCachedRecognizers;	// IMP=0x000000000012e010
- (id)textCorrectionRecognizerForLocales:(id)arg1;	// IMP=0x000000000012dc20
- (id)recognizerForLocale:(id)arg1;	// IMP=0x000000000012d730
- (id)_newRecognitionSessionTaskWithStrokeGroupingRequirement:(long long)arg1 isHighResponsivenessTask:(_Bool)arg2 strokeGroupingOnly:(_Bool)arg3 subjectStrokeIdentifiers:(id)arg4 partialResultBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000012d440
- (void)_processPendingStrokeChangesIfAvailable;	// IMP=0x000000000012c5c0
- (void)_scheduleProcessStrokeProviderChangesImmediately:(_Bool)arg1;	// IMP=0x000000000012c400
- (double)_preferredCoalescingInterval;	// IMP=0x000000000012c1a0
- (_Bool)_isReadyToProcessChanges;	// IMP=0x000000000012c170
- (void)rebuildRecognitionResults;	// IMP=0x000000000012b7b0
- (void)_cancelAllHighResponsivenessTasks;	// IMP=0x000000000012b570
- (void)_cancelOngoingRequests;	// IMP=0x000000000012b2a0
- (void)cancelOngoingRequests;	// IMP=0x000000000012b200
- (void)setNeedsRecognitionUpdate;	// IMP=0x000000000012ad50
- (id)indexableContent;	// IMP=0x000000000012acb0
- (_Bool)_hasPendingRecognitionTasks;	// IMP=0x000000000012ac30
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000012a9b0
@property(nonatomic, setter=_setStatus:) long long status;
- (void)_updateRecognitionSessionStatus;	// IMP=0x000000000012a880
@property(nonatomic) __weak CHTextInputQuery *activeTextInputQuery;
- (void)_invalidateCachedResults;	// IMP=0x000000000012a700
- (void)_updateLatestStrokeProviderVisibleStrokes;	// IMP=0x000000000012a5a0
@property(retain, setter=_setLatestStrokeProvider:) id <CHStrokeProvider> latestStrokeProvider;
- (void)_setPartialRecognitionResult:(id)arg1;	// IMP=0x000000000012a3d0
- (void)_setCachedFastGroupingRecognitionResult:(id)arg1;	// IMP=0x000000000012a380
@property(retain, setter=_setLastRecognitionResult:) CHRecognitionSessionResult *lastRecognitionResult;
- (id)_cachedClutterFilter;	// IMP=0x000000000012a290
- (id)_cachedFastGroupingResult;	// IMP=0x000000000012a1f0
- (_Bool)_validateLastRecognitionResult:(id)arg1 visibleStrokeIdentifiers:(id)arg2;	// IMP=0x000000000012a030
@property(copy, nonatomic) NSArray *locales;
@property(retain, setter=_setSessionVersion:) CHRecognitionSessionVersion *sessionVersion;
- (void)dealloc;	// IMP=0x0000000000129810
- (void)_setupExecutionQueuesForMode:(long long)arg1;	// IMP=0x0000000000129410
- (id)initWithMode:(long long)arg1 recognitionSessionResult:(id)arg2 dataSource:(id)arg3;	// IMP=0x00000000001292f0
- (id)init;	// IMP=0x00000000001292d0
- (id)initWithMode:(long long)arg1;	// IMP=0x0000000000129130
- (void)unregisterChangeObserver:(id)arg1;	// IMP=0x0000000000130830
- (void)registerChangeObserver:(id)arg1;	// IMP=0x00000000001306f0
- (id)recognizableDrawingForStrokeGroupQueryItem:(id)arg1;	// IMP=0x0000000000130290
@property(nonatomic) int autoCorrectionMode;
@property(nonatomic) int autoCapitalizationMode;
@property(nonatomic) _Bool strokeGroupingOnly;
- (struct CGSize)_drawingCanvasSizeForLatestStrokeProviderSnapshot;	// IMP=0x00000000001361d0
- (id)contextualTextResultsForContextStrokes:(id)arg1 completion:(CDUnknownBlockType)arg2 shouldCancel:(CDUnknownBlockType)arg3;	// IMP=0x0000000000135dc0
- (id)_recognitionSessionResultOnDemandUsingContextStrokes:(id)arg1 shouldCancel:(CDUnknownBlockType)arg2;	// IMP=0x0000000000135b50
- (id)_contextualTextResultsFromCachedResultUsingContextStrokes:(id)arg1 shouldCancel:(CDUnknownBlockType)arg2;	// IMP=0x00000000001358f0
- (id)_strokeIdentifiersFromCachedResultUsingContextStrokes:(id)arg1 tokenizationLevel:(long long)arg2;	// IMP=0x0000000000135770
- (id)_strokeIdentifiersInWordsContainingStrokeIdentifiers:(id)arg1;	// IMP=0x0000000000134880
- (id)_strokeIdentifiersInProximalGroupsForStrokeIdentifiers:(id)arg1;	// IMP=0x0000000000133a90
- (id)_strokeIdentifiersInGroupsContainingStrokeIdentifiers:(id)arg1;	// IMP=0x0000000000133730
- (id)_strokeGroupsContainingStrokeIdentifiers:(id)arg1;	// IMP=0x0000000000133430
- (id)tokenStrokeIdentifiersForContextStrokes:(id)arg1 point:(struct CGPoint)arg2 tokenizationLevel:(long long)arg3 completion:(CDUnknownBlockType)arg4 shouldCancel:(CDUnknownBlockType)arg5;	// IMP=0x0000000000131790
- (void)unregisterInputDrawingClient:(id)arg1;	// IMP=0x0000000000131480
- (void)registerInputDrawingClient:(id)arg1;	// IMP=0x0000000000131240
- (id)lastRecognitionResultWaitingForPendingTasks;	// IMP=0x0000000000131210
- (void)waitForPendingRecognitionTasks;	// IMP=0x0000000000130fe0
@property(nonatomic) _Bool shouldForceFastGrouping;
- (id)initWithMode:(long long)arg1 withVersion:(id)arg2;	// IMP=0x0000000000130a40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
