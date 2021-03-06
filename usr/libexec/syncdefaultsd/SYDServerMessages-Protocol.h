//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SYDMessage;

@protocol SYDServerMessages
- (void)setDefaultsConfigWithMessage:(SYDMessage *)arg1;
- (void)printDebugDescriptionWithMessage:(SYDMessage *)arg1;
- (void)passwordChangeWithMessage:(SYDMessage *)arg1;
- (void)accountChangeWithMessage:(SYDMessage *)arg1;
- (void)pingWithMessage:(SYDMessage *)arg1;
- (void)getConfigurationWithMessage:(SYDMessage *)arg1;
- (void)discardJournalEntriesWithMessage:(SYDMessage *)arg1;
- (void)trackSynchronizeRemoteWithMessage:(SYDMessage *)arg1;
- (void)synchronizeRemoteWithMessage:(SYDMessage *)arg1;
- (void)unregisterWithMessage:(SYDMessage *)arg1;
- (void)registerWithMessage:(SYDMessage *)arg1;
- (void)synchronizeWithMessage:(SYDMessage *)arg1;
@end

