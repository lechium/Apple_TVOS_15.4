//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MSPowerBudget, NSDictionary;

@protocol MSPowerBudgetDelegate <NSObject>
- (void)MSPowerBudgetGotSignificantEvent:(MSPowerBudget *)arg1;
- (void)MSPowerBudget:(MSPowerBudget *)arg1 didRequestStorageOfPersistedValues:(NSDictionary *)arg2;
- (NSDictionary *)MSPowerBudgetDidRequestPersistedValues:(MSPowerBudget *)arg1;
@end

