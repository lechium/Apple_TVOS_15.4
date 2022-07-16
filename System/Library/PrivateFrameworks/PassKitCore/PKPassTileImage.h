//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString, PKImage;

@interface PKPassTileImage : NSObject <NSSecureCoding>
{
    _Bool _resolved;	// 8 = 0x8
    NSString *_symbolName;	// 16 = 0x10
    long long _tintColor;	// 24 = 0x18
    PKImage *_image;	// 32 = 0x20
    NSData *_imageHash;	// 40 = 0x28
    NSString *_imageName;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000434823
+ (id)_createForDictionary:(id)arg1;	// IMP=0x000000000043454e
- (void).cxx_destruct;	// IMP=0x0000000000434d55
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, copy, nonatomic) NSData *imageHash; // @synthesize imageHash=_imageHash;
@property(readonly, nonatomic) PKImage *image; // @synthesize image=_image;
@property(readonly, nonatomic, getter=isResolved) _Bool resolved; // @synthesize resolved=_resolved;
@property(nonatomic) long long tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
- (_Bool)isEqualToUnresolvedImage:(id)arg1;	// IMP=0x0000000000434cdb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000434af2
- (unsigned long long)hash;	// IMP=0x0000000000434a42
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000043496d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000043482b
- (id)createResolvedImageWithBundle:(id)arg1 privateBundle:(id)arg2;	// IMP=0x00000000004346aa
- (id)_init;	// IMP=0x000000000043467b
- (id)init;	// IMP=0x000000000043466d

@end
