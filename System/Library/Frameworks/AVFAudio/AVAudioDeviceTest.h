//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol AVAudioDeviceTestServiceProtocol;

@interface AVAudioDeviceTest : NSObject
{
    _Bool _processSequenceAsynchronously;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    id <AVAudioDeviceTestServiceProtocol> _serviceDelegateAsync;	// 24 = 0x18
    id <AVAudioDeviceTestServiceProtocol> _serviceDelegateSync;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005b911
@property(retain) id <AVAudioDeviceTestServiceProtocol> serviceDelegateSync; // @synthesize serviceDelegateSync=_serviceDelegateSync;
@property(retain) id <AVAudioDeviceTestServiceProtocol> serviceDelegateAsync; // @synthesize serviceDelegateAsync=_serviceDelegateAsync;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property _Bool processSequenceAsynchronously; // @synthesize processSequenceAsynchronously=_processSequenceAsynchronously;
- (void)dealloc;	// IMP=0x000000000005b7eb
- (void)cancel;	// IMP=0x000000000005b79a
- (void)startWithSequence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005b27d
- (id)init;	// IMP=0x000000000005b269
- (id)initWithXPCEndPoint:(id)arg1;	// IMP=0x000000000005ac83

@end
