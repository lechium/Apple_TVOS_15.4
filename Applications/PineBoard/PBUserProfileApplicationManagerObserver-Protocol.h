//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSSet, PBUserProfileApplicationManager;

@protocol PBUserProfileApplicationManagerObserver <NSObject>

@optional
- (void)userProfileApplicationManager:(PBUserProfileApplicationManager *)arg1 didUpdateApplicationsWithIdentifiers:(NSSet *)arg2;
- (void)userProfileApplicationManager:(PBUserProfileApplicationManager *)arg1 willUpdateApplicationsWithIdentifiers:(NSSet *)arg2;
@end

