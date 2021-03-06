//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCListener.h>

#import <NanoRegistry/NRNSXPCListenerProtocol-Protocol.h>
#import <NanoRegistry/NSXPCListenerDelegate-Protocol.h>

@class NSString;
@protocol NRNSXPCListenerDelegate;

@interface NRNSXPCListener : NSXPCListener <NSXPCListenerDelegate, NRNSXPCListenerProtocol>
{
    id <NRNSXPCListenerDelegate> _listenerDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000047b4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000471b
@property(retain, nonatomic) id <NRNSXPCListenerDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

