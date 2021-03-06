//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface GEOResourceManifestUpdateAssertion : NSObject
{
    NSString *_reason;	// 8 = 0x8
    double _creationTimestamp;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
    int _notifyToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000a3db43
- (void)_connectToGeod;	// IMP=0x0000000000a3dabc
- (id)debugDescription;	// IMP=0x0000000000a3da7b
- (void)dealloc;	// IMP=0x0000000000a3da39
- (id)initWithReason:(id)arg1;	// IMP=0x0000000000a3d808
- (id)init;	// IMP=0x0000000000a3d7de

@end

