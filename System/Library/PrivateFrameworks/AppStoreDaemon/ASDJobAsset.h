//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface ASDJobAsset : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isExternal;	// 8 = 0x8
    _Bool _isLocallyCacheable;	// 9 = 0x9
    _Bool _isZipStreamable;	// 10 = 0xa
    NSString *_assetType;	// 16 = 0x10
    NSString *_assetURL;	// 24 = 0x18
    NSNumber *_bytesTotal;	// 32 = 0x20
    NSData *_dPInfo;	// 40 = 0x28
    NSNumber *_expectedDiskspace;	// 48 = 0x30
    NSData *_hashArrayData;	// 56 = 0x38
    NSNumber *_hashType;	// 64 = 0x40
    NSNumber *_initialODRSize;	// 72 = 0x48
    NSNumber *_numberOfBytesToHash;	// 80 = 0x50
    NSData *_sinfs;	// 88 = 0x58
    NSString *_storeDownloadKey;	// 96 = 0x60
    NSString *_variantID;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000034467
- (void).cxx_destruct;	// IMP=0x0000000000034c1a
@property(copy, nonatomic) NSString *variantID; // @synthesize variantID=_variantID;
@property(copy, nonatomic) NSString *storeDownloadKey; // @synthesize storeDownloadKey=_storeDownloadKey;
@property(copy, nonatomic) NSData *sinfs; // @synthesize sinfs=_sinfs;
@property(copy, nonatomic) NSNumber *numberOfBytesToHash; // @synthesize numberOfBytesToHash=_numberOfBytesToHash;
@property(nonatomic) _Bool isZipStreamable; // @synthesize isZipStreamable=_isZipStreamable;
@property(nonatomic) _Bool isLocallyCacheable; // @synthesize isLocallyCacheable=_isLocallyCacheable;
@property(nonatomic) _Bool isExternal; // @synthesize isExternal=_isExternal;
@property(copy, nonatomic) NSNumber *initialODRSize; // @synthesize initialODRSize=_initialODRSize;
@property(copy, nonatomic) NSNumber *hashType; // @synthesize hashType=_hashType;
@property(copy, nonatomic) NSData *hashArrayData; // @synthesize hashArrayData=_hashArrayData;
@property(copy, nonatomic) NSNumber *expectedDiskspace; // @synthesize expectedDiskspace=_expectedDiskspace;
@property(copy, nonatomic) NSData *dPInfo; // @synthesize dPInfo=_dPInfo;
@property(copy, nonatomic) NSNumber *bytesTotal; // @synthesize bytesTotal=_bytesTotal;
@property(copy, nonatomic) NSString *assetURL; // @synthesize assetURL=_assetURL;
@property(copy, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000034792
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003446f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003429d

@end

