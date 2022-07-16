//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class APSEnvironment, NSData, NSString;
@protocol APSTCPStreamDelegate;

@protocol APSTCPStream <NSObject>
+ (_Bool)isKeepAliveProxySupportedOnSomeInterface;
@property(readonly, nonatomic) NSString *streamTaskDebugInfo;
@property(nonatomic) unsigned char ipAddressFamily;
@property(readonly, nonatomic) NSString *serverIPAddress;
@property(readonly, nonatomic) NSString *serverHostname;
@property(readonly, nonatomic) unsigned long long generation;
@property(readonly, copy, nonatomic) NSString *ifname;
@property(nonatomic) _Bool remainsConnectedWhenWWANSuspends;
@property(nonatomic) _Bool isSuspended;
@property(nonatomic) _Bool isConnected;
@property(copy, nonatomic) NSString *cachedIPAddress;
@property(copy, nonatomic) NSString *redirectHostname;
@property(nonatomic) _Bool useAlternatePort;
@property(nonatomic) _Bool forceWWANInterface;
@property(nonatomic) __weak id <APSTCPStreamDelegate> delegate;
- (_Bool)didPushCauseWake;
- (_Bool)isKeepAliveProxyConfigured;
- (_Bool)isKeepAliveProxySupportedOnSocketInterface;
- (void)holdPowerAssertionUntilStreamQuiesces;
- (NSString *)tcpInfoDescription;
- (_Bool)hasErrorStatus;
- (void)writeDataInBackground:(NSData *)arg1;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (id)initWithEnvironment:(APSEnvironment *)arg1;
- (void)close;
- (void)open;
@end

