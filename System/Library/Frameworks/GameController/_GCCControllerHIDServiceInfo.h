//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSCopying-Protocol.h>
#import <GameController/_GCImplicitIPCObject-Protocol.h>

@class NSData, NSNumber, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface _GCCControllerHIDServiceInfo : NSObject <_GCImplicitIPCObject, NSCopying>
{
    struct __IOHIDServiceClient *_service;	// 8 = 0x8
    NSNumber *_registryID;	// 16 = 0x10
    NSData *_inputData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006b483
@property(readonly, nonatomic) NSNumber *registryID; // @synthesize registryID=_registryID;
@property(readonly, nonatomic) struct __IOHIDServiceClient *service; // @synthesize service=_service;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier;
@property(readonly, copy) NSString *debugDescription;
- (id)redactedDescription;	// IMP=0x000000000006b3ae
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006b2d6
- (_Bool)isEqualToHIDServiceInfo:(id)arg1;	// IMP=0x000000000006b27f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006b1f3
- (void)dealloc;	// IMP=0x000000000006b1b1
- (id)init;	// IMP=0x000000000006b18e
- (id)initWithService:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000006b0a4
- (id)name;	// IMP=0x000000000006b55e
@property(retain, nonatomic) NSData *inputData;

// Remaining properties
@property(readonly) Class superclass;

@end

