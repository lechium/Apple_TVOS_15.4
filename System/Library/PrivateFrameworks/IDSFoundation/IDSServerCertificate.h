//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@class NSData;

@interface IDSServerCertificate : NSObject <NSCopying>
{
    NSData *_dataRepresentation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008e47a
@property(readonly, nonatomic) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008e465
- (unsigned long long)hash;	// IMP=0x000000000008e421
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008e374
- (id)description;	// IMP=0x000000000008e2df
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x000000000008e26c

@end
