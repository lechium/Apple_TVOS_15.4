//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSXPCConnection;

@interface _TVServiceProviderConnection : NSObject
{
    BKSProcessAssertion *_procAssertion;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002000
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) BKSProcessAssertion *procAssertion; // @synthesize procAssertion=_procAssertion;
- (void)invalidate;	// IMP=0x0000000000001eff

@end

