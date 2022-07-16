//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/SHSheetHostServiceInterface-Protocol.h>

@class NSExtension, SHSheetActivityPerformer, SHSheetActivityPerformerResult, SHSheetContext, UIActivity, UISUIActivityExtensionItemDataRequest;
@protocol SHSheetMainInteractorDelegate, SHSheetSessionInterface, SHSheetUIPeopleSuggestion;

@protocol SHSheetMainInteractorInterface <SHSheetHostServiceInterface>
@property(readonly, nonatomic) _Bool hasSessionStarted;
@property(readonly, nonatomic) SHSheetActivityPerformer *activityPerformer;
@property(readonly, nonatomic) id <SHSheetSessionInterface> session;
@property(nonatomic) __weak id <SHSheetMainInteractorDelegate> delegate;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)preheatActivitiesIfNeeded;
- (void)clearActivityForResult:(SHSheetActivityPerformerResult *)arg1;
- (void)performActivityWithRequest:(UISUIActivityExtensionItemDataRequest *)arg1 forExtension:(NSExtension *)arg2 completion:(void (^)(UISUIActivityExtensionItemData *))arg3;
- (void)performPeopleSuggestion:(id <SHSheetUIPeopleSuggestion>)arg1;
- (void)performActivity:(UIActivity *)arg1;
- (void)requestSessionConfigurationUpdateAsynchronously:(_Bool)arg1;
- (void)stopSession;
- (void)startSession;
- (void)updateSessionWithContext:(SHSheetContext *)arg1;
@end

