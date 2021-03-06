//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@interface IDSSockAddrWrapper : NSObject <NSCopying>
{
    struct sockaddr_storage _sa;	// 8 = 0x8
}

+ (id)wrapperWithWrapper:(id)arg1 andPortHostOrder:(unsigned short)arg2;	// IMP=0x000000000009d88e
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2;	// IMP=0x000000000009d65f
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 withInterfaceName:(id)arg3;	// IMP=0x000000000009d4fe
+ (id)wrapperWithSockAddr:(const struct sockaddr *)arg1;	// IMP=0x000000000009d4c8
- (void)updateLocalPort:(unsigned short)arg1;	// IMP=0x000000000009dcef
- (void)copySockAddr:(struct sockaddr *)arg1;	// IMP=0x000000000009dcd6
- (unsigned long long)hash;	// IMP=0x000000000009dbcb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009db64
- (id)ipString;	// IMP=0x000000000009da66
- (id)ipData;	// IMP=0x000000000009d9f4
- (_Bool)isEqualToWrapper:(id)arg1;	// IMP=0x000000000009d9be
- (_Bool)isEqualToSockAddr:(const struct sockaddr *)arg1;	// IMP=0x000000000009d96b
@property(readonly, nonatomic) unsigned short saPortHostOrder;
@property(readonly, nonatomic) const struct sockaddr_in6 *sa6;
@property(readonly, nonatomic) const struct sockaddr_in *sa4;
@property(readonly, nonatomic) const struct sockaddr *sa;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009d883
- (id)description;	// IMP=0x000000000009d701
- (id)initWithSockAddr:(const struct sockaddr *)arg1;	// IMP=0x000000000009d67b

@end

