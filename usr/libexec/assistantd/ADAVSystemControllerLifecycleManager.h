//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADAVSystemControllerLifecycleManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x004000000010c484
- (void)removeObserver:(id)arg1;	// IMP=0x004000000010c524
- (void)addObserver:(id)arg1;	// IMP=0x001000000010c51e
- (void)getAVSystemControllerWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010c508
- (id)init;	// IMP=0x001000000010c4d9

@end
