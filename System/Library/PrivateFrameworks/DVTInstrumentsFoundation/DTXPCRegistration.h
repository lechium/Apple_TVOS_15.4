//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface DTXPCRegistration : NSObject
{
    NSString *_serviceIdentifier;	// 8 = 0x8
    CDUnknownBlockType _oneshotHandler;	// 16 = 0x10
    id _client;	// 24 = 0x18
    id _pkHandle;	// 32 = 0x20
    NSObject<OS_xpc_object> *_xpcObject;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000050941
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcObject; // @synthesize xpcObject=_xpcObject;
@property(retain, nonatomic) id pkHandle; // @synthesize pkHandle=_pkHandle;
@property(retain, nonatomic) id client; // @synthesize client=_client;
@property(copy, nonatomic) CDUnknownBlockType oneshotHandler; // @synthesize oneshotHandler=_oneshotHandler;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;

@end

