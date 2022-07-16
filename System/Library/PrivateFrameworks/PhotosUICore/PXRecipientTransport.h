//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString;

@interface PXRecipientTransport : NSObject <NSCopying>
{
    NSString *_address;	// 8 = 0x8
    long long _addressKind;	// 16 = 0x10
}

+ (id)new;	// IMP=0x000000000017857f
- (void).cxx_destruct;	// IMP=0x000000000017856f
@property(readonly, nonatomic) long long addressKind; // @synthesize addressKind=_addressKind;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
- (id)description;	// IMP=0x00000000001784a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000178497
- (unsigned long long)hash;	// IMP=0x0000000000178453
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000178329
- (id)initWithAddress:(id)arg1 addressKind:(long long)arg2;	// IMP=0x0000000000178230
- (id)init;	// IMP=0x00000000001781b6

@end

