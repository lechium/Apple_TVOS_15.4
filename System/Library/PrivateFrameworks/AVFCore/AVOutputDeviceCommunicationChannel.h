//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AVOutputDeviceCommunicationChannelDelegate, AVOutputDeviceCommunicationChannelImpl;

@interface AVOutputDeviceCommunicationChannel : NSObject
{
    id <AVOutputDeviceCommunicationChannelImpl> _impl;	// 8 = 0x8
    id <AVOutputDeviceCommunicationChannelDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c3c27
- (void)communicationChannelImplDidClose:(id)arg1;	// IMP=0x00000000000c3aae
- (void)communicationChannelImpl:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000000000c38f6
@property __weak id <AVOutputDeviceCommunicationChannelDelegate> delegate;
- (void)close;	// IMP=0x00000000000c37e9
- (void)sendData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c37d3
- (void)dealloc;	// IMP=0x00000000000c3798
- (id)initWithOutputDeviceCommunicationChannelImpl:(id)arg1;	// IMP=0x00000000000c3716

@end
