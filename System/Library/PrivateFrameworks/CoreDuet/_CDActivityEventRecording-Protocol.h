//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/NSObject-Protocol.h>

@class NSArray, NSUserActivity, _CDUserActivity;

@protocol _CDActivityEventRecording <NSObject>
- (void)recordUserActivityEventForCollection:(_CDUserActivity *)arg1;
- (void)recordUserActivityEvents:(NSArray *)arg1;
- (void)recordUserActivityEvent:(NSUserActivity *)arg1;
@end

