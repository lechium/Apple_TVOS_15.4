//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSFairPlayContext : NSObject
{
    unsigned int _contextID;	// 8 = 0x8
}

@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
- (unsigned int)fairplayContextIDWithError:(id *)arg1;	// IMP=0x000000000011f68c
- (void)destroyContext;	// IMP=0x000000000011f574
- (void)dealloc;	// IMP=0x000000000011f536
- (id)init;	// IMP=0x000000000011f394

@end

