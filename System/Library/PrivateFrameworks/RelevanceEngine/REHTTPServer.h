//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REHTTPConnectionDelegate-Protocol.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, REHTTPServerDelegate;

@interface REHTTPServer : NSObject <REHTTPConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct _CFHTTPServer *_server;	// 16 = 0x10
    NSMutableArray *_connections;	// 24 = 0x18
    unsigned short _port;	// 32 = 0x20
    id <REHTTPServerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008cb80
@property(readonly, nonatomic) id <REHTTPServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008ca11
- (void)didCloseConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x000000000008c89d
- (void)didOpenConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x000000000008c7e4
- (void)didRecievedError:(id)arg1;	// IMP=0x000000000008c77d
- (void)invalidated;	// IMP=0x000000000008c5fc
- (_Bool)_valid;	// IMP=0x000000000008c5df
- (void)invalidate;	// IMP=0x000000000008c5af
- (void)dealloc;	// IMP=0x000000000008c571
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;	// IMP=0x000000000008c27c

@end

