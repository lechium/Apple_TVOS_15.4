//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class LPARAssetProperties, NSData, NSString, NSURL;

@interface LPARAsset : NSObject <NSSecureCoding>
{
    NSData *_data;	// 8 = 0x8
    NSString *_MIMEType;	// 16 = 0x10
    NSURL *_temporaryFileURL;	// 24 = 0x18
    LPARAssetProperties *_properties;	// 32 = 0x20
    NSURL *_fileURL;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006b5d4
- (void).cxx_destruct;	// IMP=0x000000000006bd05
@property(readonly, copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006bbd6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006bab6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006b9d0
- (_Bool)_isSubstitute;	// IMP=0x000000000006b9c8
- (id)_ensureTemporaryAssetURL;	// IMP=0x000000000006b95f
- (id)_createTemporaryFileAndWriteData;	// IMP=0x000000000006b836
- (void)_mapDataFromFileURL;	// IMP=0x000000000006b793
@property(readonly, copy, nonatomic) LPARAssetProperties *properties;
@property(readonly, copy, nonatomic) NSData *data;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;	// IMP=0x000000000006b647
- (unsigned long long)_encodedSize;	// IMP=0x000000000006b5dc
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;	// IMP=0x000000000006b49c
- (id)_initWithARAsset:(id)arg1;	// IMP=0x000000000006b3f9

@end

