//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPActivitySessionEvent, NSArray, TUConversationActivity;

@protocol CPActivitySessionXPCHost
- (void)requestForegroundPresentation;
- (void)presentSessionDismissalAlertWithAllowingCancellation:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (void)updateActivityWithActivity:(TUConversationActivity *)arg1;
- (void)requestEncryptionKeysFor:(NSArray *)arg1;
- (void)postEventWithEvent:(CPActivitySessionEvent *)arg1;
- (void)end;
- (void)leaveWithCompletion:(void (^)(NSError *))arg1;
- (void)joinWithCompletion:(void (^)(id <CPDataCryptor>, NSError *))arg1;
@end

