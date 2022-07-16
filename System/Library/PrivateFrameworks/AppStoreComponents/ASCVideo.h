//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class ASCArtwork, NSString;

@interface ASCVideo : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_videoURL;	// 8 = 0x8
    ASCArtwork *_preview;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a6d6
- (void).cxx_destruct;	// IMP=0x000000000000ac5d
@property(readonly, copy, nonatomic) ASCArtwork *preview; // @synthesize preview=_preview;
@property(readonly, copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
- (id)description;	// IMP=0x000000000000ab6d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a9c9
- (unsigned long long)hash;	// IMP=0x000000000000a917
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a90c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a85e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a6de
- (id)initWithVideoURL:(id)arg1 preview:(id)arg2;	// IMP=0x000000000000a61d

@end
