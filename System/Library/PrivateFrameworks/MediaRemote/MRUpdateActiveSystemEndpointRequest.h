//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRUpdateActiveSystemEndpointRequestProtobuf;

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying>
{
    _Bool _pairedDeviceSync;	// 8 = 0x8
    NSString *_outputDeviceUID;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
    long long _changeType;	// 32 = 0x20
    NSString *_clientBundleIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001aedb6
@property(nonatomic, getter=isPairedDeviceSync) _Bool pairedDeviceSync; // @synthesize pairedDeviceSync=_pairedDeviceSync;
@property(copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
- (void)perform:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ae709
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ae58f
- (id)description;	// IMP=0x00000000001ae404
@property(readonly, nonatomic) _MRUpdateActiveSystemEndpointRequestProtobuf *protobuf;
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001ae251
- (id)initWithOutputDeviceUID:(id)arg1 reason:(id)arg2;	// IMP=0x00000000001ae198

@end

