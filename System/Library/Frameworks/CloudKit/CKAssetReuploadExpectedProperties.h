//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_fileSignature;	// 8 = 0x8
    NSData *_referenceSignature;	// 16 = 0x10
    NSData *_assetKey;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a09d4
- (void).cxx_destruct;	// IMP=0x00000000000a0fe0
@property(copy, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property(copy, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(copy, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0e3d
- (id)description;	// IMP=0x00000000000a0e2b
- (id)CKPropertiesDescription;	// IMP=0x00000000000a0c53
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a0acd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a09dc

@end
