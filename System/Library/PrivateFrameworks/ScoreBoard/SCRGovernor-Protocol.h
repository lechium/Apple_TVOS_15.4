//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScoreBoard/NSObject-Protocol.h>

@class NSError, SCRTask, SCRTaskAdministrator;

@protocol SCRGovernor <NSObject>

@optional
- (void)taskAdministrator:(SCRTaskAdministrator *)arg1 didCompleteTask:(SCRTask *)arg2 withError:(NSError *)arg3;
- (void)taskAdministrator:(SCRTaskAdministrator *)arg1 willPerformTask:(SCRTask *)arg2;
- (_Bool)taskAdministrator:(SCRTaskAdministrator *)arg1 isEligibleToPerformTask:(SCRTask *)arg2 eligiblityError:(id *)arg3;
@end

