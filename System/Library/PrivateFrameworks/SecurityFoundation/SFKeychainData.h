//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData, SFKeychainDataAttributes;

@interface SFKeychainData : NSObject <NSCopying, NSSecureCoding>
{
    id _keychainDataInternal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ef13
- (void).cxx_destruct;	// IMP=0x000000000000f082
@property(retain, nonatomic) SFKeychainDataAttributes *attributes;
@property(readonly) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000efea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000efe4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000efb5
- (id)initWithData:(id)arg1;	// IMP=0x000000000000ef1b

@end

