//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPeripheralServices/TVPSServerInterface-Protocol.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface TVPSAgentProxy : NSObject <TVPSServerInterface>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005e10
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_setupConnection;	// IMP=0x0000000000005a90
- (void)_resetConnection;	// IMP=0x0000000000005a50
- (void)_interrupted;	// IMP=0x00000000000059b0
- (void)_invalidated;	// IMP=0x0000000000005870
- (void)endSuppressingPeripheralHUDWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000005810
- (void)beginSuppressingPeripheralHUDWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000057b0
- (void)shouldConnectToAudioDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005630
- (id)init;	// IMP=0x0000000000005590

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
