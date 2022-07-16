//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MDLTextureFilter : NSObject
{
    unsigned long long sWrapMode;	// 8 = 0x8
    unsigned long long tWrapMode;	// 16 = 0x10
    unsigned long long rWrapMode;	// 24 = 0x18
    unsigned long long minFilter;	// 32 = 0x20
    unsigned long long magFilter;	// 40 = 0x28
    unsigned long long mipFilter;	// 48 = 0x30
}

@property(nonatomic) unsigned long long mipFilter; // @synthesize mipFilter;
@property(nonatomic) unsigned long long magFilter; // @synthesize magFilter;
@property(nonatomic) unsigned long long minFilter; // @synthesize minFilter;
@property(nonatomic) unsigned long long rWrapMode; // @synthesize rWrapMode;
@property(nonatomic) unsigned long long tWrapMode; // @synthesize tWrapMode;
@property(nonatomic) unsigned long long sWrapMode; // @synthesize sWrapMode;
- (id)init;	// IMP=0x00000000002db710

@end

