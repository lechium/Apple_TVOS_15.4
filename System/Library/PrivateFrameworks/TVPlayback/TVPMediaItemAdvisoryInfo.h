//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject
{
    NSString *_ratingName;	// 8 = 0x8
    NSString *_ratingDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000628c
@property(readonly, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property(retain, nonatomic) NSString *ratingName; // @synthesize ratingName=_ratingName;
- (id)description;	// IMP=0x00000000000061d4
- (id)initWithRatingDescription:(id)arg1;	// IMP=0x0000000000006169

@end

