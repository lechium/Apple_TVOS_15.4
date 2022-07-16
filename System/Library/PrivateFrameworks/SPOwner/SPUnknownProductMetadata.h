//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SPUnknownProductMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSArray *_moreDescription;	// 16 = 0x10
    double _percentageX;	// 24 = 0x18
    double _percentageY;	// 32 = 0x20
    NSURL *_image;	// 40 = 0x28
    NSURL *_image2x;	// 48 = 0x30
    NSURL *_image3x;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001204
- (void).cxx_destruct;	// IMP=0x000000000000189f
@property(copy, nonatomic) NSURL *image3x; // @synthesize image3x=_image3x;
@property(copy, nonatomic) NSURL *image2x; // @synthesize image2x=_image2x;
@property(copy, nonatomic) NSURL *image; // @synthesize image=_image;
@property(nonatomic) double percentageY; // @synthesize percentageY=_percentageY;
@property(nonatomic) double percentageX; // @synthesize percentageX=_percentageX;
@property(copy, nonatomic) NSArray *moreDescription; // @synthesize moreDescription=_moreDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)debugDescription;	// IMP=0x000000000000177c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001549
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000146d
- (id)initWithTitle:(id)arg1 description:(id)arg2 percentageX:(double)arg3 percentageY:(double)arg4 image:(id)arg5 image2x:(id)arg6 image3x:(id)arg7;	// IMP=0x0000000000001344
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000120c

@end

