//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcuts/NSObject-Protocol.h>

@class FPItem, FPSandboxingURLWrapper, INShortcut, NSArray, NSData, NSDictionary, NSString, VCSleepWorkflow, WFContextualActionContext, WFDatabaseObjectDescriptor, WFOnScreenContentServiceOptions, WFRemoteImageDrawingContext, WFResultQuery, WFSpringBoardWebClipMetadata, WFWorkflowReference, WFWorkflowRunRequest, WFWorkflowRunningContext;

@protocol VCVoiceShortcutManagerXPCInterface <NSObject>
- (void)getRunningWorkflowNamesAndProgressCompletedWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setPerWorkflowStateData:(NSData *)arg1 forSmartPromptWithActionUUID:(NSString *)arg2 reference:(WFWorkflowReference *)arg3 completion:(void (^)(NSError *))arg4;
- (void)fetchURLForFPItem:(FPItem *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)createBookmarkWithBookmarkableString:(NSString *)arg1 path:(NSString *)arg2 workflowID:(NSString *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)createBookmarkWithURL:(FPSandboxingURLWrapper *)arg1 workflowID:(NSString *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)resolveCrossDeviceItemID:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)resolveBookmarkData:(NSData *)arg1 completion:(void (^)(FPSandboxingURLWrapper *, NSData *, NSError *))arg2;
- (void)resolveFilePath:(NSString *)arg1 workflowID:(NSString *)arg2 completion:(void (^)(FPSandboxingURLWrapper *, NSError *))arg3;
- (void)computeFinderResizedSizesForImages:(NSArray *)arg1 inSizes:(NSArray *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)filterContextualActions:(NSArray *)arg1 forContext:(WFContextualActionContext *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)getContextualActionsForContext:(WFContextualActionContext *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)showSingleStepCompletionForWebClip:(WFSpringBoardWebClipMetadata *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getFirstUnsortedWorkflowWithCompletion:(void (^)(WFWorkflowDescriptor *, NSNumber *, NSError *))arg1;
- (void)drawGlyphs:(NSArray *)arg1 withBackgroundColorValues:(NSArray *)arg2 padding:(double)arg3 intoContext:(WFRemoteImageDrawingContext *)arg4 completion:(void (^)(void))arg5;
- (void)getAccessibilityWorkflowWithIdentifier:(NSString *)arg1 completion:(void (^)(WFAccessibilityWorkflow *, NSError *))arg2;
- (void)getAccessibilityWorkflowsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)deleteSleepWorkflowWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)getSleepActionSuggestionsForAllAppsWithOptions:(unsigned long long)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(NSString *)arg1 options:(unsigned long long)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)getSleepActionSuggestionsForAllAppsFilteringBySleep:(_Bool)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(NSString *)arg1 shouldFilterBySleep:(_Bool)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)createSleepWorkflow:(VCSleepWorkflow *)arg1 completion:(void (^)(VCConfiguredSleepWorkflow *, NSError *))arg2;
- (void)resetDefaultShortcutFlagsWithCompletion:(void (^)(NSError *))arg1;
- (void)addDefaultShortcutsIfNecessaryWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)getValueForDescriptor:(WFDatabaseObjectDescriptor *)arg1 resultClassName:(NSString *)arg2 completion:(void (^)(WFDatabaseObjectDescriptor *, NSError *))arg3;
- (void)getResultsForQuery:(WFResultQuery *)arg1 resultClassName:(NSString *)arg2 completion:(void (^)(NSArray *, WFCoreDataResultState *, NSError *))arg3;
- (void)sendAceCommandDictionary:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)createShortcutWithRecordData:(NSData *)arg1 name:(NSString *)arg2 shortcutSource:(NSString *)arg3 completion:(void (^)(VCVoiceShortcut *, NSError *))arg4;
- (void)obliterateShortcuts:(void (^)(NSError *))arg1;
- (void)hasRunEventsInTheLast5DaysWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)getOnScreenContentWithOptions:(WFOnScreenContentServiceOptions *)arg1 completionHandler:(void (^)(WFOnScreenContentNode *, NSError *))arg2;
- (void)getOnScreenContentWithOptions:(WFOnScreenContentServiceOptions *)arg1 completion:(void (^)(WFOnScreenContent *, NSError *))arg2;
- (void)stopRunningWorkflowWithRunningContext:(WFWorkflowRunningContext *)arg1;
- (void)resumeWorkflowFromContext:(WFWorkflowRunningContext *)arg1 withRequest:(WFWorkflowRunRequest *)arg2 completion:(void (^)(WFWorkflowRunResult *))arg3;
- (void)resumeWorkflowFromContext:(WFWorkflowRunningContext *)arg1 presentationMode:(unsigned long long)arg2 completion:(void (^)(WFWorkflowRunResult *))arg3;
- (void)runWorkflowWithRequest:(WFWorkflowRunRequest *)arg1 context:(WFWorkflowRunningContext *)arg2 completion:(void (^)(WFWorkflowRunResult *))arg3;
- (void)deleteTriggerWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)checkTriggerStateWithKeyPath:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)checkTriggerStateWithIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)fireTriggerWithIdentifier:(NSString *)arg1 force:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)unregisterTriggerWithIdentifier:(NSString *)arg1 triggerBacking:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)refreshTriggerWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)getSiriPodcastsDatabaseURLWithCompletion:(void (^)(NSSecurityScopedURLWrapper *, NSError *))arg1;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2 inDomain:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)generateSingleUseTokenForWorkflowIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(NSArray *)arg1 hostBundleIdentifier:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)setShortcutSuggestions:(NSArray *)arg1 forAppWithBundleIdentifier:(NSString *)arg2;
- (void)requestDataMigration:(void (^)(_Bool, NSError *))arg1;
- (void)deleteVoiceShortcutWithIdentifier:(NSString *)arg1 name:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)updateVoiceShortcutWithIdentifier:(NSString *)arg1 phrase:(NSString *)arg2 shortcut:(INShortcut *)arg3 completion:(void (^)(VCVoiceShortcut *, NSError *))arg4;
- (void)addVoiceShortcut:(INShortcut *)arg1 phrase:(NSString *)arg2 completion:(void (^)(VCVoiceShortcut *, NSError *))arg3;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getVoiceShortcutsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)getVoiceShortcutWithPhrase:(NSString *)arg1 completion:(void (^)(VCVoiceShortcut *, NSError *))arg2;
- (void)getVoiceShortcutWithIdentifier:(NSString *)arg1 completion:(void (^)(VCVoiceShortcut *, NSError *))arg2;
- (void)getNumberOfVoiceShortcutsWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
@end

