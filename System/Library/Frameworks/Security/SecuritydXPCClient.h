//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SecuritydXPCClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (void)configureSecuritydXPCProtocol:(id)arg1;	// IMP=0x000000000001a1e5
- (void).cxx_destruct;	// IMP=0x000000000001a1d5
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)init;	// IMP=0x0000000000019fef

@end

