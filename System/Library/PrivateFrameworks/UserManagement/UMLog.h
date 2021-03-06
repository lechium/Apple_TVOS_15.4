//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UMLog : NSObject
{
    unsigned long long _type;	// 8 = 0x8
}

+ (id)fault;	// IMP=0x0000000000005fff
+ (id)error;	// IMP=0x0000000000005f61
+ (id)debug;	// IMP=0x0000000000005ec3
+ (id)info;	// IMP=0x0000000000005e25
+ (id)standard;	// IMP=0x0000000000005d8a
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)logMessage:(id)arg1;	// IMP=0x000000000000625d
- (void)logPrivateFormat:(id)arg1;	// IMP=0x000000000000617d
- (void)logPublicFormat:(id)arg1;	// IMP=0x000000000000609d

@end

