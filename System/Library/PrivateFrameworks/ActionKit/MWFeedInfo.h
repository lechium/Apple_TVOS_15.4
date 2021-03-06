//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCoding-Protocol.h>

@class NSString, NSURL;

@interface MWFeedInfo : NSObject <NSCoding>
{
    NSString *title;	// 8 = 0x8
    NSString *link;	// 16 = 0x10
    NSString *summary;	// 24 = 0x18
    NSURL *url;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001f3c8a
@property(copy, nonatomic) NSURL *url; // @synthesize url;
@property(copy, nonatomic) NSString *summary; // @synthesize summary;
@property(copy, nonatomic) NSString *link; // @synthesize link;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f3b83
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f3a7d
- (id)description;	// IMP=0x00000000001f398a

@end

