//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RERemoteTrainingServerInterface-Protocol.h>

@class NSString, NSXPCConnection;

@interface RERemoteTrainingServer : NSObject <RERemoteTrainingServerInterface>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSString *_processName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000088e83
- (void)performTrainingWithElements:(id)arg1 events:(id)arg2 interactions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000088cba
- (void)updateRemoteAttribute:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000088b1c
- (void)_clearConnection;	// IMP=0x0000000000088b02
- (void)_queue_setupConnectionIfNeeded;	// IMP=0x0000000000088868
- (id)initWithTargetProcessName:(id)arg1;	// IMP=0x00000000000887f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

