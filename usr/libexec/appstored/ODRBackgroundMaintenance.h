//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TaskQueue;

@interface ODRBackgroundMaintenance : NSObject
{
    TaskQueue *_maintenanceQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000003cb7
- (void).cxx_destruct;	// IMP=0x0020000000003f98
- (void)startBackgroundMaintenanceOperations;	// IMP=0x0010000000003ea5
- (void)cancelBackgroundMaintenanceOperations;	// IMP=0x0010000000003d7a
- (id)init;	// IMP=0x0010000000003d0c

@end
