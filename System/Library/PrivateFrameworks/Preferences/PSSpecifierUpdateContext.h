//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying>
{
    _Bool _animated;	// 8 = 0x8
    _Bool _updateModelOnly;	// 9 = 0x9
    NSDictionary *_userInfo;	// 16 = 0x10
}

+ (id)contextWithUserInfo:(id)arg1;	// IMP=0x0000000000045b77
+ (id)context;	// IMP=0x0000000000045b63
- (void).cxx_destruct;	// IMP=0x0000000000045d04
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool updateModelOnly; // @synthesize updateModelOnly=_updateModelOnly;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (id)description;	// IMP=0x0000000000045c33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000045bcd

@end
