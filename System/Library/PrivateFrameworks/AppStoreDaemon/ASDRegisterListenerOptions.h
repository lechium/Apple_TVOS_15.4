//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSXPCConnection;

@interface ASDRegisterListenerOptions : NSObject <NSSecureCoding>
{
    NSString *_clientID;	// 8 = 0x8
    NSXPCConnection *_endpoint;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000050a17
- (void).cxx_destruct;	// IMP=0x0000000000050c0a
@property(retain, nonatomic) NSXPCConnection *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000050acd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000050a1f

@end

