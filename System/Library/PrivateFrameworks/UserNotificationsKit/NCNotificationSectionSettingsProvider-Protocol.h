//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsKit/NSObject-Protocol.h>

@class NCNotificationSectionSettings, NSSet, NSString;
@protocol NCNotificationDestination;

@protocol NCNotificationSectionSettingsProvider <NSObject>
- (NCNotificationSectionSettings *)notificationSectionSettingsForDestination:(id <NCNotificationDestination>)arg1 forSectionIdentifier:(NSString *)arg2;
- (NSSet *)notificationSectionSettingsForDestination:(id <NCNotificationDestination>)arg1;
@end

