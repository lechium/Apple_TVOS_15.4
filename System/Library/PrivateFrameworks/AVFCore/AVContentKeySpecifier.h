//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AVContentKeySpecifier : NSObject
{
    NSString *keySystem;	// 8 = 0x8
    id identifier;	// 16 = 0x10
    NSDictionary *options;	// 24 = 0x18
}

+ (id)contentKeySpecifierForKeySystem:(id)arg1 identifier:(id)arg2 options:(id)arg3;	// IMP=0x000000000014502d
@property(readonly) NSDictionary *options; // @synthesize options;
@property(readonly) id identifier; // @synthesize identifier;
@property(readonly) NSString *keySystem; // @synthesize keySystem;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000145077
- (void)dealloc;	// IMP=0x0000000000144fdc
- (id)initForKeySystem:(id)arg1 identifier:(id)arg2 options:(id)arg3;	// IMP=0x0000000000144f52

@end

