//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSDescriptionProviding-Protocol.h>
#import <BoardServices/NSCopying-Protocol.h>
#import <BoardServices/NSMutableCopying-Protocol.h>

@class BSObjCProtocol, NSString;

@interface BSServiceInterface : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    NSString *_identifier;	// 8 = 0x8
    BSObjCProtocol *_server;	// 16 = 0x10
    BSObjCProtocol *_client;	// 24 = 0x18
    struct __CFBoolean *_clientWaitsForActivation;	// 32 = 0x20
}

+ (id)interfaceWithServer:(id)arg1 client:(id)arg2;	// IMP=0x00000000000186a6
- (void).cxx_destruct;	// IMP=0x000000000001aea5
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ad99
@property(readonly) unsigned long long hash;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001ab84
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001ab20
- (id)succinctDescriptionBuilder;	// IMP=0x000000000001aa26
- (id)succinctDescription;	// IMP=0x000000000001a9c2
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a987
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a97c
@property(readonly, nonatomic) long long clientMessagingExpectation;
@property(readonly, copy, nonatomic) BSObjCProtocol *client;
@property(readonly, copy, nonatomic) BSObjCProtocol *server;
@property(copy, nonatomic) NSString *identifier;
- (id)init;	// IMP=0x0000000000017b70

// Remaining properties
@property(readonly) Class superclass;

@end

