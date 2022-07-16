//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMNicknameEncryptionFieldTag, NSData, NSString;

@interface IMNicknameEncryptionCipherRecordField : NSObject
{
    NSString *_fieldName;	// 8 = 0x8
    NSData *_cipherData;	// 16 = 0x10
    NSData *_IV;	// 24 = 0x18
    IMNicknameEncryptionFieldTag *_tag;	// 32 = 0x20
}

+ (id)cipherRecordFieldWithFieldName:(id)arg1 dataRepresentation:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000cb4d
@property(readonly, nonatomic) IMNicknameEncryptionFieldTag *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) NSData *IV; // @synthesize IV=_IV;
@property(readonly, nonatomic) NSData *cipherData; // @synthesize cipherData=_cipherData;
@property(readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (id)description;	// IMP=0x000000000000ce8b
- (void)dealloc;	// IMP=0x000000000000ce33
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x000000000000cd60
- (id)initWithFieldName:(id)arg1 cipherData:(id)arg2 IV:(id)arg3 tag:(id)arg4;	// IMP=0x000000000000ccd4

@end

