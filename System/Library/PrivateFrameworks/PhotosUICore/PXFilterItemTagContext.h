//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHKeyword;

@interface PXFilterItemTagContext : NSObject
{
    NSString *_containerId;	// 8 = 0x8
    PHKeyword *_keyword;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000818e08
@property(retain, nonatomic) PHKeyword *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;

@end

