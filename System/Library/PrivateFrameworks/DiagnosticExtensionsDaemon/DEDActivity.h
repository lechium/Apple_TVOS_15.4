//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_activity;

@interface DEDActivity : NSObject
{
    NSObject<OS_os_activity> *_cleanup;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000000c2dd
- (void).cxx_destruct;	// IMP=0x000000000000c432
@property(retain) NSObject<OS_os_activity> *cleanup; // @synthesize cleanup=_cleanup;
- (id)currentCleanupActivity;	// IMP=0x000000000000c39e
- (id)newCleanupActivity;	// IMP=0x000000000000c332

@end

