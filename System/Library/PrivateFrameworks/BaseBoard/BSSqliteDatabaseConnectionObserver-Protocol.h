//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/NSObject-Protocol.h>

@class BSSqliteDatabaseConnection;

@protocol BSSqliteDatabaseConnectionObserver <NSObject>

@optional
- (void)sqliteDatabaseConnectionWillClose:(BSSqliteDatabaseConnection *)arg1;
@end

