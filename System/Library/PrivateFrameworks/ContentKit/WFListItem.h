//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSSecureCoding-Protocol.h>

@class NSString, WFImage;

@interface WFListItem : NSObject <NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    WFImage *_image;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004b92b
- (void).cxx_destruct;	// IMP=0x000000000004b8f8
@property(readonly, nonatomic) WFImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004b7f7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004b6e5
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;	// IMP=0x000000000004b61c

@end

