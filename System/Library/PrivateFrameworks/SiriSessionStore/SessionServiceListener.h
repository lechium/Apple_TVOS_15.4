//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriSessionStore/NSXPCListenerDelegate-Protocol.h>

@class NSString;

@interface SessionServiceListener : NSObject <NSXPCListenerDelegate>
{
}

- (void)setUpSessionStoreListener;	// IMP=0x000000000001111b
- (id)init;	// IMP=0x00000000000110ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

