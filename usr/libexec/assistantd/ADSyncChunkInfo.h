//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ADSyncChunkInfo : NSObject
{
    NSString *_pre;	// 8 = 0x8
    NSString *_post;	// 16 = 0x10
    NSString *_validity;	// 24 = 0x18
    NSArray *_toAdd;	// 32 = 0x20
    NSArray *_toRemove;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001ad024
@property(retain, nonatomic) NSArray *toRemove; // @synthesize toRemove=_toRemove;
@property(retain, nonatomic) NSArray *toAdd; // @synthesize toAdd=_toAdd;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *post; // @synthesize post=_post;
@property(copy, nonatomic) NSString *pre; // @synthesize pre=_pre;

@end

