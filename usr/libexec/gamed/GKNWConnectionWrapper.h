//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NWConnection;
@protocol GKNWConnectionWrapperDelegate, OS_dispatch_queue;

@interface GKNWConnectionWrapper : NSObject
{
    id <GKNWConnectionWrapperDelegate> _delegate;	// 8 = 0x8
    NWConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_writeQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000f1a47
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NWConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <GKNWConnectionWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelConnection;	// IMP=0x00100000000f19ad
- (void)readData;	// IMP=0x00100000000f19a7
- (void)_sendData:(id)arg1;	// IMP=0x00100000000f19a1
- (_Bool)sendData:(id)arg1;	// IMP=0x00100000000f193e
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000f173e
- (void)dealloc;	// IMP=0x00100000000f16a1
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x00100000000f15b9

@end

