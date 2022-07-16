//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface AMSContentRating : NSObject
{
    NSString *_contentRatingID;	// 8 = 0x8
    NSURL *_imageURL;	// 16 = 0x10
    NSString *_kind;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSString *_ratingDescription;	// 48 = 0x30
    NSNumber *_value;	// 56 = 0x38
}

+ (id)contentRatingWithDictionary:(id)arg1;	// IMP=0x00000000000e0461
- (void).cxx_destruct;	// IMP=0x00000000000e06da
@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSString *contentRatingID; // @synthesize contentRatingID=_contentRatingID;
- (id)description;	// IMP=0x00000000000e04ae
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e0162

@end

