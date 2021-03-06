//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSDate, NSDictionary;

@protocol HMDEventFlagsStoring <NSObject>
- (NSDate *)lastSaveTime;
- (NSDictionary *)unarchiveEventFlagsPeriods;
- (NSDictionary *)unarchiveEventFlagsValues;
- (void)archiveEventFlagsValues:(NSDictionary *)arg1 withDefinedEventFlagPeriods:(NSDictionary *)arg2;
@end

