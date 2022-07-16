//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString, NSURL;

@interface CKPackageItem : NSObject
{
    int _sectionIndex;	// 8 = 0x8
    long long _packageIndex;	// 16 = 0x10
    NSURL *_fileURL;	// 24 = 0x18
    unsigned long long _itemID;	// 32 = 0x20
    NSData *_signature;	// 40 = 0x28
    long long _size;	// 48 = 0x30
    long long _offset;	// 56 = 0x38
    NSNumber *_deviceID;	// 64 = 0x40
    NSNumber *_fileID;	// 72 = 0x48
    NSNumber *_generationID;	// 80 = 0x50
    NSData *_wrappedAssetKey;	// 88 = 0x58
    NSString *_itemTypeHint;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000ec2f5
@property(copy, nonatomic) NSString *itemTypeHint; // @synthesize itemTypeHint=_itemTypeHint;
@property(copy, nonatomic) NSData *wrappedAssetKey; // @synthesize wrappedAssetKey=_wrappedAssetKey;
@property(copy, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property(copy, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(copy, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(nonatomic) unsigned long long itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) long long packageIndex; // @synthesize packageIndex=_packageIndex;
- (id)description;	// IMP=0x00000000000ec1d2
- (id)CKPropertiesDescription;	// IMP=0x00000000000ec0bc
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;	// IMP=0x00000000000ebef4
- (id)initWithFileURL:(id)arg1;	// IMP=0x00000000000ebe5b

@end
