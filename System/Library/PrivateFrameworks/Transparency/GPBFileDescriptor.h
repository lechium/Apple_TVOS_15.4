//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GPBFileDescriptor : NSObject
{
    NSString *package_;	// 8 = 0x8
    NSString *objcPrefix_;	// 16 = 0x10
    unsigned char syntax_;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned char syntax; // @synthesize syntax=syntax_;
@property(readonly, copy, nonatomic) NSString *objcPrefix; // @synthesize objcPrefix=objcPrefix_;
@property(readonly, copy, nonatomic) NSString *package; // @synthesize package=package_;
- (void)dealloc;	// IMP=0x000000000003409f
- (id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2;	// IMP=0x000000000003403d
- (id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3;	// IMP=0x0000000000033fbc

@end
