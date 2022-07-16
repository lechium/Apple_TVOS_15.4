//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_semaphore;

@interface ASFWatchdog : NSObject
{
    NSString *_description;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_sempahore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000fb1e7
- (_Bool)waitWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x00100000000fb081
- (_Bool)waitWithTimeout:(double)arg1;	// IMP=0x00100000000fb06d
- (void)signal;	// IMP=0x00100000000fb05f
- (id)initWithDescription:(id)arg1;	// IMP=0x00100000000fafd2
- (id)init;	// IMP=0x00100000000fafb9

@end
