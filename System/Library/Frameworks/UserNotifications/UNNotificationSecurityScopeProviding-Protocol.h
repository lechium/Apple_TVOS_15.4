//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotifications/NSObject-Protocol.h>

@class NSString;

@protocol UNNotificationSecurityScopeProviding <NSObject>
- (void)leaveSecurityScope;
- (void)enterSecurityScope;
- (void)removeSecurityScope;
- (void)addSecurityScope:(NSString *)arg1;
@end

