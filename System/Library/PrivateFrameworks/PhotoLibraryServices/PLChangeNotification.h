//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNotification.h>

@class PLChangeNotificationCenter;

@interface PLChangeNotification : NSNotification
{
}

+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000002b39e2
- (void)_calculateDiffs;	// IMP=0x00000000002b3a88
@property(readonly, nonatomic) PLChangeNotificationCenter *changeNotificationCenter;

@end

