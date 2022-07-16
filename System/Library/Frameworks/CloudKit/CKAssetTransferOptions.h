//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_sparseAware;	// 8 = 0x8
    NSNumber *_shouldFetchAssetContent;	// 16 = 0x10
    NSNumber *_shouldFetchAssetContentInMemory;	// 24 = 0x18
    NSNumber *_useMMCSEncryptionV2;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a02cb
- (void).cxx_destruct;	// IMP=0x00000000000a0996
@property(copy, nonatomic) NSNumber *useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property(copy, nonatomic) NSNumber *shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(copy, nonatomic) NSNumber *shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(copy, nonatomic) NSNumber *sparseAware; // @synthesize sparseAware=_sparseAware;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a078d
- (id)description;	// IMP=0x00000000000a077b
- (id)CKPropertiesDescription;	// IMP=0x00000000000a04c9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a0375
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a02d3

@end
