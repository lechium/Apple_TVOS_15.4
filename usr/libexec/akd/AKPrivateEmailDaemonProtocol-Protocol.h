//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AKPrivateEmailContext, NSString;

@protocol AKPrivateEmailDaemonProtocol <NSObject>
- (void)listAllPrivateEmailsForAltDSID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)removePrivateEmailKey:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)privateEmailListVersionWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)deletePrivateEmailDatabaseWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)getContextForRequestContext:(AKPrivateEmailContext *)arg1 completion:(void (^)(AKPrivateEmailContext *, NSError *))arg2;
- (void)registerPrivateEmailForAltDSID:(NSString *)arg1 withKey:(NSString *)arg2 completion:(void (^)(AKPrivateEmail *, NSError *))arg3;
- (void)fetchPrivateEmailForAltDSID:(NSString *)arg1 withKey:(NSString *)arg2 completion:(void (^)(AKPrivateEmail *, NSError *))arg3;
- (void)lookupPrivateEmailForAltDSID:(NSString *)arg1 withKey:(NSString *)arg2 completion:(void (^)(AKPrivateEmail *, NSError *))arg3;
@end

