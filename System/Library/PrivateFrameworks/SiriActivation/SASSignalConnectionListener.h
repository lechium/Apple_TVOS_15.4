//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriActivation/BSServiceConnectionListenerDelegate-Protocol.h>

@class BSServiceConnectionListener, NSString;

@interface SASSignalConnectionListener : NSObject <BSServiceConnectionListenerDelegate>
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
}

+ (id)new;	// IMP=0x00000000000318e4
+ (id)listener;	// IMP=0x0000000000031871
- (void).cxx_destruct;	// IMP=0x0000000000031c2a
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000031b05
- (id)_init;	// IMP=0x00000000000318ec
- (id)init;	// IMP=0x00000000000318d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
