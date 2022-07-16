//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSData;

@interface CNUserSetupPictureData : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_imageData;	// 8 = 0x8
    NSData *_thumbnailImageData;	// 16 = 0x10
    NSData *_memojiMetadata;	// 24 = 0x18
    struct CGRect _cropRect;	// 32 = 0x20
}

+ (id)userSetupPictureDataFromData:(id)arg1;	// IMP=0x000000000004087e
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000040876
+ (id)log;	// IMP=0x000000000004081a
- (void).cxx_destruct;	// IMP=0x0000000000040ef5
@property(retain, nonatomic) NSData *memojiMetadata; // @synthesize memojiMetadata=_memojiMetadata;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) NSData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 cropRect:(struct CGRect)arg3 memojiMetadata:(id)arg4;	// IMP=0x0000000000040d97
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040cb6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000040b59
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000040973

@end

