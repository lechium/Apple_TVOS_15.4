//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PBSUserProfilePicture : NSObject
{
    NSString *_userIdentifier;	// 8 = 0x8
    NSData *_imageData;	// 16 = 0x10
    struct CGRect _cropRect;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f2e0
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (id)initWithUserIdentifier:(id)arg1 imageData:(id)arg2 cropRect:(struct CGRect)arg3;	// IMP=0x000000000000f140
- (id)initWithUserIdentifier:(id)arg1 imageData:(id)arg2 cropRectValue:(id)arg3;	// IMP=0x000000000000efc0

@end

