//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_endpoint;	// 8 = 0x8
    unsigned long long _customURLHandlerObjectID;	// 16 = 0x10
    unsigned long long _authHandlerObjectID;	// 24 = 0x18
    unsigned long long _contentKeySessionHandlerObjectID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000116a1c
@property(readonly, nonatomic) unsigned long long contentKeySessionHandlerObjectID; // @synthesize contentKeySessionHandlerObjectID=_contentKeySessionHandlerObjectID;
@property(readonly, nonatomic) unsigned long long authHandlerObjectID; // @synthesize authHandlerObjectID=_authHandlerObjectID;
@property(readonly, nonatomic) unsigned long long customURLHandlerObjectID; // @synthesize customURLHandlerObjectID=_customURLHandlerObjectID;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *endpoint; // @synthesize endpoint=_endpoint;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011692f
- (void)dealloc;	// IMP=0x00000000001168f5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000116782
- (id)initWithEndpoint:(id)arg1 customURLHandlerObjectID:(unsigned long long)arg2 authHandlerObjectID:(unsigned long long)arg3 contentKeySessionHandlerObjectID:(unsigned long long)arg4;	// IMP=0x0000000000116712

@end

