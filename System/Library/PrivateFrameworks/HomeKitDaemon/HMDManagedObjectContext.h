//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

#import <HomeKitDaemon/HMFAsyncContext-Protocol.h>

@interface HMDManagedObjectContext : NSManagedObjectContext <HMFAsyncContext>
{
}

- (_Bool)save:(id *)arg1;	// IMP=0x000000000029da64
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000000029d9c1
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000029d91e
- (void)assertIsExecuting;	// IMP=0x000000000029d90c

@end

