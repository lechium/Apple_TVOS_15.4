//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface XPCClient : NSObject
{
    int _processID;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000b1fa
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) int processID; // @synthesize processID=_processID;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000000b138

@end

