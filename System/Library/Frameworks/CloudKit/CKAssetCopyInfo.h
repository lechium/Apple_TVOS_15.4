//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface CKAssetCopyInfo : NSObject <NSSecureCoding>
{
    NSData *_fileSignature;	// 8 = 0x8
    NSData *_referenceSignature;	// 16 = 0x10
    NSData *_assetKey;	// 24 = 0x18
    NSURL *_assetURL;	// 32 = 0x20
    NSString *_senderID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a1013
- (void).cxx_destruct;	// IMP=0x00000000000a1608
@property(copy, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(copy, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property(copy, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(copy, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
- (id)description;	// IMP=0x00000000000a1579
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00000000000a1257
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a10d1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a101b

@end
