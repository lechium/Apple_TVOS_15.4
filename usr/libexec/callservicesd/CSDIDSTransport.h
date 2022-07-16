//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDestination, IDSDevice, NSString;

@interface CSDIDSTransport : NSObject
{
    int _type;	// 8 = 0x8
    int _socket;	// 12 = 0xc
    NSString *_destination;	// 16 = 0x10
    unsigned long long _initialLinkType;	// 24 = 0x18
    IDSDestination *_remoteDestination;	// 32 = 0x20
    IDSDevice *_remoteDevice;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000019989d
@property(retain, nonatomic) IDSDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(retain, nonatomic) IDSDestination *remoteDestination; // @synthesize remoteDestination=_remoteDestination;
@property(nonatomic) unsigned long long initialLinkType; // @synthesize initialLinkType=_initialLinkType;
@property(readonly, copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) int socket; // @synthesize socket=_socket;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001996d1
- (unsigned long long)hash;	// IMP=0x00100000001995bb
- (_Bool)isEqualToTransport:(id)arg1;	// IMP=0x00100000001993ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019935d
- (id)description;	// IMP=0x0010000000199130
- (id)initWithDestination:(id)arg1;	// IMP=0x00100000001990b7
- (id)initWithSocket:(int)arg1;	// IMP=0x0010000000199075

@end
