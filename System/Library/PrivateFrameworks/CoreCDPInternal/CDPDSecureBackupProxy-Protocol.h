//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPContext, NSDictionary, NSString;

@protocol CDPDSecureBackupProxy <NSObject>
@property(retain, nonatomic) CDPContext *cdpContext;
- (void)canUpdateDataPrivacyStatusWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)dataPrivacyStatusWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
- (void)setDataPrivacyEnabled:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)recoveryKeyAvailabilityWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)uncacheAllSecrets;
- (void)cacheRecoveryKey:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)enableWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)disableWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (NSDictionary *)recoverWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)enableWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)disableWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (NSDictionary *)accountInfoWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (id)initWithContext:(CDPContext *)arg1;
@end

