//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSClientChannelManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0040000000057c40
- (_Bool)unregisterClientChannelDestination:(id)arg1;	// IMP=0x0040000000057d20
- (_Bool)registerClientChannelDestination:(id)arg1 connectHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057cb0
- (id)initForTesting;	// IMP=0x0010000000057c80
- (id)init;	// IMP=0x0010000000057c50

@end

