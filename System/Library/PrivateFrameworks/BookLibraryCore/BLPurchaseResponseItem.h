//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookLibraryCore/NSCopying-Protocol.h>
#import <BookLibraryCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface BLPurchaseResponseItem : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isPurchaseRedownload;	// 8 = 0x8
    NSDictionary *_item;	// 16 = 0x10
    NSString *_downloadID;	// 24 = 0x18
    NSDictionary *_metadata;	// 32 = 0x20
    NSString *_purchaseParameters;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000207e8
- (void).cxx_destruct;	// IMP=0x0000000000020d36
@property(nonatomic) _Bool isPurchaseRedownload; // @synthesize isPurchaseRedownload=_isPurchaseRedownload;
@property(copy, nonatomic) NSString *purchaseParameters; // @synthesize purchaseParameters=_purchaseParameters;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property(copy, nonatomic) NSDictionary *item; // @synthesize item=_item;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020ba2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020a66
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000207f0
- (id)init;	// IMP=0x000000000002076a

@end

