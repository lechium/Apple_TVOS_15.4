//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BYXPCActivityRegistrar : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000000003506
- (void)unregisterActivityWithIdentifier:(const char *)arg1;	// IMP=0x0000000000003627
- (void)registerActivityWithIdentifier:(const char *)arg1 criteria:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000355b

@end

