//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, SAWebAcePicture;

@interface SAWebImageResult
{
}

+ (id)imageResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002a460
+ (id)imageResult;	// IMP=0x000000000002a44e
@property(copy, nonatomic) NSArray *thumbNails;
@property(retain, nonatomic) SAWebAcePicture *picture;
@property(copy, nonatomic) NSNumber *fileSize;
- (id)encodedClassName;	// IMP=0x000000000002a441
- (id)groupIdentifier;	// IMP=0x000000000002a42d

@end

